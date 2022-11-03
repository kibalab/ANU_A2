#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	char str[100];
	int n, i;
	gets(str);
	// n = strlen(str);
	for(i = 0; i< str[i] != '\0'; i++)
	{
		if(isupper(str[i]))
			str[i] = tolower(str[i]);
	}
	printf("%s", str);
}
