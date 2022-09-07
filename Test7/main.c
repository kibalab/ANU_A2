#include <stdio.h>

int n;

//######### HERE ##########

char grade(int n)
{
	if(60 > n) return 'F';
	else if(70 > n) return 'D';
	else if(80 > n) return 'C';
	else if(90 > n) return 'B';
	else return 'A';
}

//#########################

int main()
{
	scanf("%d", &n);
	printf("%c", grade(n));
	return 0;
}
