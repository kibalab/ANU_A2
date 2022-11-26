#include <stdio.h>

typedef struct student
{
	int id;
	char* pname;
	double points;
} STUD;

void stud_printx(STUD s)
{
	printf("[%d:%s] = %1f \n", s.id, s.pname, s.points);
}

void stud_print(STUD *ps)
{
	printf("[%d:%s] = %1f \n", ps->id, ps->pname, ps->points);
}

void stud_swap(STUD s1, STUD s2)
{
	STUD temp = s1;
	s1 = s2;
	s2 = temp;
}

void main()
{
	STUD s1 = {1, "Choi", 9.9};
	STUD s2 = {2, "Park", 0.1};

	stud_printx(s1);
	stud_printx(s2);

	stud_swap(s1, s2);

	stud_print(&s1);
	stud_print(&s2);

	return;
}
