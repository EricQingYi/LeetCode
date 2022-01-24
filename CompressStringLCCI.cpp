#include "CompressStringLCCI.h"

string CompressStringLCCI::compressString(string S){
    string result = "";
    char temp = NULL;
    size_t tempCount = 0;
    for (size_t i = 0; ; ++i) {
        if (i >= S.size()) {
            result += (temp + to_string(tempCount));
            break;
        }
        if (i == 0) {
            temp = S[i];
            ++tempCount;
        }
        else if (S[i] == temp)
            ++tempCount;
        else {
            result += (temp + to_string(tempCount));
            temp = S[i];
            tempCount = 1;
        }
    }
    return result.size() < S.size() ? result : S;
}
