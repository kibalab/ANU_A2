#include <stdio.h>

void f(int a)
{
	a++;
	printf("f : %d\n", a);
}

int main()
{
	int a = 1;
	printf("main : %d\n", a);
	f(a);
	printf("main : %d\n", a);
	return 0;
}
