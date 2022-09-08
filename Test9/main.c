#include <stdio.h>

int main()
{
	float w, t2;

	scanf("%f %f", &w, &t2);

	float BMI = w / t2;

	printf("\nBMI : %f", BMI);
	printf("\nOver : %d", BMI >= 25.0);
	printf("\nFat : %d", 30.0 <= BMI);

	return 0;
}
