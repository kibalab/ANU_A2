#include <stdio.h>

typedef struct student
{
	int id;
	char* pname;
	double points;
} STUD;

int main()
{
	STUD pnuecs[3] = { {1, "Choi", 9.9}, {2, "Park", 0.1}, {3, "Kim", 5.0} };

	int i = 0;

	while (i < 3)
	{
		printf("[%d:%s] = %1f \n", pnuecs[i].id, pnuecs[i].pname, pnuecs[i].points);
		i++;
	}

	return 0;
}
