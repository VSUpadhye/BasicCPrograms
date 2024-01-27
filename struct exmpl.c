#include <stdio.h>
#include <stdlib.h>
#include <mem.h>

struct numbers{
    int a;
    int b;
    struct numbers *next;
};

int main()
{
    struct numbers array[10]={{12, 45}, {56, 34}};
    struct numbers *ptr;
    
    ptr = array;
    //memset(ptr,1,sizeof(struct numbers) *10);
    //printf("size of struct numbers : %d\n", sizeof(struct numbers));

    printf("%d, %d\n", ptr->a, array[0].b);
    printf("%d, %d\n", (ptr+2)->a, array[1].b);
    return 0;
}