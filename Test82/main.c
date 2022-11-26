#include <stdio.h>

typedef struct student
{
	int id;
	char* pname;
	double points;
} STUD;

int main()
{
	STUD s1 = {1, "Choi", 9.9};
	STUD *ps1 = &s1;

	s1.id = 2;
	ps1->id = 3;

	return 0;
}
