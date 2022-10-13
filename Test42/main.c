#include <stdio.h>

int isPrime(int n);

int main()
{
	int i = 0;
	scanf("%d", &i);

	printf((isPrime(i) ? "%d is prime." : "%d is not prime."), i);
}

int isPrime(int n)
{
	if(n < 2) return 0;
	int i = 2 ;
	for (; i <=  n/2; i++)
	{
		if(n%i== 0) return 0;
	}

	return 1;
}

