#include<stdio.h>
#include<string.h>
struct book{
	int book_id,quantity,price;
	char title[50],author[50];
};

int is_duplicate_id(struct book mybooks[],int i,int number_of_current_books){
    // j cannot be equal i cuz otherwise it keeps claiming duplicate
    // this only matters if first intialization of book is deleted by user
	for (int j=0; j<number_of_current_books;j++){
        if (j!=i && mybooks[j].book_id == mybooks[i].book_id){
            return 1; // ID is a duplicate
        }
    }
    return 0; // ID is unique
}

void add_books(struct book mybooks[],int *number_of_current_books){
	int number_of_new_books;
	printf("How many books do you want to add? ");
	scanf("%d",&number_of_new_books);
	getchar();
	
	if (number_of_new_books <= 0) {
        printf("\nInvalid number of books. Must be greater than 0.\n");
        return;
    }
    if ((*number_of_current_books) + number_of_new_books > 10) {
        printf("\nNot enough space to add %d books.\n",number_of_new_books);
        return;
    }
    
	for(int i=*number_of_current_books;i<(*number_of_current_books)+number_of_new_books;i++){
		printf("\nEnter Book Title : ");
		scanf("%[^\n]",mybooks[i].title);
		getchar();
		printf("\nEnter Book Author : ");
		scanf("%[^\n]",mybooks[i].author);
		getchar();
		//use do-while for id input cuz need to check for stuff
		do{
			printf("\nEnter Book ID : ");
			scanf("%d",&mybooks[i].book_id);
			if(mybooks[i].book_id<0){
				printf("\nBook ID can not be less than 0");
			}else if(is_duplicate_id(mybooks,i,*number_of_current_books)==1){
				printf("\nDuplicate ID spotted!\n");
			}
		}while(mybooks[i].book_id<0 || is_duplicate_id(mybooks,i,*number_of_current_books)==1);
		printf("\nEnter Book Quantity : ");
		scanf("%d",&mybooks[i].quantity);
		while(mybooks[i].quantity<0){
			printf("\nBook Quantity can not be less than 0");
			printf("\nEnter Book Quantity : ");
			scanf("%d",&mybooks[i].quantity);
		}
		printf("\nEnter Book Price : ");
		scanf("%d",&mybooks[i].price);
		while(mybooks[i].price<0){
			printf("\nBook Price can not be less than 0");
			printf("\nEnter Book Price : ");
			scanf("%d",&mybooks[i].price);
		}
		//add new books to previous books
		FILE *file = fopen("books.txt", "a");
	    if (file == NULL) {
	        printf("Error opening file!\n");
	        return;
	    }
	    fprintf(file, "%s,%s,%d,%d,%d\n",mybooks[i].title, mybooks[i].author,mybooks[i].book_id,
			mybooks[i].quantity, mybooks[i].price);
	    fclose(file);
	}
	*number_of_current_books+=number_of_new_books;
}
void display_books(struct book mybooks[],int number_of_current_books){
	for (int i = 0; i < number_of_current_books; i++) {
        printf("\nBook Title: %s, Book Author: %s, Book ID: %d, Book Quantity: %d, Book Price: %d\n"
				,mybooks[i].title,mybooks[i].author,mybooks[i].book_id,mybooks[i].quantity,mybooks[i].price);
    }
}
void search_by_title(struct book mybooks[],int number_of_current_books){
	char title_input[50];
	printf("\nEnter Title : ");
	scanf("%[^\n]",title_input);
	getchar();
	int found=-1;
	for(int i=0;i<number_of_current_books;i++){
		if(strcmp(title_input,mybooks[i].title)==0){
			printf("\nBook Title: %s, Book Author: %s, Book ID: %d, Book Quantity: %d, Book Price: %d\n"
				,mybooks[i].title,mybooks[i].author,mybooks[i].book_id,mybooks[i].quantity,mybooks[i].price);
			found=10;
		}
	}
	if(found==-1){
		printf("\nBook not found!\n");
	}
}
void search_by_id(struct book mybooks[],int number_of_current_books){
	int id_input;
	printf("\nEnter ID : ");
	scanf("%d",&id_input);
	getchar();
	int found=-1;
	for(int i=0;i<number_of_current_books;i++){
		if(id_input==mybooks[i].book_id){
			printf("\nBook Title: %s, Book Author: %s, Book ID: %d, Book Quantity: %d, Book Price: %d\n"
				,mybooks[i].title,mybooks[i].author,mybooks[i].book_id,mybooks[i].quantity,mybooks[i].price);
			found=10;
		}
	}
	if(found==-1){
		printf("\nBook not found!\n");
	}
}
void total_value(struct book mybooks[],int number_of_current_books){
	int total_value=0;
	for(int i=0;i<number_of_current_books;i++){
		total_value+=mybooks[i].quantity * mybooks[i].price;
	}
	printf("\nTotal Inventory Value: %d\n",total_value);
}
void delete_book(struct book mybooks[],int *number_of_current_books){
	//need to shift array cuz turning values to empty values still would print them
	//also bcuz we need to make sure the size is correct
	int id_input,found=0;
	printf("\nEnter ID to delete: ");
	scanf("%d",&id_input);
	for(int i=0;i<*number_of_current_books;i++){
		if(id_input==mybooks[i].book_id){
			for(int j=i;j<*number_of_current_books-1;j++){
				mybooks[j]=mybooks[j+1];
			}
			(*number_of_current_books)--;
			//after shifting array rewrite file to remove
			//the book from the file
			FILE *file = fopen("books.txt", "w");
	            if (file == NULL) {
	                printf("Error opening file!\n");
	                return;
	            }
	            for (int k = 0; k < *number_of_current_books; k++) {
	                fprintf(file, "%s,%s,%d,%d,%d\n", mybooks[k].title, mybooks[k].author, mybooks[k].book_id,
	                        mybooks[k].quantity, mybooks[k].price);
	            }
	        fclose(file);
	        printf("\nBook with ID %d deleted successfully.\n", id_input);
			found=1;
			break;
		}
	}
	if(!found){
		printf("Book was not found");
	}
}


int main(){
	struct book mybooks[10];
	int number_of_read_books=0;
	//not the same as current books cuz i forgot to add file handling 
	//and now it's too much work to change everything

	FILE *file = fopen("books.txt", "r");
	if (file == NULL) {
	    printf("File not found. Starting with an empty record.\n");
	} else {
	    char line[200];
	    while (fgets(line, sizeof(line), file)) {
	    	//removes new line from fgets value
	    	//strcspn finds the position of \n and then replaces it with \0
	        line[strcspn(line, "\n")] = '\0';
			//%[^\n] reads till new line
			//%[^,] would read till comma
	        if (sscanf(line, "%49[^,],%49[^,],%d,%d,%d", 
	                    mybooks[number_of_read_books].title,
	                    mybooks[number_of_read_books].author, 
	                    &mybooks[number_of_read_books].book_id,
	                    &mybooks[number_of_read_books].quantity,
	                    &mybooks[number_of_read_books].price) == 5) {
	            number_of_read_books++;
	        }
	    }
	    fclose(file);
	}
	int number_of_current_books=number_of_read_books;
	
	while (1) {
        int choice,choice2;
        printf("\n----------------------------------------\n");
        printf("1. Add New Book\n");
        printf("2. View Records\n");
        printf("3. Search Books\n");
        printf("4. Calculate Total Value\n");
        printf("5. Delete Records\n");
		printf("6. Exit\n");
        printf("----------------------------------------\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();

        switch (choice){
            case 1:
                add_books(mybooks,&number_of_current_books);
                break;
            case 2:
                display_books(mybooks,number_of_current_books);
                break;
            case 3:
                printf("1. Search by Title\n2.Search by ID\n");
                scanf("%d",&choice2);
                getchar();
                switch(choice2){
                	case 1:
                		search_by_title(mybooks,number_of_current_books);
                		break;
                	case 2:
                		search_by_id(mybooks,number_of_current_books);
                		break;
                	default:
                		printf("Invalid Choice");
				}
                break;
            case 4:
        		total_value(mybooks,number_of_current_books);
                break;
            case 5:
                delete_book(mybooks,&number_of_current_books);
                break;
            case 6:
            	return 0;
            default:
            	printf("\nInvalid Choice");
        }
    }
return 0;
}

