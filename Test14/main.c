#include <stdio.h>

int main()
{
	int i, sum = 0, n;

	scanf("%d", &n);

	for(i = 0; i <= n; i++)
	{
		sum+=i;
	}

	printf("sum(0~%d) : %d", n, sum);
}
