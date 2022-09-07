#include <stdio.h>

void main()
{
	int line = 3;
	scanf("%d", &line);
	
	
	for(int i = 0; i< line; i++)
	{
		printf("\n");
		for(int j1 = 0; j1 < i; j1++)
		{
			printf(" ");
		}

		for(int j0 = 0; j0 < line - i; j0++)
		{
			printf("*");
		}
	}
}
