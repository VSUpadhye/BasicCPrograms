//#include<bits/stdc++.h>
#include <iostream>
#include<vector>
#include <string.h>

using namespace std;

int finalValueAfterOperations(vector<string>& operations){
    int answer = 0;
    for (int i = 0; i < operations.size(); i++)
    {
        if (operations[i] == "X++" || operations[i] == "++X")
        {
            answer++;
        }
        else if (operations[i] == "--X" || operations[i] == "X--")
        {
            answer--;
        }
    }
    return answer;
}

int main(){
    vector<string> ops = {"--X", "--X", "X++"};
    int ans = finalValueAfterOperations(ops);

    cout << "The final value after operations: " << ans << endl;
    return 0;
}