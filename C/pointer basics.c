#include <stdio.h>

int main()
{
    void *ptr = NULL;
    int num = 7;
    char ch = 'D';
    float value = 45.18;

    ptr = &num;
    printf("The value of num = %d\n", *(int *)ptr);

    ptr = &ch;
    printf("The value of ch = %c\n", *(char *)ptr);

    ptr = &value;
    printf("The value of floating number is = %f\n", *(float *)ptr);

    return 0;
}