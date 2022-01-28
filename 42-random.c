#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	/* pseudo random numbers = A set of values or elements that are statiscally random
							(Don't use these for any sort of cryptographic security)*/
	
	srand(time(0));// this makes rand numbers different each time the code runs

	int number1 = (rand() % 20) + 1; // random number between 1(0+1) - 6(5+1)
	int number2 = (rand() % 20) + 1;
	int number3 = (rand() % 20) + 1;

	printf("Dungeons & Dragons\n");
	printf("\nAttack: %d\n", number1);
	printf("Defense: %d\n", number2);
	printf("Speed: %d\n", number3);

	return 0;
}