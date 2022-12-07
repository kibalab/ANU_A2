#include <stdio.h>
#include <assert.h>

int main()
{
	FILE* fp = NULL;
	int ch;

	fp = fopen("MyFile1.txt", "w");

	while((ch=getchar()) != EOF)
	{
		fputc(ch, fp);
	}
	fclose(fp);
	puts("Successfully wrote file");

	fp = fopen("MyFile1.txt", "r");

	while ((ch=fgetc(fp)) != EOF)
	{
		putchar(ch);
	}
	fclose(fp);
	puts("\nSuccessfully read MyFile1.txt");

	return 0;
}
