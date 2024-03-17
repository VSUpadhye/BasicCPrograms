#include <stdio.h>

int main()
{
    int num1 = 0, num2 = 0;
    int *ptr = NULL;

    printf("Enter two numbers:\n");
    scanf("%d%d", &num1, &num2);

    ptr = &num1;
    *ptr = 2 * num2;

    ptr = &num2;
    *ptr += num1;

    printf("The values:\nnum1 = %d\nnum2 = %d\n", num1, *ptr);

    return 0;
}