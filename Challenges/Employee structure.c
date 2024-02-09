#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Employee
{
    int emp_id;
    char name[50];
    char department[50];
    float salary;
};

void taking_input(struct Employee *ptr, int size)
{
    printf("Enter employee details:\n\n");
    
    for (int ind = 0; ind < size; ind++)
    {
        printf("Enter employee %d details:\n", ind + 1);
        printf("Enter employee name:");
        getchar();
        gets((ptr + ind)->name);
        printf("Enter department:");
        gets((ptr + ind)->department);
        printf("Enter salary:");
        scanf("%f", &(ptr + ind)->salary);
    }
    for (int i = 0; i < size; i++)
    {
        printf("Name: %s\n", (ptr + i)->name);
        printf("Department: %s\n", (ptr + i)->department);
        printf("Salary: %.2f\n", (ptr + i)->salary);
    }
    
}

int main()
{
    int no_of_emps;
    printf("Enter the number of employees:");
    scanf("%d", &no_of_emps);
    //printf("The no of emps: %d\n", no_of_emps);
    
    struct Employee *ptrEmp = (struct Employee *)malloc(no_of_emps * sizeof(struct Employee));

    if (ptrEmp == NULL)
    {
        printf("Memory allocation failed!\n");
        exit(0);
    }
    printf("Memory allocation successful!\n");

    taking_input(ptrEmp, no_of_emps);
        
    free(ptrEmp);
    return 0;
}