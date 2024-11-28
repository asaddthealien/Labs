#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *file1;
	int line = 1;
	char text[500];
	
	file1 = fopen("firstfile.txt", "r");
	if(file1 == NULL)
	{
		printf("Error");
		exit(1);
	}
	else
	{
        while(fgets(text, sizeof(text), file1) != NULL)
		{
		    printf("%d. %s", line, text);
			line++;	
		}	
		fclose(file1);
	}
	
	return 0;
}