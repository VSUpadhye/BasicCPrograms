#include <iostream>
#include <string.h>

using namespace std;

int RomanToInt(string s)
{
    int i = 0, int_val = 0;
    for (i = 0; i < s.length(); i++)
    {
        s[i] = toupper(s[i]);
        if (s[i] == 'I' || s[i] == 'V' || s[i] == 'X' || s[i] == 'L' || s[i] == 'C' || s[i] == 'D' || s[i] == 'M')
        {}
        else
        {
            cout << "Invalid character!" << endl;
            return 0;
        }
    }

    for (i = 0; i < s.length(); i++)
    {
        if (s[i] == 'D')
        {
            int_val += 500;
        }

        else if (s[i] == 'M')
        {
            int_val += 1000;
        }
        
        else if (s[i] == 'C' && (s[i + 1] == 'D' || s[i + 1] == 'M'))
        {
            if (s[i + 1] == 'D')
            {
                int_val += 400;
            }
            if (s[i + 1] == 'M')
            {
                int_val += 900;
            }
            i++;
        }
        
        else if (s[i] == 'L')
        {
            int_val += 50;
        }
        
        else if (s[i] == 'C')
        {
            int_val += 100;
        }

        else if (s[i] == 'X' && (s[i + 1] == 'L' || s[i + 1] == 'C'))
        {
            if (s[i + 1] == 'L')
            {
                int_val += 40;
            }
            if (s[i + 1] == 'C')
            {
                int_val += 90;
            }
            i++;
        }
        
        else if (s[i] == 'X')
        {
            int_val += 10;
        }
        
        else if (s[i] == 'V')
        {
            int_val += 5;
        }

        else if (s[i] == 'I' && (s[i + 1] == 'V' || s[i + 1] == 'X'))
        {
            if (s[i + 1] == 'X')
            {
                int_val += 9;
            }
            if (s[i + 1] == 'V')
            {
                int_val += 4;
            }
            i++;
        }
        else if (s[i] == 'I')
        {
            int_val += 1;
        }
    }
    
    return int_val;
}

int main()
{
    string str = "a";

    cout << "Enter a roman num:";
    cin >> str;

    cout << "The integer value: " << RomanToInt(str) << endl;

    return 0;
}