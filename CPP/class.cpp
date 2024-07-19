//#include <bits/stdc++.h>         //To include all possible files
#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

class Account
{
    //Attributes
    private:
    string name;
    double balance;

    public:
    //Methods
    bool Deposite(double bal) {balance += bal; cout << "In deposite" << endl;}
    bool Withdraw(double bal);
    double Acc_bal();
    //Constructor
    Account()
    {
        name = "None";
        balance = 0;
    }
    Account(string acc_name)
    {
        name = acc_name;
        balance = 0;
    }
    Account(string acc_name, double blnc)
    {
        name = acc_name;
        balance = blnc;
    }

    //Destructor
    ~Account()
    {
        cout << "Destructor called" << endl;
    }
};

bool Account:: Withdraw(double bal)
{
    if (bal <= balance)
    {
        balance -= bal; cout << "In withdraw" << endl;
    }
    else
    {
        cout << "Insufficient balance!" << endl;
    }    
}

double Account:: Acc_bal()
{
    cout << "The amount balance in the account is: " << balance << endl;
}

int main()
{
    string account_name{};
    double bal_amount{};

    cout << "Enter account name: ";
    cin >> account_name;
    cout << "Enter balance in account: ";
    cin >> bal_amount;

    Account varad{account_name, bal_amount}; 

    int choice{};
    double amount{};
    cout << "Enter:\n1: to deposite\n2: to withdraw\n3: to get balance and \n4: to quit\nEnter your choice: ";
    cin >> choice;

    while (choice != 4)
    {
        
        switch (choice)
        {
        case 1:
            cout << "Enter the amount to be deposited: ";
            cin >> amount;
            varad.Deposite(amount);
            cout << endl;
            break;
        case 2:
            cout << "Enter the amount to be withdrawn: ";
            cin >> amount;
            varad.Withdraw(amount);
            cout << endl;
            break;
        case 3:
            varad.Acc_bal();
            cout << endl;
            break;
        default:
            cout << "Please enter valid choice!" << endl;
            break;
        }
        cout << "Enter:\n1: to deposite\n2: to withdraw\n3: to get balance and \n4: to quit\nEnter your choice: ";
        cin >> choice;
    }
    
    return 0;
}