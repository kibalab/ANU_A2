# include <stdio.h>

char lower2Upper(char);

int main ()
{
	char c;

	scanf("%c", &c);

	printf("%c", lower2Upper(c));
}

char lower2Upper(char c)
{
	if(c >= 'a' || c <= 'z') return c-32;
}

