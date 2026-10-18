# C Programming Practice: Six Problems

Six standalone C programs covering nested loops, 2D and 3D arrays, string scansets and input validation. Each file is self-contained and compiles on its own.

## Files

| File | Problem | Core concept |
|------|---------|--------------|
| `q1_x_pattern.c` | Emergency sign X pattern | Nested loops, diagonal conditions |
| `q2_ticket_pattern.c` | Right-aligned number pattern | Nested loops, space padding |
| `q3_factory_defects.c` | Factory batch defect analysis | 2D array, average comparison |
| `q4_emergency_messages.c` | Emergency message symbol counter | 2D char array, `%40[^\n]` |
| `q5_farm_insects.c` | Farm insect inspection | 3D array, per-field totals |
| `q6_restaurant_bills.c` | Restaurant table billing | Scanset input, parallel arrays |

## Build and Run

Requires `gcc` (or any C99-compatible compiler).

```bash
gcc -Wall -Wextra -o q1 q1_x_pattern.c
./q1
```

Compile all six at once:

```bash
for f in q*.c; do gcc -Wall -Wextra -o "${f%.c}" "$f"; done
```

---

## Q1: Emergency Sign (X Pattern)

**Task:** Print an X of stars in an N x N grid. Stars sit on both diagonals; everything else is a space.

**Approach:** For each cell `(i, j)`, print `*` if `i == j` (main diagonal) or `i + j == N - 1` (anti-diagonal), otherwise print a space.

**Input:** one integer `N`.

**Sample (N = 5):**

```
*   *
 * * 
  *  
 * * 
*   *
```

**Notes:**
- Works for any positive `N`. For even `N` the diagonals never cross, so there is no centre star.
- Trailing spaces on each row are intentional so the grid stays N columns wide.

---

## Q2: Ticket Machine (Right-Aligned Pattern)

**Task:** Print N rows. Row `i` shows `1` through `i` in ascending order, right-aligned.

**Approach:** For each row `i`, print `N - i` spaces, then the numbers `1..i`.

**Input:** one integer `N`.

**Sample (N = 5):**

```
    1
   12
  123
 1234
12345
```

**Notes:**
- Alignment is correct for `N` up to 9. From `N = 10` the multi-digit numbers widen the rows, so the right edge no longer lines up.

---

## Q3: Factory Defect Analysis

**Task:** 5 batches with 6 products each (1 = defective, 0 = acceptable). Count defects per batch, compute the overall defect percentage, and flag batches against the average.

**Formulas:**
- Defect percentage = (total defects / total products) x 100
- Average defects per batch = total defects / 5

**Approach:**
1. Read a `5 x 6` array, rejecting anything other than 0 or 1.
2. Sum each row into `defects[batch]` and accumulate `total`.
3. Compute `average` as a `double`, so it is not truncated by integer division.
4. Classify each batch as **ABOVE**, **EQUAL** or **Below** the average.

**Sample run:**

Input rows:
```
1 0 0 1 0 0
0 0 0 0 0 0
1 1 1 0 0 1
0 1 0 0 0 0
1 1 0 0 1 0
```

Output:
```
Batch    Defects  Status
1        2        EQUAL to average
2        0        Below average
3        4        ABOVE average
4        1        Below average
5        3        ABOVE average

Total defects: 10 of 30
Average defects per batch: 2.00
Overall defect percentage: 33.33%
```

**Notes:**
- "Equal" is reported separately from "above", as the problem requires.
- Comparing `int` to `double` is safe here because the average is `total / 5.0`.

---

## Q4: Emergency Message Monitor

**Task:** Read 5 messages (max 40 characters each, spaces allowed) into a 2D char array using `%40[^\n]`. Count `!` and `?` in each message, display the counts, and find the message with the most of both combined.

**Approach:**
1. `char msg[5][41]`: 40 characters plus the null terminator.
2. Read with `scanf(" %40[^\n]", msg[i])`. The leading space skips leftover whitespace and newlines.
3. Discard anything beyond 40 characters on the same line with a `getchar()` loop, so extra input does not leak into the next message.
4. Nested loops walk every character of every message and count `!` and `?`.
5. Track the index with the highest combined count.

**Sample run:**

Input:
```
hi!?
what?? now!!
ok
!
???
```

Output (tail):
```
Message 5: "???"
  '!' count: 0, '?' count: 3, combined: 3

Message 2 has the most symbols combined (4): "what?? now!!"
```

**Notes:**
- Ties go to the earliest message, because the comparison is strictly greater-than.
- `%[^\n]` does not skip leading whitespace by itself, so the space before `%` is required.

---

## Q5: Farm Insect Inspection

**Task:** 3 fields, 4 plots each, inspected morning and evening. Find plots where the count rises, total each field, and identify the field with the highest total.

**Data layout:** `insects[field][plot][period]`, with period `0` = morning and `1` = evening.

**Approach:**
1. Read all 24 counts, rejecting negatives and re-prompting.
2. Add every reading to its field total as it is read.
3. A plot "increases" only if `insects[f][p][1] > insects[f][p][0]`, comparing the same plot across periods.
4. Pick the field with the largest total.

**Sample run:**

Input (morning evening, one plot per line, plots in order for fields 1 to 3):
```
5 8
3 3
0 2
7 4
1 1
9 6
2 5
4 4
6 9
0 0
3 8
5 2
```

Output:
```
Plots with an increase from morning to evening:
Field 1, plot 1: 5 -> 8
Field 1, plot 3: 0 -> 2
Field 2, plot 3: 2 -> 5
Field 3, plot 1: 6 -> 9
Field 3, plot 3: 3 -> 8

Field 1 total: 32
Field 2 total: 32
Field 3 total: 33

Field 3 has the highest combined count: 33
```

**Notes:**
- Field totals sum all 8 readings per field. Plot values are single readings. The two are never mixed.
- A plot with equal morning and evening counts is not an increase.
- If two fields tie for the highest total, the lower-numbered field is reported.

---

## Q6: Restaurant Billing

**Task:** 3 tables, exactly 3 orders each. For each order read the dish name, quantity and price per item. Display each table's orders, compute each table's bill, and report the table with the highest bill.

**Approach:**
1. Dish names are read with `scanf(" %49[^\n]", dish[t][o])`. The scanset allows multi-word names, the width of 49 prevents overflow into a 50-byte buffer, and the leading space consumes the newline left behind by the previous numeric `scanf`.
2. Quantity must be positive and price non-negative, with re-prompting on bad input.
3. Subtotal is `quantity * price`, and a table's bill is the sum of its three subtotals.
4. Track the table with the maximum bill.

**Sample (Table 1):**

Input:
```
Chicken Karahi
2
10.5
Naan
4
1
Tea
1
2
```

Output:
```
Table 1
Dish                      Qty      Price      Subtotal
Chicken Karahi            2        10.50      21.00
Naan                      4        1.00       4.00
Tea                       1        2.00       2.00
Total bill: 27.00
```

**Notes:**
- Without the leading space in `" %49[^\n]"`, the newline after the previous number would be read as an empty dish name. This is the bug the problem statement is warning about.
- On a tie for the highest bill, the lower-numbered table is reported.

---

## Design Decisions

- **Validation loops:** Q3, Q5 and Q6 re-prompt on invalid input (non-0/1, negative counts, non-positive quantities) instead of silently accepting it.
- **Return codes:** Every program checks `scanf`'s return value and exits with a non-zero status on a read failure.
- **Fixed sizes:** Array sizes are `#define` constants, so changing the problem dimensions means editing one line.
- **Style:** All source files are intentionally comment-free, as required.

## Known Limitations

- Q2's alignment breaks visually from `N >= 10`.
- Q4 treats any text beyond 40 characters as discarded rather than as an error.
- Q6 reads prices as `float`. For real money, integer cents would be more accurate.
