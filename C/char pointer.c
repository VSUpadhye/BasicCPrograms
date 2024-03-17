#include <stdio.h>

int string_len(const char *st_ptr)
{
    const char *ptr = st_ptr;
    while (*ptr)
    {
        ++ptr;
    }

    return  ptr - st_ptr;
}

int main()
{
    char string[40];
    int len = 0;

    printf("Enter a string:");
    gets(string);

    len = string_len(string);

    printf("The length of the string is: %d\n", len);

    return 0;
}