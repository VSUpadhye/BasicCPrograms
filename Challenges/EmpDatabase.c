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

void PrintEmployee(struct Employee *emp)
{
    //printf("Employee ID: %d\n", emp->emp_id);
    printf("Name: %s\n", emp->name);
    //printf("Department: %s\n", emp->department);
    printf("Salary: %.2f\n\n", emp->salary);
}

void PrintAllEmployees(struct Employee *head)
{
    struct Employee *currentEmp = head;
    
    printf("Printing all employee details\n");
    while(currentEmp != NULL)
    {
        PrintEmployee(currentEmp);
        currentEmp = currentEmp->ptrNext;
        printf("printing temp value: %x\n", currentEmp);
    }

}

void ReadInputs(struct Employee *headPtr, int size)
{
    struct Employee *currentEmp;
    
    printf("Enter employee details:\n\n");
    //print the head in readimputs function;
    //printf("Adress inside head ptr in function: %x\n", headPtr);

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
            //printf("Adress inside currentEmp ptr: %x\n", currentEmp);
        }
    }
}

struct Employee *SortEmployeesOnSalary(struct Employee *headPtr, int size)
{
    int ind1, ind2;
    struct Employee *currentEmp = headPtr, *temp_emp, *old_rhs;
    struct Employee *lhs, *rhs;
    
    printf("head pointer: %.2f\n", headPtr->salary);
    for (ind1 = 0; ind1 < size - 1; ind1++)
    {
        for (ind2 = 0; ind2 < size - ind1 - 1; ind2++)
        {
            lhs = currentEmp;
            rhs = currentEmp->ptrNext;

            //if ((ptr + ind2)->salary < (ptr + ind2 + 1)->salary)
           //Swap case
            if (lhs->salary < rhs->salary)//Swap c
            {
                
                //printf("\nhead pointing to: %.2f,    current: %.2f\n", headPtr->salary, currentEmp->salary);
                if (ind2 == 0)
                {
                    //set the head to rhs node
                    headPtr = rhs;
                }
                else
                {
                    old_rhs->ptrNext = rhs;
                }
                old_rhs = rhs;
                //remember rhs.next
                temp_emp = rhs->ptrNext;
                //rhs.next = current
                rhs->ptrNext = currentEmp;
                //lhs.next = remembered
                lhs->ptrNext = temp_emp;

            }
            //printf("Current = %.2f\n", currentEmp->salary);
        }
        currentEmp = headPtr;
        printf("head pointer: %.2f\n", headPtr->salary);
    }

    return headPtr;
}
/*
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
*/
int main()
{
    int no_of_emps;
    printf("Enter the no. of employees:");
    scanf("%d", &no_of_emps);

    //Allocating memory for the head
    struct Employee *ptrHead = (struct Employee *)malloc(1 * sizeof(struct Employee));
    if (ptrHead == NULL)
    {
        printf("Memory allocation failed!\n");
        exit(0);
    }

    //Reading inputs from user
    ReadInputs(ptrHead, no_of_emps);
    //print ptrHead in main:
    //printf("Adress inside head ptr in main: %x\n", ptrHead);
    printf(" Before sorting Head pointer: %x\n", ptrHead);
    ptrHead = SortEmployeesOnSalary(ptrHead, no_of_emps);
    printf(" After sorting Head pointer: %x\n", ptrHead);
    PrintAllEmployees(ptrHead);
    //Getting total expenditure of company on salaries
    //printf("\nThe total expenditure of the company on salaries: %.2f\n", GetTotalExpenditure(ptrHead, no_of_emps));

    free(ptrHead);
    return 0;
}