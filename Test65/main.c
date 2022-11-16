#include <stdio.h>

int main()
{
	int a[6] = {1,2,3,4,5};

	int i, *p;

	printf("Array name is Pointer number:%p\n", a);

	for(i = 0, p=a; i< 5; i++, p++)
	{
		printf("%d ", *p);
	}

	return 0;
}
