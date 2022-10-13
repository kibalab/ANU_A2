#include <stdio.h>

void findMultiplerDivisor(int begin, int end, int x, int y);

int main()
{
	int begin, end;
	int x, y;

	scanf("%d %d", &begin, &end);

	scanf("%d", &x);
	scanf("%d", &y);

	findMultiplerDivisor(begin, end, x, y);
	return 0;
}

void findMultiplerDivisor(int begin, int end, int x, int y)
{
	for(;begin <= end; begin++)
	{
		if(begin%x == 0 || y%begin == 0) printf("%d ", begin);
	}
}
