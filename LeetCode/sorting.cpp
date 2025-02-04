//#include<bits/stdc++.h>
#include <iostream>
#include<vector>
#include <string.h>

using namespace std;

void sortColors(vector<int>& nums){
    int temp = 0;
    for (int i = 0; i < nums.size() - 1; i++)
    {
        for (int j = i; j < nums.size(); j++)
        {
            if (nums[i] > nums[j])
            {
                temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
    }
    
}

int main(){
    vector<int> num = {2, 2, 1, 1, 0, 0};
    sortColors(num);
    for (int i = 0; i < num.size(); i++)
    {
        cout << num[i] << " ";
    }
    
    return 0;
}