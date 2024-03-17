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

void PrintEmployee(struct Employee *emp)
{
    printf("Employee ID: %d\n", emp->emp_id);
    printf("Name: %s\n", emp->name);
    printf("Department: %s\n", emp->department);
    printf("Salary: %.2f\n\n", emp->salary);

}

void PrintAllEmployees(struct Employee *emp_list, int size)
{
    printf("Printing all employee details\n");
    for (int i = 0; i < size; i++)
    {
        PrintEmployee((emp_list+i));
    }

}

void ReadInputs(struct Employee *ptr, int size)
{
    printf("Enter employee details:\n\n");
    
    for (int ind = 0; ind < size; ind++)
    {
        printf("\nEnter employee %d details:\n", ind + 1);
        printf("Enter employee ID:");
        scanf("%d", &(ptr + ind)->emp_id);
        printf("Enter employee name:");
        getchar();
        gets((ptr + ind)->name);
        printf("Enter department:");
        gets((ptr + ind)->department);
        printf("Enter salary:");
        scanf("%f", &(ptr + ind)->salary);
    }
}

void DeepCopyEmployee(struct Employee *source, struct Employee *dest)
{
    char temp_string[50];
    int temp_id;
    float temp_salary;

    //swapping id
    temp_id = source->emp_id;
    source->emp_id = dest->emp_id;
    dest->emp_id = temp_id;
    //printf("%d\n%d\n", ptr->emp_id, ptr1->emp_id);

    //swapping names
    strcpy(temp_string, source->name);
    strcpy(source->name, dest->name);
    strcpy(dest->name, temp_string);
    //printf("%s\n%s\n", ptr->name, ptr1->name);

    //swapping departments
    strcpy(temp_string, source->department);
    strcpy(source->department, dest->department);
    strcpy(dest->department, temp_string);
    //printf("%s\n%s\n", ptr->department, ptr1->department);

    //swapping salaries
    temp_salary = source->salary;
    source->salary = dest->salary;
    dest->salary = temp_salary;
    //printf("%.2f\n%.2f\n", ptr->salary, ptr1->salary);
}

struct Employee *GetHighestSalary(struct Employee *emp_list, int size)
{
    //traverse all node, linear search
    float max_salary = 0;
    int max_salary_pos = 0, ind;
    for (ind = 0; ind < size; ind++)
    {
        if (max_salary < (emp_list + ind)->salary)
        {
            max_salary = (emp_list + ind)->salary;
            max_salary_pos = ind;
        }
    }
    //printf("The highest salary index is: %d\n", max_salary_pos);
    
    //return first node sal
    return (emp_list + max_salary_pos);
}


void SortEmployeesOnSalary(struct Employee *ptr, int size)
{
    int ind1, ind2;
    
    for (ind1 = 0; ind1 < size - 1; ind1++)
    {
        for (ind2 = 0; ind2 < size - ind1 - 1; ind2++)
        {
            if ((ptr + ind2)->salary < (ptr + ind2 + 1)->salary)
            {
                DeepCopyEmployee((ptr + ind2), (ptr + ind2 + 1));
            }
        }
    }
}

float GetTotalExpenditure(struct Employee *ptr, int size)
{
    int total_expenditure = 0;

    for (int i = 0; i < size; i++)
    {
        total_expenditure += (ptr + i)->salary;
    }
    
    //printf("\nThe total expenditure of the company is: %d\n", total_expenditure);
    return total_expenditure;
}

int main()
{
    int no_of_emps;
    printf("Enter the number of employees:");
    scanf("%d", &no_of_emps);
    //printf("The no of emps: %d\n", no_of_emps);
    
    struct Employee *ptrEmp = (struct Employee *)malloc(no_of_emps * sizeof(struct Employee));
    //struct Employee *highest_salary_employee;
    if (ptrEmp == NULL)
    {
        printf("Memory allocation failed!\n");
        exit(0);
    }
    //printf("Memory allocation successful!\n");

    //Read all employee details
    ReadInputs(ptrEmp, no_of_emps);

    //Find the total expenditure and print it
    printf("Total Expenditure on Salary is: %.2f\n\n", GetTotalExpenditure(ptrEmp, no_of_emps));

    //Get the pointer to highest salary employee and print details of that employee
    printf("Highest Salary Employee details\n");
    PrintEmployee(GetHighestSalary(ptrEmp, no_of_emps));

    //Sort the employees based on salary, decreasing order
    SortEmployeesOnSalary(ptrEmp, no_of_emps);

    //Print all employees from the sorted array
    PrintAllEmployees(ptrEmp, no_of_emps);

    //Release memory
    free(ptrEmp);
    return 0;
}
