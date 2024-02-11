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
        //gets((ptr + ind)->department);
        //printf("Enter salary:");
        //scanf("%f", &(ptr + ind)->salary);
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
}

int main()
{
    int no_of_emps;
    struct Employee *ptrHead = (struct Employee *)malloc(1 * sizeof(struct Employee));
    printf("Enter the no. of employees:");
    scanf("%d", &no_of_emps);

    ReadInputs(ptrHead, no_of_emps);
    //print ptrHead in main:
    printf("Adress inside head ptr in main: %x\n", ptrHead);

    free(ptrHead);
    return 0;
}