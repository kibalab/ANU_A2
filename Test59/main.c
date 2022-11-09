#include <stdio.h>
#include <math.h>
#include <string.h>

int GetTenUnits(int units)
{
	int i, result = 1;
	for(i = 0 ; i < units; i++)
	{
		result *= 10;
	}
	return result;
}

int ToDigit(char target[])
{
	int i, result = 0;
	int length = strlen(target);
	// printf("%s : %d\n", target, length);
	for(i = 1 ; i <= length; i++)
	{
		int rev = length - i;
		
		result += GetTenUnits(rev) * (target[i-1] - '0');
		
		// printf("%d = %d : %d\n", rev, GetTenUnits(rev), target[i-1] - '0');
		
	}
	return result;
}

int main()
{
	char i1[128], i2[128];
	
	scanf("%s %s", &i1, &i2);

	printf("%d", ToDigit(i1) + ToDigit(i2));
}
