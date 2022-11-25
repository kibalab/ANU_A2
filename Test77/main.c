#include <stdio.h>

int main()
{
	struct student
	{
		int id;
		char* pname;
		double points;
	};

	struct student s1, s2;

	s1.id = 1;
	s1.pname = "Choi";
	s1.points = 9.9;

	s2.id = 2;
	s2.pname = "Park";
	s2.points = 0.1;

	printf("[%d:%s] = %1f\n", s2.id, s1.pname, s1.points);
	printf("[%d:%s] = %1f\n", s2.id, s2.pname, s2.points);

	return 0;
}
