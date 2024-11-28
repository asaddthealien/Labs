#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Course { 
    char courseID[20];
    char coursename[50];
    char instructorname[50];
    int credits;     
};

struct department {
    char deptname[50];
    int nofcourses;
    struct Course deptcourse[10];
};

int main() 
{
    struct department dept;
    dept.nofcourses = 0;
    int choice;

    while (1) 
	{
        printf("\n------UNIVERSITY COURSE ENROLLMENT SYSTEM-------\n");
        printf("1. Add Department\n");
        printf("2. Add Courses\n");
        printf("3. Display Details\n");
        printf("4. Total Credits by Department\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) 
		{
            case 1: 
			{
                printf("Enter Department name: ");
                scanf(" %[^\n]", dept.deptname);
                break;
            }
            case 2: 
			{
                printf("How many courses do you want to add? ");
                int numCourses;
                scanf("%d", &numCourses);

                if (dept.nofcourses + numCourses > 10) 
				{
                    printf("Cannot add more than 10 courses. Current limit: %d remaining.\n", 10 - dept.nofcourses);
                    break;
                }

                for (int i = dept.nofcourses; i < dept.nofcourses + numCourses; i++) 
				{
                    printf("Enter Course ID: ");
                    scanf("%s", dept.deptcourse[i].courseID);
                    printf("Enter Course Name: ");
                    scanf(" %[^\n]", dept.deptcourse[i].coursename);
                    printf("Enter Instructor Name: ");
                    scanf(" %[^\n]", dept.deptcourse[i].instructorname);
                    printf("Enter Credit Hours: ");
                    scanf("%d", &dept.deptcourse[i].credits);
                }
                dept.nofcourses += numCourses;
                printf("%d course(s) added successfully.\n", numCourses);
                break;
            }
            case 3: {
                if (dept.nofcourses == 0) 
				{
                    printf("No courses available to display.\n");
                    break;
                }

                printf("\nDepartment Name: %s\n", dept.deptname);
                for (int i = 0; i < dept.nofcourses; i++)
				{
                    printf("\nCourse %d:\n", i + 1);
                    printf("  Course ID: %s\n", dept.deptcourse[i].courseID);
                    printf("  Course Name: %s\n", dept.deptcourse[i].coursename);
                    printf("  Instructor Name: %s\n", dept.deptcourse[i].instructorname);
                    printf("  Credits: %d\n", dept.deptcourse[i].credits);
                }
                break;
            }
            case 4: {
                if (dept.nofcourses == 0) 
				{
                    printf("No courses available to calculate credits.\n");
                    break;
                }

                int totalCredits = 0;
                for (int i = 0; i < dept.nofcourses; i++) 
				{
                    totalCredits += dept.deptcourse[i].credits;
                }
                printf("Department Name: %s\n", dept.deptname);
                printf("Total Credits: %d\n", totalCredits);
                break;
            }
            case 5: {
                printf("Exiting the program. Goodbye!\n");
                exit(0);
            }
            default: {
                printf("Invalid choice. Please try again.\n");
                break;
            }
        }
    }
    return 0;
}
