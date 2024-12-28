#include <iostream>
#include<vector>
#include <string.h>

using namespace std;

int removeElement(vector<int> nums, int val)
{
    int index = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] != val)
        {
            nums[index] = nums[i];
            index++;
        }
        cout << nums[index] << endl;
    }
    return index;
}

int main()
{
    vector<int> arr = {3, 2, 2, 3, 5};
    int value = 3, ans = 0;

    ans = removeElement(arr, value);

    cout << "The number of elements: " << ans << endl;

    return 0;
}