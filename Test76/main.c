#include <stdio.h>
#include <string.h>

typedef unsigned int UINT;
typedef unsigned char BYTE;

int main()
{
	BYTE ch = 'a', str[100]="abcd";
	UINT a = 100;

	printf("ch= %c, str= %s\n", ch, str);
	printf("a=%u", a);
	return 0;
}
