//#include <bits/stdc++.h>         //To include all possible files
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    string num_string {};
    cout << "Enter a multiple digit number or a sentence: ";
    getline(cin, num_string);
    
    int len = num_string.length();

    int i, j, k, ind_rev;
    for( i = 1; i <= len; i++)
    {
        for(k = 1; k <= len - i; k++)
        {
            cout << " ";
        }
        for(j = 0; j <= i - 1; j++)
        {
            cout << num_string.at(j);
        }
        for(ind_rev = i - 2; ind_rev >= 0; ind_rev--)
        {
            cout << num_string.at(ind_rev);
        }
        cout << endl;
    }
    
    return 0;
}