#include <iostream>

using namespace std;

int main()
{
    int length {0}, breadth {0};

    cout << "Enter the length and breadth of the rectangle: ";
    cin >> length >> breadth;

    for (int j = 0; j < breadth; j++)
    {
        for(int i = 0; i < length; i++)
        {
            if (j == 0 || j == breadth - 1 || i == 0 || i == length - 1)
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