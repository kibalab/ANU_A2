#include <stdio.h>

int main()
{
	int a = 1, *pa = &a;

	printf("a: %d, pa: %p\n", a, pa);
	++*pa;
	printf("a: %d, pa: %p\n", a, pa);
	*pa++;
	printf("a: %d, pa: %p\n", a, pa);
	a += *--pa;
	printf("a: %d, pa: %p\n", a, pa);


	return 0;
}
