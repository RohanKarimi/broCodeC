#include <stdio.h>

enum Day{Sunday = 1, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday}; 
// assigning the first element some value, left elements will act likely

int main(void)
{
	/* enum = a user defined type of named integer identifiers
		 	  helps to make a program more readable */

	enum Day today = Sunday;

	// printf("%d", today); enums is NOT STRING, but it can be treated as int

	if(today == Sunday || today == Saturday)
	{
		printf("It's the weekend! Party time!");
	}
	else 
	{
		printf("I have to work today :(");
	}

	return 0;
}