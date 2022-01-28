#include <stdio.h>
#include <string.h>

typedef struct
{
	char name[12];
	float gpa;
}Student;

int main(void)
{

	Student student1 = {"Spongebob", 3.0};
	Student student2 = {"Patrick", 2.5};
	Student student3 = {"Sandy", 3.5};
	Student student4 = {"Squidward", 4.0};

	Student students[] = {student1, student2, student3, student4};

	int i = 0;
	while(i < sizeof(students) / sizeof(students[0]))
	{
		printf("%-12s\t", students[i].name);
		printf("%.2f\n", students[i].gpa);

		i++;
	}

	return 0;
}