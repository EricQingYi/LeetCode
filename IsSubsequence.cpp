#include "IsSubsequence.h"

bool IsSubsequence::isSubsequence(std::string s, std::string t){
    if(s.empty())
        return true;
    size_t index = 0; // Index of search point in t
    for (size_t i = 0; i < s.length(); i++){
        for (size_t j = index; j < t.length(); j++){
            if(s[i] == t[j]){
                if(i == s.length()-1)
                    return true;
                index = j + 1;
                break;
            }
            else if(j == t.length()-1)
                return false;
        }
    }
    return false;
}