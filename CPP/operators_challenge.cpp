#include <iostream>

using namespace std;

int main()
{
    int cents {0}, remainder {0}, dollars {0}, quarters {0}, dimes {0}, nickels {0};

    cout << "Enter the number of cents: ";
    cin >> cents;

    //Calculating no. of dollars
    dollars = cents / 100;
    //Storing the remainder
    remainder = cents % 100;

    //Calculating no. of quarters
    quarters = remainder / 25;
    //Storing the remainder
    remainder %= 25;

    //Calculating no. of dimes
    dimes = remainder / 10;
    //Storing the remainder
    remainder %= 10;

    //Calculating no. of nickels
    nickels = remainder / 5;
    //Storing the remainder
    remainder %= 5;

    //No. of penny equals the remainder

    cout << "The entered no. of cents can be provided with: \n";
    cout << "Dollars : " << dollars << endl;
    cout << "Quarters: " << quarters << endl;
    cout << "Dimes   : " << dimes << endl;
    cout << "Nickels : " << nickels << endl;
    cout << "Pennies : " << remainder << endl;

    return 0;
}