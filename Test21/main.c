#include <stdio.h>
int main()
{
	int i = 0;
	scanf("%d", &i);

	for(int h = 0; h < i; h++){
		for(int l = i-h; l > 0; l--)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
