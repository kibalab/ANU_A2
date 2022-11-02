#include <stdio.h>

int f(int level)
{
	if(level<10) f(level+1);
	printf("%d\n", level);
}

void main()
{
	f(1);
	return;
}
