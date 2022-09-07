#include <stdio.h>
#include <stdlib.h>

void rprintf(int* array, int length)
{
	for(int i = length - 1; i >= 0;i--)
	{
		printf("%d ", array[i]);
	}
}

void main()
{
	int count = 1;
	scanf("%d", &count);

	if(count <= 0 || count > 1000)
	{
		printf("Count must be an integer between 1 and 1000");
		return;
	}

	int* numbers = (int*) malloc(count * sizeof(int));

	for(int i = 0; i< count; i++)
	{
		scanf("%d", &numbers[i]);
	}

	rprintf(numbers, count);
}
