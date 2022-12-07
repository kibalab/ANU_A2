#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int n;

	srand((unsigned)time(NULL));
	n = rand()%9 + 1;

	printf("%d", n);
	return 0;
}
