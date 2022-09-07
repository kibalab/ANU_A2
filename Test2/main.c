#include <stdio.h>

typedef enum NType { Perfect, Deficient=1, Abundant=2} NumberType;


NumberType CheckNumber(int number)
{
	int acc = 0;
	for(int i = 1; i<= number; i++)
	{
		if(number % i == 0 && number != i)
		{
			acc += i;	
		}
	}

	if(acc == number)
	{
		return Perfect;
	}
	else if (acc < number)
	{
		return Deficient;
	}
	else 
	{
		return Abundant;
	}
}

void main()
{
	int input = 0;
	scanf("%d", &input);
	

	NumberType type = CheckNumber(input);

	printf("%5d  ", input);
	switch(type)
	{
		case 0:
			printf("PREFECT");
			break;
		case 1:
			printf("DEFICIENT");
			break;
		case 2:
			printf("ABUNDENT");
			break;
	}

	return;
}
