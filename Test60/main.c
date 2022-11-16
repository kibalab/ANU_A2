#include <stdio.h>
int main()
{
	int nx=36;
	int ny=0;
	int* pn = &nx;

	ny = *pn;
	*pn = ny +1;
	nx = *pn + *(&ny);

	printf("%d %d %d\n", nx, ny, *pn);
}
