#include <stdio.h>

int main()
{
	int dan = 0;

	scanf("%d", &dan);

	for(int i = 1; i<= 9; i++)
	{
		printf("\n%d * %d = %d", dan, i, dan * i);
	}
}
