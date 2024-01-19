#include <stdio.h>

void swapping(int *x, int *y)
{
    int temp = 0;
    temp = *x;
    *x = *y;
    *y = temp;
    
}

int main()
{
    int a = 50, b = 100;

    printf("The values before swapping:\na = %x,\nb = %x\n", a, b);

    swapping(&a, &b);

    printf("The values after swapping:\na = %d,\nb = %d\n", a, b);

    return 0;
}