#include <stdio.h>

void div(int a, int b)
{
	int c;
	if(b == 0)
	{
		return;
	}

	c = a/b;
	printf("%d", c);
}

int main()
{
	div(5, 0);
	return 0;
}

