#include <stdio.h>
#include <stdlib.h>

struct User
{
	char *name;
	char *email;
	int age;
};

int main(void)
{
	struct User *user;
	char *name, *email;
	int age;

	user = malloc(sizeof(struct User));
	if (user == NULL)
		return NULL;

	user->name = name;
	user->email = email;
	user->age = age;

	return user;




	user = new_user("Odu", "Mygmail", 30);
	if (user == NULL)
		return 1;

	printf("name is %s\nemail is %s\nage is %d\n", user->name, user->email, user->age);
	
	return 0;
}
