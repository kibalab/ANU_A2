#include <stdio.h>
int main()
{
	int a[5][5] = { 0, };
	int i, j, k = 1;


	for(i = 0; i< 5; i++)
	{
		for(j = 0;j<= i; j++)
		{
			a[j][i-j] = k++;
		}
		
	}
	
	for(i = 1; i< 5; i++)
	{
		for(j = i; j <= 4; j++ )
		{
			a[j][i+4-j] = k++;
		}
	}

	for(i = 0; i< 5; i++)
	{
		for(j = 0; j< 5; j++)
		{
			printf(a[i][j] == 0 ? "   " : "%2d ", a[i][j]);
		}
		printf("\n");
	}
}

