#include <stdio.h>
#include <stdlib.h>

struct Employee
{
    int emp_id;
    char name[50];
    //char department[50];
    float salary;
    struct Employee *ptrNext;
};

void PrintEmployee(struct Employee *emp)
{
    //printf("Emp pointer : %x\n", emp);
    printf("Employee ID: %d\n", emp->emp_id);
    printf("Name: %s\n", emp->name);
    // printf("Department: %s\n", emp->department);
    printf("Salary: %.2f\n\n", emp->salary);
}

void PrintAllEmployees(struct Employee *head)
{
    struct Employee *currentEmp = head;

    printf("Printing all employee details\n");
    while (currentEmp != NULL)
    {
        PrintEmployee(currentEmp);
        currentEmp = currentEmp->ptrNext;
    }
}

void FreeEmployee(struct Employee *headPtr)
{
    struct Employee *currentEmp = headPtr, *next_head;

    while(currentEmp != NULL)
    {
        next_head = currentEmp->ptrNext;
        //printf("freed pointer : %x\n", currentEmp);
        free(currentEmp);
        currentEmp = next_head;
    }
}

struct Employee *ReadInputs(int size)
{
    struct Employee *currentEmp, *head;

    printf("Enter employee details:\n\n");

    currentEmp = (struct Employee *) malloc(1 * sizeof(struct Employee));
    head = currentEmp;
    for (int ind = 0; ind < size; ++ind)
    {
        printf("\nEnter employee %d details:\n", ind + 1);
        printf("Enter employee ID:");
        scanf("%d", &currentEmp->emp_id);
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
        }
    }
    return head;
}

void GetHighestSalary(struct Employee *head_ptr)
{
    struct Employee *current_emp = head_ptr, *highest_salary;
    //traverse all node, linear search

    if (current_emp != NULL)
    {
        highest_salary = current_emp;
    }
    else
    {
        return;
    }
    
    while(current_emp->ptrNext !=NULL)
    {
        if (current_emp->salary < current_emp->ptrNext->salary)
        {
            highest_salary = current_emp->ptrNext;
        }
        
        current_emp = current_emp->ptrNext;
    }

    PrintEmployee(highest_salary);
}

void SortEmployeesOnSalary(struct Employee **headPtr, int size)
{
    int ind1, ind2;
    struct Employee *currentEmp = *headPtr, *temp_emp, *old_rhs;
    struct Employee *lhs, *rhs;

    for (ind1 = 0; ind1 < size - 1; ind1++)
    {
        for (ind2 = 0; ind2 < size - ind1 - 1; ind2++)
        {
            lhs = currentEmp;
            rhs = currentEmp->ptrNext;

            // Swap case
            if (lhs->salary < rhs->salary)
            {

                if (ind2 == 0)
                {
                    // set the head to rhs node
                    *headPtr = rhs;
                }
                else
                {
                    old_rhs->ptrNext = rhs;
                }
                old_rhs = rhs;
                // remember rhs.next
                temp_emp = rhs->ptrNext;
                // rhs.next = current
                rhs->ptrNext = currentEmp;
                // lhs.next = remembered
                lhs->ptrNext = temp_emp;
            }
            else // No swap case
            {
                old_rhs = currentEmp;
                currentEmp = rhs;
            }
        }
        currentEmp = *headPtr;
    }
}

float GetTotalExpenditure(struct Employee *head_ptr)
{
    struct Employee *currentEmp;
    currentEmp = head_ptr;
    int total_expenditure = 0;

    while (currentEmp != NULL)
    {
        total_expenditure += currentEmp->salary;
        currentEmp = currentEmp->ptrNext;
    }

    return total_expenditure;
}

int main()
{
    int no_of_emps;
    struct Employee *ptrHead;
    printf("Enter the no. of employees:");
    scanf("%d", &no_of_emps);

    // Reading inputs from user
    ptrHead = ReadInputs(no_of_emps);

    // Getting total expenditure of company on salaries
    printf("\nThe total expenditure of the company on salaries: %.2f\n", GetTotalExpenditure(ptrHead));

    //Get the pointer to highest salary employee and print details of that employee
    printf("Highest Salary Employee details\n");
    GetHighestSalary(ptrHead);

    //sorting the employees based on salaries
    SortEmployeesOnSalary(&ptrHead, no_of_emps);

    //printing the details of all employees
    PrintAllEmployees(ptrHead);

    FreeEmployee(ptrHead);
    return 0;
}