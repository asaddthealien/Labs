#include<stdio.h>
#include<string.h>
int main(){
	FILE *file1,*file2;
	char line[300];
	
	file1 = fopen("question3_1.txt","r");
	if(file1==NULL){
		printf("Error in opening file");
		return 1;	
	}
	file2= fopen("question3_2.txt","w");
		if(file2==NULL){
			printf("Error in opening file");
			return 1;	
	}
	int lineNumber = 1;
    while (fgets(line, sizeof(line), file1)){
    	for(int i=0;i<strlen(line);i++){
    		if(line[i]>='a' && line[i]<='z'){
    			line[i]-=32;
			}														
		}
		fprintf(file2,"%s",line);
        lineNumber++;
	}
	fclose(file1);
	fclose(file2);
	
return 0;
}

