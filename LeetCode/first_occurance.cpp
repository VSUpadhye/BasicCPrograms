#include <iostream>
#include<vector>
#include <string.h>

using namespace std;

int strStr(string haystack, string needle)
{
    int i = 0, j = 0, k = 0;
    int hay_len = haystack.size(), need_len = needle.size();
    
    for (i = 0; i < hay_len; i++)
    {
        if (haystack[i] == needle[0])
        {
            k = i;
            for (j = 0; j < need_len; j++)
            {
                if (haystack[k] != needle[j])
                {
                    break;
                }
                k++;
            }
            
            if (j == need_len)
            {
                return i;
            }
            
        }
        
    }
    return -1;
}

int main()
{
    string hay = {"aaa"}, need = {"a"};
    cout << "The index of first occurance:" << strStr(hay, need) << endl;

    return 0;
}