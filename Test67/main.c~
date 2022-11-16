#include <stdio.h>

int main()
{
	int i;
	int num = 0, sum = 0;
	char str[] = "123,456,789";

	for(i = 0; str[i]; i++)
	{
		if(str[i] == ',')
		{
			sum += num;
			num = 0;
		}
		else {
			num = num * 10 + (str[i]- '0');
		}
	}

	sum += num;
	printf("Sum of all values in ");
	printf(" CSV[%s] : %d", str, sum);

	return 0;
}
