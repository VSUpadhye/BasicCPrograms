#include <iostream>
#include<vector>
#include <string.h>

using namespace std;

int searchInsert(vector<int> nums, int target)
{
    int i = 0, len = nums.size();
    for (i = 0; i < len; i++)
    {
        if (nums[i] == target || target < nums[i])
        {
            return i;
        }
        else if (target > nums[len - 1])
        {
            return len;
        }  
    }
}

int main()
{
    vector<int> arr = {1, 3, 5, 7};
    int tar = 8, ans = 0;

    ans = searchInsert(arr, tar);
    cout << "Index: " << ans << endl;
    return 0;
}