#include<stdio.h>

void a(int level)
{
	if(level>10)return;
	a(level+1);
	printf("%d\n", level);
}

int main()
{
	a(1);
}
