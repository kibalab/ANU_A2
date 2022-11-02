#include<stdio.h>

int _pow(int num, int p)
{
	if(p<= 1) return num;
	return _pow(num, p-1) * num;
}

int main()
{
	int num, p;

	scanf("%d %d", &num, &p);
	printf("%d", _pow(num, p));
}
