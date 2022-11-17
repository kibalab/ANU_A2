#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
	int* a;
	unsigned int size;
	int i;

	puts("Enter N (>0) : ");
	scanf("%u", &size);
	srand(time(0));

	a = (int*) malloc(sizeof(int) * size);
	if (a)
	{
		for(i = 0; i< size; i++)
		{
			a[i] = rand()%10000;

			printf("%d ", a[i]);
		}
		free(a);
	}
	return 0;
}
