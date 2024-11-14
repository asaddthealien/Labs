#include <stdio.h>
#include <string.h>

int main()
{
	char username[] = "Asad";
	char password[] = "1234";
	
	char username1[100];
	char password1[100];
	printf("Username: ");
	scanf("%s", username1);
	printf("Password: ");
	scanf("%s", &password1);
	
	if(strcmp(username, username1) == 0 && strcmp(password, password1) == 0)
	{
		printf("Access granted");
	}
	else
	{
		printf("Access denied");
	}
	return 0;
}