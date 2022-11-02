#include <stdio.h>

int count;

int a()
{
	count++;
	if(count<10) a();
}

int main()
{
	count = 0;
	a();
	printf("%d", count);
}
