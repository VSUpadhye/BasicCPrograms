#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool isValid(string s){
    stack<char> st;
    char top;
    for(char ch: s){
        if(ch == '(' || ch == '{' || ch == '['){
            st.push(ch);
        }
        else{
            if (st.empty())
            {
                return false;
            }
            top = st.top();
            st.pop();
            if(ch == ')' && top != '(' || ch == ']' && top != '[' || ch == '}' && top != '{'){
                return false;
            }
        }
    }
    return st.empty() ? true : false;
}

int main(){
    string str = "(]";
    bool ans = isValid(str);
    cout << ans << endl;

    return 0;
}