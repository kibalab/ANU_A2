#include <stdio.h>
int sum(int a, int b)
{
	int c;
	c = a + b;
	
	return c;
}

void main() // void function called procedure
{
	int c = sum(10, 20); // return value from function
	printf("%d", c/2);
	
	return;
}
