#include <stdio.h>
#include <string.h>

struct travelPackages 
{
    char packagename[50], destination[50];
    int duration, cost, numofseats;
};

int main()
 {
    struct travelPackages travelPackage[10];
    for (int i = 0; i < 10; i++) {
        strcpy(travelPackage[i].packagename, "");
        strcpy(travelPackage[i].destination, "");
        travelPackage[i].duration = 0;
        travelPackage[i].cost = 0;
        travelPackage[i].numofseats = 0;
    }

    // Initialize some packages
    strcpy(travelPackage[0].packagename, "HolidayDelight");
    strcpy(travelPackage[0].destination, "Paris");
    travelPackage[0].duration = 7;
    travelPackage[0].cost = 1500;
    travelPackage[0].numofseats = 20;

    strcpy(travelPackage[1].packagename, "BeachBreeze");
    strcpy(travelPackage[1].destination, "Maldives");
    travelPackage[1].duration = 5;
    travelPackage[1].cost = 2000;
    travelPackage[1].numofseats = 15;

    strcpy(travelPackage[2].packagename, "MountainEscape");
    strcpy(travelPackage[2].destination, "SwissAlps");
    travelPackage[2].duration = 10;
    travelPackage[2].cost = 2500;
    travelPackage[2].numofseats = 10;

    while (1) {
        printf("\n1. Book packages\n");
        printf("2. Display packages\n");
        printf("3. Exit\n\n");
        int choice;
        scanf("%d", &choice);
        getchar(); // Consume newline character

        if (choice == 1) {
            char hispackagename[50];
            int numseats;
            printf("Enter package name that you want to book?\n");
            scanf(" %[^\n]", hispackagename);
            getchar(); // Consume newline character

            for (int i = 0; i < 10; i++) {
                if (strcmp(travelPackage[i].packagename, hispackagename) == 0) {
                    printf("How many seats do you want to book?\n");
                    scanf("%d", &numseats);
                    getchar(); // Consume newline character

                    if (numseats <= travelPackage[i].numofseats) {
                        travelPackage[i].numofseats -= numseats;
                        printf("Remaining seats are: %d\n", travelPackage[i].numofseats);
                    } else {
                        printf("Number of seats aren't available\n");
                    }
                    break;
                }
            }
        } else if (choice == 2) {
            for (int i = 0; i < 10; i++) {
                if (travelPackage[i].duration != 0) {
                    printf("package name: %s, destination: %s, duration: %d, cost: %d, number of seats: %d\n",
                           travelPackage[i].packagename, travelPackage[i].destination, travelPackage[i].duration,
                           travelPackage[i].cost, travelPackage[i].numofseats);
                } else {
                    printf("No More Packages To Display\n");
                    break;
                }
            }
        }else{
            printf("PROCESS EXITED\n");
            return 0;
        }
    }

    return 0;
}

