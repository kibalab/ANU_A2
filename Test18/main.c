#include <stdio.h>

int main()
{
	int min = 999, max = 0;

	int input = 1;

	for(;1;)
	{
		scanf("%d", &input);

		if(input < 0)
		{
			printf("Min : %d, Max : %d", min, max);

			return 0;
		}

		if(input > max)
		{
			max = input;
		}

		if(input < min)
		{
			min = input;
		}
	}
}
