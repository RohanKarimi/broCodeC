#include <stdio.h>

enum Day{Sunday = 1, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday}; 
// assigning the first element some value, left elements will agree the value
int main(void)
{
	// enum = a user defined type of named integer identifiers
	// helps to make a program more readable

	enum Day today = Sunday;

	printf("%d", today);

	return 0;
}