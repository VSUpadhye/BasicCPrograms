#include <stdio.h>

int main()
{
    int array[10], size = 0, *ptr = NULL;

    printf("Enter the size of the array:");
    scanf("%d", &size);
    printf("Enter the elements of the array:\n");
    for (int ind = 0; ind < size; ind++)
    {
        scanf("%d", &array[ind]);
    }
    
    printf("The entered array is:\n");
    for (ptr = array; ptr < &array[size]; ptr++)
    {
        printf("%d, ", *ptr);
    }
    
    return 0;
}