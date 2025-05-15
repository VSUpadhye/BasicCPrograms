//#include<bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string.h>

using namespace std;

void rotate(vector<int>& nums, int k) {
    k %= nums.size();
    if (k == 0)
    {
        return;
    }
    
    vector<int> temp = {};
    for (size_t i = 0; i < nums.size(); i++)
    {
        if(i < nums.size() - k)
            temp.push_back(nums[i]);
        else{
            nums[i - (nums.size() - k)] = nums[i];
        }
    }
    for (size_t i = 0; i < nums.size() - k; i++)
    {
        nums[k + i] = temp[i];
    }
}

int main(){
    vector<int> arr = {1, 2, 3, 4, 5};
    rotate(arr, 5);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << ", ";
    }
    
    return 0;
}