#include<stdio.h>
#include<string.h>

int main()
{
    char plaintext[100],key[50],output[100];
    printf("Enter Plain Text : ");
    scanf("%[^\n]",plaintext);
    getchar();
    printf("Enter Key: ");
    scanf("%[^\n]",key);
    int length=strlen(plaintext);

    char keymap[length+1];
    int j=0;
    for(int i=0;i<length;i++)
	{
        if(j>=strlen(key))
		{
               j=0;
        }
        keymap[i]=key[j];
        j++;
    }
    keymap[length]='\0';

    for(int k=0;k<length;k++)
	{
        int ConvertText=(int)plaintext[k];
        int ConvertMap=(int)keymap[k];
        if(plaintext[k]!=' ')
		{
            ConvertText-=64;
        }
		else if(plaintext[k]==' ')
		{
            ConvertText=20;
        }
        ConvertMap-=64;
        int cypher=ConvertMap+ConvertText;
        cypher=cypher%26;
        cypher+=64;
        output[k]=(char)cypher;
    }
    output[length]='\0';
    printf("%s",output);

    return 0;
}