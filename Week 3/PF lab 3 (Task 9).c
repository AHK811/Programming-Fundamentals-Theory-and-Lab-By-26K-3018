  #include <stdio.h>

  int main()
  {
  	char name[50];
  	char rollNumber[20];

  	printf("Enter Your Name: ");
  	scanf(" %[^\n]", name);

  	printf("Enter Your roll number: ");
  	scanf(" %[^\n]", rollNumber);

  	printf("\nName: %s\n", name);
  	printf("Roll Number: %s\n", rollNumber);
  	printf("\tTabbed Line\n");
  	printf("\nNew Line\n");

  	return 0;
  }
  