#include <iostream>
#include<vector>
#include <string.h>

using namespace std;

vector<int> plusOne(vector<int> digits)
{
    int n = digits.size();
    for(int i = n-1; i >= 0; i--){
        if(i == n-1)
            digits[i]++;
        if(digits[i] == 10){
            digits[i] = 0;
            if(i != 0){
                digits[i-1]++;
            }
            else{
                digits.push_back(0);
                digits[i] = 1;
            }
        }
    }
    return digits;
}

int main()
{
    vector<int> digits = {9, 9, 9}, increment(digits.size());

    increment = plusOne(digits);

    cout << "The digits after incrementing: " << endl;
    for (int i = 0; i < increment.size(); i++)
    {
        cout << increment[i];
    }
    
    return 0;
}