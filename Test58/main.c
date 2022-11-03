#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	char str[100];
	int n, i;
	gets(str);

	n = 0;
	for(i = 0; str[i] != '\0'; i++)
	{
		if(isdigit(str[i]))
			n = n* 10 + (str[i] - '0');
	}
	printf("%d", n);
}
