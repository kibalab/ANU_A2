#include <stdio.h>

int sigma(int, int);

int main()
{
	int n;
	scanf("%d", &n);

	printf("Sigma(n) = %d", sigma(1, n));
}

int sigma(int i, int n)
{
	int s = 0;
	for(; i<= n; i++)
	{
		s+= i;
	}

	return s;
}
