#include <stdio.h>

struct student
{
	int id;
	char* pname;
	double points;
};

void stud_printx(struct student s)
{
	printf("[%d:%s] = $1f\n", s.id, s.pname, s.points);
}

int main()
{
	struct student s1, s2;

	s1.id = 1;
	s1.pname = "Choi";
	s1.points = 9.9;
	s2.id = 2;
	s2.pname = "Park";
	s2.points = 0.1;

	stud_printx(s1);
	stud_printx(s2);
	return 0;
}
