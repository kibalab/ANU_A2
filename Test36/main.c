#include <stdio.h>

void line(int length, char c)
{
	int i = 0;
	for(; i < length; i++)
	{
		printf("%c", c);
	}
	printf("\n");
}

int main()
{
	line(20, '='); // Call function -> line()
	printf("Kim Jin Hyeok            \n");
	line(10, '-');
	line(5, '+');
	line(20, '=');
	return 0;	
}
