#include "PalindromePermutationLCCI.h"
#include <map>

bool PalindromePermutationLCCI::canPermutePalindrome(string s){
    map<char, int> charCounter;
    int oddCharCounter = 0;
    bool result = true;
    for (size_t i = 0; i < s.length(); ++i)
        ++charCounter[s[i]];
    for (auto i = charCounter.begin(); i != charCounter.end(); ++i) {
        if (i->second % 2) {
            ++oddCharCounter;
            if (oddCharCounter > 1)
                return false;
        }
    }
    return result;
}
