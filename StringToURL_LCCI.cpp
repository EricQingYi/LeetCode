#include "StringToURL_LCCI.h"
#include <queue>

string StringToURL_LCCI::replaceSpaces(string S, int length){
    queue<char> q;
    string result = "";
    for (size_t i = 0; i < length; ++i) {
        if (S[i] == ' ') {
            q.push('%');
            q.push('2');
            q.push('0');
        }
        else
            q.push(S[i]);
    }
    while (!q.empty()) {
        result += q.front();
        q.pop();
    }
    return result;
}
