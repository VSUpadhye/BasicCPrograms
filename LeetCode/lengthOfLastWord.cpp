#include <iostream>
#include<vector>
#include <string.h>

using namespace std;

int lengthOfLastWord(string s){
    int answer = 0, len = s.length();
    for (int i = len - 1; i >= 0; i--)
    {
        if (s[i] != ' ')
        {
            answer++;
        }
        else if (s[i] == ' ' && answer != 0)
        {
            break;
        }
    }
    
    return answer;
}

int main(){
    string str = "";
    cout << "Enter a sentence: ";
    getline(cin, str);

    //cout << str << endl;

    int ans = lengthOfLastWord(str);
    cout << "The length of the last word is: " << ans << endl;

    return 0;
}