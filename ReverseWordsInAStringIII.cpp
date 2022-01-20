#include "ReverseWordsInAStringIII.h"
#include <algorithm>
#include <stack>

string ReverseWordsInAStringIII::reverseWords(string s){
    reverse(s.begin(), s.end());
    stack<string> ss;
    string temp;
    for (size_t i = 0, j = i; ; ++i) {
        if (i == s.length()) {
            temp = s.substr(j, i-j);
            ss.push(temp);
            break;
        }
        if (s[i] == ' ') {
            temp = s.substr(j, i-j);
            j = i + 1;
            ss.push(temp);
        }
    }
    temp = "";
    while(true){
        temp = temp + ss.top();
        ss.pop();
        if (!ss.empty())
            temp += " ";
        else
            break;
    }
    return temp;
}
