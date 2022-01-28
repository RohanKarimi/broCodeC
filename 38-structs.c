#include <stdio.h>
#include <string.h>

struct Splayer
{
	char name[12];
	int score;
}; // struct need a semicolon at the end

int main(void)
{
	/* Struct = collection of related members ("Variables")
	 			they can be of different data types
				listed under one name in a block of memory
				VERY SIMILAR to classes in other languages (but no methods)*/  
				
	struct Splayer player1;
	struct Splayer player2;

	strcpy(player1.name, "Gabriel");
	player1.score = 4;

	strcpy(player2.name, "Tsuru");
	player2.score = 5;

	printf("%s\n", player1.name);
	printf("%d\n", player1.score);

	printf("\n");
	printf("%s\n", player2.name);
	printf("%d\n", player2.score);
}