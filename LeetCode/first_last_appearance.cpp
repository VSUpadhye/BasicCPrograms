#include <iostream>
#include<vector>
#include <string.h>

using namespace std;

vector<int> searchRange(vector<int> nums, int target)
{
    int i = 0, len = nums.size(), j = 0;
    vector<int> answers = {0, 0};

    for (i = 0; i < len; i++)
    {
        if ((nums[i] == target) && j == 0)
        {
            answers[j] = i;
            j++;
        }
        else if (nums[i] == target)
        {
            answers[j] = i;
        }
        else if (j == 0)
        {
            answers[0] = -1;
            answers[1] = -1;
        }
    }
    
    return answers;
}

int main()
{
    int tar = 0;
    vector<int> arr, ans = {0};

    ans = searchRange(arr, tar);
    cout << "First and last appearance: " << ans[0] << " & " << ans[1] << endl;
    return 0;
}