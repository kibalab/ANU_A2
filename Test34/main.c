#include <stdio.h>
int main()
{
	int a[5][5] = { 0, };
	int i, j, k = 1;


	for(i = 0; i< 4; i++)
	{
		for(j = 0;j< 4; j++)
		{
			if(i == j || i+j == 3)
				a[i][j] = k;
			else
				a[i][j] = 17 - k;
			k++;
		}
		
	}
	

	for(i = 0; i< 4; i++)
	{
		for(j = 0; j< 4; j++)
		{
			printf(a[i][j] == 0 ? "   " : "%2d ", a[i][j]);
		}
		printf("\n");
	}
}

