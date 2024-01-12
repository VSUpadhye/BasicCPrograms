#include <stdio.h>

int main()
{
    void *ptr = NULL;
    int num = 50;
    char ch = 'K';

    ptr = &num;
    printf("The value of num = %d\n", (int *)ptr);

    ptr = &ch;
    printf("The value of ch = %c\n", (char *)ptr);

    return 0;
}