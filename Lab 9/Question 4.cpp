#include <stdio.h>
#include <string.h>

int main()
{
	char names[5][10] = {"Alice", "Harry", "Charlie", "Diana", "Eve"};
	char name[10];
	printf("Enter a name to search: ");
	scanf("%s", name);

	
		for(int j = 0; j < 5; j++)
		{
			if(strcmp(names[j], name) == 0)
			{
				printf("Found");
				return 0;
				break;
			}
		}
		printf("Not found");
		return 1;
		
	
}