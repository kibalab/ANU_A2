#include <stdio.h>

void line(int, char); // prototype function

int main()
{
	line(20, '='); // call function
	printf("Kim Jin Hyeok\n");
	line(10, '-');
	line(5, '+');
	line(20, '=');

	return 0;
}

void line(int length, char c) // define function from prototype
{
	int i = 0;
	for(; i< length; i++)
	{
		printf("%c", c);
	}
	printf("\n");
}
