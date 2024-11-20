#include <stdio.h>
#include <stdio.h>

struct empdata{
	int employeeid;
	char name[50];
	char department[50];
	float salary;
};

int main()
{
	int n;
	printf("Enter the no of employees data you want to enter: ");
	scanf("%d", &n);
	struct empdata employeedata[n];
	for(int i = 0; i < n; i++)
	{
		printf("Enter EmployeeID: ");
		scanf("%d", &employeedata[i].employeeid);
		printf("Enter Employee Name: ");
		scanf("%s", &employeedata[i].name);
		printf("Enter Employee's Department: ");
		scanf("%s", &employeedata[i].department);
		printf("Enter Employee's Salary: ");
		scanf("%f", &employeedata[i].salary);
	}
	
	for(int i = 0; i < n; i++)
	{
		printf("Employee %d Details\n", i+1);
		printf("%d\n", employeedata[i].employeeid);
		printf("%s\n", employeedata[i].name);
		printf("%s\n", employeedata[i].department);
		printf("%.2f\n", &employeedata[i].salary);
	}
	return 0;
}