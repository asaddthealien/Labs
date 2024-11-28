#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Employee {
    char name[50];
    int dob[3];
    int empid;
    char dept[50];
    int salary;
};

void addemp(struct Employee emp[], int size) {
    for (int i = 0; i < size; i++) {
        printf("Enter Employee Name: ");
        scanf("%s", emp[i].name);
        printf("Enter Employee Date of Birth (dd mm yyyy): ");
        scanf("%d %d %d", &emp[i].dob[0], &emp[i].dob[1], &emp[i].dob[2]);
        printf("Enter Department: ");
        scanf("%s", emp[i].dept);
        printf("Enter Employee Code: ");
        scanf("%d", &emp[i].empid);
        printf("Enter Salary: ");
        scanf("%d", &emp[i].salary);
    }
}

void deletemp(struct Employee emp[], int del) {
    strcpy(emp[del].name, "");
    emp[del].dob[0] = 0;
    emp[del].dob[1] = 0;
    emp[del].dob[2] = 0;
    strcpy(emp[del].dept, "");
    emp[del].empid = 0;
    emp[del].salary = 0;
}

void displayemp(struct Employee emp[], int size) {
    for (int i = 0; i < size; i++) {
        printf("Employee Name: %s\n", emp[i].name);
        printf("Employee DOB: %d %d %d\n", emp[i].dob[0], emp[i].dob[1], emp[i].dob[2]);
        printf("Employee ID: %d\n", emp[i].empid);
        printf("Employee Department: %s\n", emp[i].dept);
        printf("Employee's Salary: %d\n", emp[i].salary);
    }
}

int main() {
    int choice;
    int size = 0;
    struct Employee emp[100];
    while (1) {
        printf("1. Add an Employee\n2. Delete an Employee\n3. Display all Employees\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: {
                printf("How many employees do you want to add: ");
                scanf("%d", &size);
                addemp(emp, size);
                break;
            }
            case 2: {
                printf("Which Employee do you want to delete? (eg. 1)\n");
                int del;
                scanf("%d", &del);
                deletemp(emp, del - 1);
                break;
            }
            case 3: {
                displayemp(emp, size);
                break;
            }
            case 4: {
                exit(0);
                break;
            }
            default:
                printf("Invalid choice!\n");
        }
    }
    return 0;
}
