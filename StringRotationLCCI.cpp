#include "StringRotationLCCI.h"

bool StringRotationLCCI::isFlipedString(string s1, string s2){
    if (s1.size() != s2.size())
        return false;
    if (s1.empty()) 
        return true;
    string cs = "";
    for (size_t i = 0; i < s2.size(); ++i) {
        if (s2[i] == s1[0]) {
            cs = s2.substr(i, s2.size() - i) + s2.substr(0, i);
            if (s1.compare(cs) == 0) // s1 equal to cs
                return true;
        }
    }
    return false;
}
