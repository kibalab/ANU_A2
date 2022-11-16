#include <stdio.h>
int main()
{
	int nx= 36;
	int ny= 0;
	int* pn = &nx;

	printf("%p\n", &nx);
	printf("%p\n", &ny);
	printf("%p\n", pn);
	printf("SIZE : %d\n", sizeof(pn));
	printf("%p\n", &pn);

	ny = *pn;
	*pn = ny + 1;
	nx = *pn + *(&ny);

	printf("%d, %d, %d\n", nx, ny, *pn);
}
