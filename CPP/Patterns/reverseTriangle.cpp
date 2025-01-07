#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    int i = 0, j = 0, num = 0;
    cout << "Enter a number: ";
    cin >> num;

    for (i = 0; i < num; i++)
    {
        for (j = num; j > i; j--)
        {
            cout << "* ";
        }
        cout << endl;
    }
    
    return 0;
}