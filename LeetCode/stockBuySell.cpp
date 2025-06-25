#include <iostream>
#include <stack>
#include <string>
#include <vector>

using namespace std;

int maxProfit(vector<int>& prices) {
    int mini = prices[0], profit = 0;
    for (size_t i = 1; i < prices.size(); i++)
    {
        int cost = prices[i] - mini;
        profit = max(cost, profit);
        mini = min(prices[i], mini);
    }
    return profit;
}

int main(){
    vector<int> arr = {2, 4, 1};
    int ans = maxProfit(arr);
    cout << ans << endl;
    return 0;
}