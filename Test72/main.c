#include <stdio.h>
int main()
{
	FILE* fp = fopen("t1.txt", "r");

	if(!fp)
	{
		puts("File Open Failed");
		return 0;
	}
	puts("File Open Successed");
	fclose(fp);

	return 0;
}
