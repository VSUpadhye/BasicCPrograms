#include <stdio.h>
#include <stdlib.h>

struct employee
{
    char name[25];
    char hire_date[11];
    float salary;
};

int main()
{
    struct employee Emp = {"Daniel Cell", "12/03/1997", 7500.00};

    printf("Employee name: %s\n", Emp.name);
    printf("Hiring date: %s\n", Emp.hire_date);
    printf("Salary: %.2f\n", Emp.salary);

    //Taking input from user
    printf("Enter employee name:");
    gets(Emp.name);
    printf("Enter hiring date:");
    gets(Emp.hire_date);
    printf("Enter salary:");
    scanf("%f", &Emp.salary);

    printf("Employee name: %s\n", Emp.name);
    printf("Hiring date: %s\n", Emp.hire_date);
    printf("Salary: %.2f\n", Emp.salary);

    return 0;    
}