#include <stdio.h>

int main()
{
    int celcius, fahrenheit;

    printf("Enter temperature in celcius: ");
    scanf("%d", &celcius);

    fahrenheit =(celcius * 9 / 5) + 32 ;

    printf("The temperature after conversion to fahrenheit is: %d\n", fahrenheit);

    return 0;


}