  #include <stdio.h>

  int main()
  {
  	float number;

  	printf("Enter a Floating-point number: ");
  	scanf("%f", &number);

  	printf("With 2 decimal places: %.2f\n", number);
  	printf("With 6 decimal places: %.6f\n", number);

  	return 0;
  }


  