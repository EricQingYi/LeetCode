#include "LengthOfLastWord.h"

int LengthOfLastWord::lengthOfLastWord(string s){
    int i = s.size() - 1;
    bool gotLastC = false;
    size_t result = 0;
    for (; i >=0; --i) {
        if (s[i] == ' ' && !gotLastC)
            continue;
        else if (s[i] != ' ') {
            gotLastC = true;
            ++result;
        }
        else { // s[i] == ' ' && gotLasstC
            break;
        }
    }
    return result;
}
