#include <stdio.h>
#include <string.h>

struct Student
{
	char name[12];
	float gpa;
};

int main(void)
{

	struct Student student1 = {"Spongebob", 3.0};
	struct Student student2 = {"Patrick", 2.5};
	struct Student student3 = {"Sandy", 3.5};
	struct Student student4 = {"Squidward", 4.0};

	struct Student students[] = {student1, student2, student3, student4};

	int i = 0;
	while(i < sizeof(students) / sizeof(students[0]))
	{
		printf("%-12s\t", students[i].name);
		printf("%.2f\n", students[i].gpa);

		i++;
	}

	return 0;
}