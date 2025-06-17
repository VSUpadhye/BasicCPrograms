#include<bits/stdc++.h>

using namespace std;

int maxSubArray(vector<int>& nums) {
    int max_sum = INT_MIN, sum = 0;
    for(int i = 0; i < nums.size(); i++){
        sum += nums[i];
        if(sum > max_sum) max_sum = sum;
        if(sum < 0) sum = 0;
    }
    return max_sum;
}

int main(){
    vector<int> arr = {-2,1,-3,4,-1,2,1,-5,4};
    int ans = maxSubArray(arr);
    cout << ans << endl;
    return 0;
}