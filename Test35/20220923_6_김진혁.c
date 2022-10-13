#include <stdio.h>
#define NUM 8

int main()
{
	int a[NUM+2][NUM+2] = { 0, };
	int i, j, k = 1;

	/**
	8x8 마방진 수열 시트 생성
	**/
	for(i = 0; i< NUM; i++)
	{
		for(j = 0;j< NUM; j++)
		{
			int condition = i == j || 
							i == j - NUM/2 || 
							i-NUM/2 == j ||
							i+j == NUM - 1 || 
							i+j == NUM/2 - 1 || 
							i-NUM/2+j == NUM - 1;
			if(condition)
				a[i][j] = k;
			else
				a[i][j] = (NUM*NUM + 1) - k;
			k++;
		}
	}

	/**
	X축 수열 합 출력
	**/
	int sum = 0;
	for(i = 0; i< NUM; i++)
	{
		for(j = 0;j< NUM; j++)
		{
			sum += a[i][j];
		}
		
		
		a[i][NUM + 1] = sum;
		sum = 0;
	}

	/**
	Y축 수열 합 출력
	**/
	for(i = 0; i< NUM; i++)
	{
		for(j = 0;j< NUM; j++)
		{
			sum += a[j][i];
		}
		
		
		a[NUM + 1][i] = sum;
		sum = 0;
	}
	
	/**
	대각선 X==Y축 수열 합 출력
	**/
	for(j = 0;j< NUM; j++)
	{
		sum += a[j][j];
	}
	a[NUM + 1][NUM + 1] = sum;
	sum = 0;

	/**
	배열 출력
	**/
	for(i = 0; i<= NUM+1; i++)
	{
		for(j = 0; j<= NUM+1; j++)
		{
			printf(a[i][j] == 0 ? "    " : "%3d ", a[i][j]);
		}
		printf("\n");
	}
}

