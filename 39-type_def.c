#include <stdio.h>
#include <string.h>

typedef struct
{
	char name[25];
	char password[12];
	int id;
}User; // to create an "new" datastruct you need use struct then add typedef
	   // to short it

int main(void)
{
	// typedef = reserved keyword that gives an existing datatype a "nickname"
	// mostly used for convenience

	User user1 = {"Bro", "password123", 123456789};
	User user2 = {"Bruh", "password321", 987654321};

	printf("%s\n", user1.name);
	printf("%s\n", user1.password);
	printf("%d\n", user1.id);

	printf("\n");

	printf("%s\n", user2.name);
	printf("%s\n", user2.password);
	printf("%d\n", user2.id);

	return 0;
}