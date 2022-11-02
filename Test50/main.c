#include <stdio.h>

int f(int n)
{
	if(n==0) return 1;
	if(n>=1) return n*f(n-1);
}

int main()
{
	int fact;
	fact = f(5);
	printf("%d", fact);
	return 0;
}
