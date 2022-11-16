#include <stdio.h>

int main()
{
	int i;
	int num = 0, sum = 0;
	char str[] = "123,456,789";
	char *pstr;

	for(pstr = str; *pstr; pstr++)
	{
		if(*pstr == ',')
		{
			sum += num;
			num = 0;
		}
		else {
			num = num * 10 + (*pstr - '0');
		}
	}

	sum += num;
	printf("Sum of all values in ");
	printf(" CSV[%s] : %d", str, sum);

	return 0;
}
