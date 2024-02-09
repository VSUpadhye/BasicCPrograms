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

int main()
{
    int no_of_emps;
    printf("Enter the number of employees:");
    scanf("%d", &no_of_emps);
    //printf("The no of emps: %d\n", no_of_emps);

    return 0;
}