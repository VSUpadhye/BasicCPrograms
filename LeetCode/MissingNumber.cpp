//#include<bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string.h>

using namespace std;

int missingNumber(vector<int>& nums) {
    int actual_sum = 0, total_sum = 0;
    for (int i = 1; i <= nums.size(); i++){
        total_sum += i;
    }
    for (int i = 0; i < nums.size(); i++){
        actual_sum += nums[i];
    }
    return total_sum - actual_sum;
}

int main(){
    vector<int> arr = {3,0,1};
    int ans = missingNumber(arr);

    cout << "Missing number is: " << ans << endl;
    return 0;
}