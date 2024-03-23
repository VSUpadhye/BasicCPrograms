#include <iostream>

using namespace std;

int main()
{
    bool result {0};

    cout << boolalpha;

    int num1 {0}, num2 {0};
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    result = (num1 == num2);

    cout << "Result: " << result << endl;
    
    return 0;
}