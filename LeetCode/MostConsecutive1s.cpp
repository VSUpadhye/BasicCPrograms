//#include<bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string.h>

using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums) {
    int count = 0, max_count = 0;
    for(int i = 0; i < nums.size(); i++){
        if(nums[i] == 1){
            count++;
        }
        if(count > max_count){
            max_count = count;
        }
        else if(nums[i] == 0){
            count = 0;
        }
    }
    return max_count;
}
int main(){
    vector<int> arr = {2,4,1,2,4};
    int ans = findMaxConsecutiveOnes(arr);

    cout << "Most consecutive 1s: " << ans << endl;
    return 0;
}