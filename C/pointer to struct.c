#include <stdio.h>
#include <stdlib.h>

struct item
{
    char *item_name;
    int quantity;
    float price;
    float amount;
};

void read_item(struct item *ptr)
{
    printf("Enter a product name:");
    gets(ptr->item_name);
    printf("Enter the quantity of product:");
    scanf("%d", &ptr->quantity);
    printf("Enter the price of product:");
    scanf("%f", &ptr->price);
    ptr->amount = ptr->quantity * ptr->price;

    return;
}

void print_item(struct item *ptr)
{
    printf("The details of the item are:\n");
    printf("The item name: %s\n", ptr->item_name);
    printf("The quantity: %d\n", ptr->quantity);
    printf("The price: %.2f\n", ptr->price);
    printf("The amount: %.2f\n", ptr->amount);

    return;
}

int main()
{
    struct item Item1, *pitem;
    pitem = &Item1;

    pitem->item_name = (char *)malloc(20 * sizeof(char));

    if (pitem->item_name == NULL)
    {
        exit(-1);
    }
    
    read_item(pitem);
    print_item(pitem);

    free(pitem->item_name);
    return 0;
}