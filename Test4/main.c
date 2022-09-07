#include <stdio.h>

int GetGCD(int i0, int i1)
{
	int min;
	int divisor;

	min = (i0<i1) ? i0 : i1;

	for(int i = 1; i<= min; i++)
	{
		if(i0%i == 0 && i1%i == 0)
		{
			divisor = i;
		}
	}
	return divisor;
}

int GetLCM(int i0, int i1)
{
	int max;

	max = (i0>i1) ? i0 : i1;

	for(int i = max;; i++)
	{
		if(i%i0 == 0 && i % i1 == 0)
		{
			return i;
		}
	}
	return -1;
}

void main()
{
	int i0, i1;

	scanf("%d %d", &i0, &i1);

	printf("%d %d", GetGCD(i0, i1), GetLCM(i0, i1));
}
