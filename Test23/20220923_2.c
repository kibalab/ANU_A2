#include <stdio.h>

int main()
{
	int k = 0;
	int n = 0;

	scanf("%d %d", &n, &k);

	int i = 0;
	int j = 0;

	int c = 0;
	for(i = 1; i<= n-k; i++)
	{
		
		int sum = 0;
		for(j = i; j<i+k; j++)
		{
			sum += j;
		}
		if(sum % 15 == 0)
		{
			c++;
		}
		// printf("[Test] %d~%d : %d\n", i, i+k-1, sum);
		
	}
	printf("%d", c);
}
