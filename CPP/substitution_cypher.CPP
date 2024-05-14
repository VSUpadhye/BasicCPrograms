//#include <bits/stdc++.h>         //To include all possible files
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key{"QWERTYUIOPLKJHGFDSAZXCVBNMqwertyuioplkjhgfdsazxcvbnm"};
    
    string message {};
    cout << "Enter the secret message: ";
    getline(cin, message);

    string coded_message {};

    for (auto c : message)
    {
        size_t position = alphabet.find(c);
        if (position != string::npos)
        {
            char new_char {key.at(position)};
            coded_message += new_char;
        }
        else
        {
            coded_message += c;
        }
              
    }
    

    cout << "The encrypted message is: " << coded_message << endl;
    
    return 0;
}