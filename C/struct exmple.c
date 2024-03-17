#include <stdio.h>
#include <stdlib.h>
#include <mem.h>

struct numbers{
    int a;
    int b;
    //struct numbers *next;
};

int main()
{
    //struct numbers array[10]={{12, 45}, {56, 34}};

    struct numbers *ptr = (struct numbers*)malloc(5 * sizeof(struct numbers));
    (*ptr).a = 2, (ptr + 2)->b = 4;
    //memset(ptr,1,sizeof(struct numbers) *10);
    //printf("size of struct numbers : %d\n", sizeof(struct numbers));

    printf("%d, %d\n", ptr->a, ptr->b);
    printf("%d, %d\n", (ptr+2)->a, (ptr+2)->b);

    free(ptr);

    return 0;
}