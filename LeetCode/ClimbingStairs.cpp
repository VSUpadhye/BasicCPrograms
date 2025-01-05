//#include<bits/stdc++.h>
#include <iostream>
#include<vector>
#include <string.h>

using namespace std;

int climbStairs(int n) {
        if (n == 0 || n == 1) {
            return 1;
        }

        vector<int> dp(n+1);
        dp[0] = dp[1] = 1;
        
        for (int i = 2; i <= n; i++) {
            dp[i] = dp[i-1] + dp[i-2];
        }
        return dp[n];
    }

int main(){
    int num = 0, ans = 0;

    cout << "Enter a number: ";
    cin >> num;

    ans = climbStairs(num);

    cout << "Output: " << ans << endl;
    return 0;
}