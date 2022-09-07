#include <stdio.h>

void main()
{
	int numbers[10];

	int sum = 0;
	int min = 9999;
	int max = -9999;

	for(int i = 0 ; i< 10; i++)
	{
		scanf("%d", &numbers[i]);
		sum += numbers[i];
		if(min > numbers[i])
		{
			min = numbers[i];
		}
		if(max < numbers[i])
		{
			max = numbers[i];
		}
	}

	printf("%d %d %d", sum, max, min);
}
