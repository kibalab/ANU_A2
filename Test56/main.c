#include <stdio.h>
#include <string.h>

int main()
{
	char pw1[20] = "computer game";
	char pw2[20];

	printf("Input current password : ");
	scanf("%s", pw2);
	printf("\n");

	printf( strncmp(pw1, pw2, 8) == 0 ? "Please new password" : "Wrong password");
	
	return 0;
}
