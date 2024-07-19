// #include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

class Account
{
    //attributes
private:
    string name;
    double balance;

    //methods
public:
    bool Deposite(double amount){balance += amount; cout << "In deposite" << endl;}
    bool Withdraw(double amount);
    bool Acc_balance();

    //constructor
    Account(string acc_name, double bal);

    //destructor
    ~Account()
    {
        cout << "Destructor called" << endl;
    }
};

bool Account::Withdraw(double amount)
{
    if (amount < balance)
    {
        balance -= amount;
        cout << "In withdraw" << endl;
    }
    else
    {
        cout << "Insufficient balance!" << endl;
    }   
}
bool Account::Acc_balance()
{
    cout << "The amount balance in the account: " << balance << endl;
}

Account::Account(string acc_name, double bal): name{acc_name}, balance{bal}{}

int main()
{
    string acc_name{};
    double blnc{};

    cout << "Enter account name: ";
    cin >> acc_name;
    cout << "Enter balance in the account: ";
    cin >> blnc;

    Account varad(acc_name, blnc);

    int choice{};
    double amount{};

    cout << "Enter:\n1: to deposite\n2: to withdraw\n3: to get balance and \n4: to quit\nEnter your choice:";
    cin >> choice;

    while (choice != 4)
    {
        switch (choice)
        {
        case 1:
            cout << "Enter the amount to be deposited: ";
            cin >> amount;
            varad.Deposite(amount);
            break;
        case 2:
            cout << "Enter the amount to be withdrawn: ";
            cin >> amount;
            varad.Withdraw(amount);
            break;
        case 3:
            varad.Acc_balance();
            break;
        default:
            cout << "Please enter valid option!" << endl;
            break;
        }
        cout << "\nEnter:\n1: to deposite\n2: to withdraw\n3: to get balance and \n4: to quit\nEnter your choice:";
        cin >> choice;
    }

    return 0;
}