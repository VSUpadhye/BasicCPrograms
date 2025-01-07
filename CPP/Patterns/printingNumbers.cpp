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
        for (j = 0; j <= i; j++)
        {
            cout << i + 1 << " ";
        }
        cout << endl;
    }
    
    return 0;
}