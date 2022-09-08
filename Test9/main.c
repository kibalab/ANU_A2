#include <stdio.h>

int main()
{
	float w, t2;

	scanf("%f %f", &w, &t2);

	float BMI = w / t2;

	printf("\nBMI : %f", BMI);
	printf("\nOver : %d", BMI >= 25.0);
	printf("\nFat : %d", 30.0 <= BMI);


	printf("\n\n당신의 체질량 지수는 '");
	if(BMI >= 30)
	{
		printf("비만");
	}
	else if(BMI >= 25)
	{
		printf("과체중");
	}
	else
	{
		printf("정상");
	}

	printf("'범위 내에 있습니다.");
	return 0;
}
