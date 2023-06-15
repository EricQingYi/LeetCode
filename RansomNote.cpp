#include "RansomNote.h"
#include <map>

bool RansomNote::canConstruct(std::string ransomNote, std::string magazine){
    std::map<char, unsigned> charCounter;
    for (auto i = magazine.begin(); i != magazine.end(); i++){
        if(charCounter.find(*i) == charCounter.end())
            charCounter[*i] = 1;
        else
            charCounter[*i]++;
    }
    for(auto i = ransomNote.begin(); i != ransomNote.end(); i++){
        if( charCounter.find(*i) == charCounter.end() || charCounter[*i] < 1)
            return false;
        else
            charCounter[*i]--;
    }
    return true;
}
