#include "WordPattern.h"
#include <map>

std::vector<std::string> Solution::getWordsVector(std:: string s){
    size_t index;
    std::vector<std::string> wordsVec;
    for(;;){
        if((index = s.find(' ')) == std::string::npos){
            wordsVec.push_back(s);
            break;
        }
        wordsVec.push_back( s.substr(0, index));
        s = s.substr(index + 1);
    }
    return wordsVec;
}

bool Solution::wordPattern(std::string pattern, std::string s){
    std::vector<std::string> wordsVec = getWordsVector(s);
    std::map<char, std::string> m;
    std::map<std::string, char> m_r;
    bool m_rFinded;
    if(pattern.size() != wordsVec.size())
        return false;
    for(size_t i = 0; i != pattern.length(); i++){
        auto mFinded = m.find(pattern[i]);
        auto m_rFinded = m_r.find(wordsVec[i]);
        if( mFinded == m.end() &&  m_rFinded == m_r.end()){
           m[pattern[i]] = wordsVec[i];
           m_r[wordsVec[i]] = pattern[i];
        }
        else if(mFinded != m.end() && m_rFinded != m_r.end()){
            if(m[pattern[i]] != wordsVec[i] /* || m_r[wordsVec[i]] != pattern[i] */)
                return false;
        }
        else
            return false;
    }
    return true;
}
