#include <stdio.h>
int main()
{
	int a=5, b=16;
	int c;
	
	c=a&b;
	printf("%d&%d=%d\n", a,b,c);
	
	c=a|b;
	printf("%d|%d=%d\n", a,b,c);
	
	c=a^b;
	printf("%d^%d=%d\n", a,b,c);
	
	c=~b;
	printf("~%d=%d\n", b,c);
	
	c=a<<b;
	printf("%d<<%d=%d\n", a,b,c);
	
	c=a>>b;
	printf("%d>>%d=%d\n", a,b,c);
}

