#include <stdio.h>
#include <stdlib.h>

struct Employee
{
    int emp_id;
    char name[50];
    char department[50];
    float salary;
    struct Employee *ptrNext;
};

void ReadInputs(struct Employee *headPtr, int size)
{
    struct Employee *currentEmp;
    
    if (headPtr == NULL)
    {
        printf("Memory allocation failed!\n");
        exit(0);
    }

    printf("Enter employee details:\n\n");
    //print the head in readimputs function;
    printf("Adress inside head ptr in function: %x\n", headPtr);

    currentEmp = headPtr;

    for (int ind = 0; ind < size; ++ind)
    {
        //printf("\nEnter employee %d details:\n", ind + 1);
        //printf("Enter employee ID:");
        //scanf("%d", &(ptr + ind)->emp_id);
        printf("Enter employee name:");
        getchar();
        gets(currentEmp->name);
        //printf("Enter department:");
        //gets(currentEmp->department);
        printf("Enter salary:");
        scanf("%f", &currentEmp->salary);
        if ((ind + 1) == size)
        {
            currentEmp->ptrNext = NULL;
            break;
        }
        else
        {
            currentEmp->ptrNext = (struct Employee *)malloc(1 * sizeof(struct Employee));
            currentEmp = currentEmp->ptrNext;
            //print new currentEmp
            printf("Adress inside currentEmp ptr: %x\n", currentEmp);
        }
    }

    free(currentEmp);
}

float GetTotalExpenditure(struct Employee *ptr, int size)
{
    struct Employee *currentEmp;
    currentEmp = ptr;
    int total_expenditure = 0;

    for (int i = 0; i < size; i++)
    {
        total_expenditure += currentEmp->salary;
        currentEmp = currentEmp->ptrNext;
    }
    
    printf("\nThe total expenditure of the company is: %d\n", total_expenditure);
    return total_expenditure;
}

int main()
{
    int no_of_emps;
    
    //Allocating memory for the head
    struct Employee *ptrHead = (struct Employee *)malloc(1 * sizeof(struct Employee));
    printf("Enter the no. of employees:");
    scanf("%d", &no_of_emps);

    //Reading inputs from user
    ReadInputs(ptrHead, no_of_emps);
    //print ptrHead in main:
    //printf("Adress inside head ptr in main: %x\n", ptrHead);
    
    //Getting total expenditure of company on salaries
    printf("\nThe total expenditure of the company on salaries: %.2f\n", GetTotalExpenditure(ptrHead, no_of_emps));

    free(ptrHead);
    return 0;
}