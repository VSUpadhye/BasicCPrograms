#include <iostream>

using namespace std;

bool isPalindrome(int x)
{
    int temp = 0, rem = 0, rev = 0;

    temp = x;

    while (x > 0)
    {
        rem = x % 10;
        rev = rev * 10 + rem;
        x = x / 10;
        
    }
    
    if (temp == rev)
    {
        return true;
    }
    return false;
}

int main()
{
    int num = 0;
    bool pal = false;

    cout << "Enter a number: ";
    cin >> num;

    pal = isPalindrome(num);
    
    if (pal)
    {
        cout << "The number " << num << " is a palindrome!" << endl;
    }
    else
    {
        cout << "The number " << num << " is not a palindrome!" << endl;
    }

    return 0;
}