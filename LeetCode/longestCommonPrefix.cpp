//#include<bits/stdc++.h>
#include <iostream>
#include<vector>
#include <string.h>

using namespace std;

string longestCommonPrefix(vector<string>& strs){
    if (strs.empty()) return ""; 
    string prefix = strs[0];
    for (size_t i = 1; i < strs.size(); ++i)
    {
        while (strs[i].find(prefix) != 0) 
        { 
            prefix = prefix.substr(0, prefix.size() - 1);
            if (prefix.empty())
                return "";
        } 
    } 
    return prefix;
}

int main(){
    vector<string> str_vect = {"flower", "flow", "flight"};
    string ans = longestCommonPrefix(str_vect);

    cout << "Longest common prefix: " << ans << endl;
    return 0;
}