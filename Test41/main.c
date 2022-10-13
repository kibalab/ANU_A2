#include <stdio.h>

void square(double a);

int main()
{
	double x;

	square(2.5);

	printf("\n Input Number (x.x) : ");
	scanf("%f", &x);

	square(x);

	return 0;
}

void square(double a)
{
	printf("power(%2.1f) = %2.2f\n", a, a*a);
}
