#include <stdio.h>

int main()
{
	int a = 1;

	while(a >= 1 && a <= 10)
	{
		scanf("%d", &a);
		
		int k = a;
		while(k > 0)
		{
			printf("\nPrint %d" ,k--);
		}
		
		printf("\n");
	}

	printf("\nGoodbye");
	return 0;
}
