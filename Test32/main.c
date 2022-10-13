#include <stdio.h>
int main()
{
	int a[5][5] = { 0, };
	int i, j, k = 1;

	int start, end;

	start = end = 5 /2;


	for(i = 0; i< 5; i++)
	{
		for(j = start;j<= end; j++)
		{
			a[i][j] = k++;
		}
		

		if(i < 5/2)
		{
			start--;
			end++;
		}
		else{
			start++;
			end--;
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

