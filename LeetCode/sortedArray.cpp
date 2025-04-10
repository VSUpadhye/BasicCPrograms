//#include<bits/stdc++.h>
#include <iostream>
#include<vector>
#include <string.h>

using namespace std;

bool check(vector<int>& nums) {
    for(int i = 0; i < nums.size() - 1; i++) {
        if(nums[i] > nums[i + 1]){
            if(nums[nums.size() - 1] > nums[0]){
                return false;
            }
            for(int j = i + 1; j < nums.size() - 1; j++){
                if(nums[j] > nums[j + 1] || nums[j] > nums[0]){
                    return false;
                }
            }
        }
    }
    return true;
}

int main(){
    vector<int> arr = {2,4,1,2,4};
    bool result = check(arr);

    cout << "Was array sorted? : " << result << endl;
    return 0;
}