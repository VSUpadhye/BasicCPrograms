#include <iostream>

using namespace std;

int main()
{
    int length {0};

    cout << "Enter the length of the side of the square: ";
    cin >> length;

    for (int j = 0; j < length; j++)
    {
        for(int i = 0; i < length; i++)
        {
            if (j == 0 || j == length - 1 || i == 0 || i == length - 1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
            
        }
        cout << endl;
    }
    
    return 0;
}