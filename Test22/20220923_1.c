#include <stdio.h>

int main()
{
	int input = 0 ;
	scanf("%d", &input);

	int k, i, j;

	for(k = input; k >= 0; k--)
	{
		for(i = 0; i < k; i++)
		{
			printf(" ");
		}
		for(j = 1; j <= input-k ; j++)
		{
			printf("%d", j);
		}
		for(j = input-k-1; j > 0; j--)
		{
			printf("%d", j);
		}
		printf("\n");
	}
	for(k = 1; k <= input; k++)
	{
		for(i = 0; i< k; i++)
		{
			printf(" ");
		}
		for(j = 1; j <= input-k; j++)
		{
			printf("%d", j);
		}
		for(j = input-k-1; j > 0; j--)
		{
			printf("%d", j);
		}
		printf("\n");
	}
}
