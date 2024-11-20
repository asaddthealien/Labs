//same as question 1
#include<stdio.h>
#include<string.h>

void Reverse(char input[],int size,int i)
{
	if(i==size/2){
		return;
	}
	char temp=input[i];
	input[i]=input[size-i-1];//-1 cuz of null terminator
	input[size-i-1]=temp;
	
	Reverse(input,size,i+1);
}
int main()
{
	char input[50];
	printf("Enter a sentence: ");
	scanf("%[^\n]",input);
	getchar();
	
	int size=strlen(input);
	Reverse(input,size,0);
	
	printf("%s",input);
return 0;
}

