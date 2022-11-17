#include <stdio.h>
#include <assert.h>

int main()
{
	FILE* fp = NULL;
	FILE* op = NULL;

	fp = fopen("t1.txt", "r");
	op = fopen("out.txt", "a");

	if(!fp) return 0;

	int n;
	int i;
	char name[10];
	int kor, eng, mat;

	fscanf(fp, "%d", &n);

	for(i = 0; i < n; i++)
	{
		fscanf(fp, "%s %d %d %d", &name, &kor, &eng, &mat);
		fprintf(op, "%s %d %.2f\n", name, kor+eng+mat, ((float)kor+eng+mat)/3.0);
	}
	fclose(fp);
	fclose(op);
}
