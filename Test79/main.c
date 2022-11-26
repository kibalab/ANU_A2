#include <stdio.h>

typedef struct student1
{
	int id;
	char* pname;
	double points;
} STUD1;
typedef struct student2
{
	int id;
	char name[128];
	double points;
} STUD2;

int main()
{
	STUD1 st11 = {1, "Kim", 91.9}, st12, st13;
	STUD2 st21 = {2, "Lee", 92.1}, st22, st23;

	//st12 = {3, "Park", 89.9}; // Can not insert normal value to Pointer member (Pointer address only allowed)
	//st22 = {4, "Chio", 93.1};

	st13.id = 1;
	st13.pname = "Kim";
	st13.points = 91.9;

	st23.id = 2;
	//st23.name = "Lee";
	st23.points = 92.1;

	return 0;
}
