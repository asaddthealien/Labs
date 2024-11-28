#include <stdio.h>
#include <string.h>

struct Course{
    char course_name[50];
    char instructor_name[50],students[20][50];
};
struct Department {
    char department_name[50];
    struct Course courses[10];
    int course_count;
};

void add_a_department(struct Department departments[],int *department_count){
	printf("Enter department name: ");
    scanf(" %[^\n]", departments[*department_count].department_name);
    getchar();
    departments[*department_count].course_count = 0;
    (*department_count)++;
}
void add_a_course(struct Department departments[],int *department_count){
	char department_name[50];
    int found = -1,num_students;
    printf("Enter the department name to add a course: ");
    scanf(" %[^\n]", department_name);
    getchar();
	
    for (int i = 0; i < *department_count; i++) {
        if (strcmp(departments[i].department_name, department_name) == 0) {
            found = i;
            break;
        }
    }

    if (found == -1) {
        printf("Department not found.\n");
        return;
    }

    printf("Enter course name: ");
    scanf(" %[^\n]", departments[found].courses[departments[found].course_count].course_name);
    getchar();
    printf("Enter instructor name: ");
    scanf(" %[^\n]", departments[found].courses[departments[found].course_count].instructor_name);
    getchar();
    printf("How many students? ");
    scanf("%d",&num_students);
    if(num_students>0 && num_students<=20){
        for (int i=0;i<num_students;i++){
            printf("Enter name of student %d: ",i+1);
            scanf(" %[^\n]", departments[found].courses[departments[found].course_count].students[i]);
            getchar();
        }
    }else{
        printf("Invalid number of students.\n");
        return;
    }
    departments[found].course_count++;
}
void display_departments(struct Department departments[], int department_count) {
    if (department_count == 0) {
        printf("No departments available.\n");
        return;
    }
    
    for (int i = 0; i < department_count; i++) {
        printf("Department: %s\n", departments[i].department_name);
        for (int j = 0; j < departments[i].course_count; j++) {
            printf("Course Name: %s\n", departments[i].courses[j].course_name);
            printf("Instructor: %s\n", departments[i].courses[j].instructor_name);
            printf("Enrolled Students:\n");
            for(int k=0;k<20;k++){
                if (strlen(departments[i].courses[j].students[k]) > 0){//if student is not empty
                    printf("%s\n",departments[i].courses[j].students[k]);
                }
            }
        }
    }
}

int main() {
	
    struct Department departments[5];
    int department_count = 0;
    
    while (1) {
        int choice;
        printf("----------------------------------------\n");
        printf("1. Add Department\n");
        printf("2. Add Course\n");
        printf("3. Display Departments and Courses\n");
        printf("4. Exit\n");
        printf("----------------------------------------\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();

        switch (choice) {
            case 1:
                add_a_department(departments, &department_count);
                break;
            case 2:
                add_a_course(departments, &department_count);
                break;
            case 3:
                display_departments(departments, department_count);
                break;
            case 4:
                return 0;
        }
    }
return 0;
}

