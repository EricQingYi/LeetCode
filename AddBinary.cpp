#include "AddBinary.h"
#include <algorithm>
std::string Solution::addBinary(std::string a, std::string b){
    std::string ans;
    std::reverse(a.begin(), a.end());
    std::reverse(b.begin(), b.end());

    int n = std::max(a.size(), b.size()), carry = 0;
    for (size_t i = 0; i < n; ++i) {
        carry += i < a.size() ? (a.at(i) == '1') : 0;
        carry += i < b.size() ? (b.at(i) == '1') : 0;
        ans.push_back((carry % 2) ? '1' : '0');
        carry /= 2;
    }

    if (carry) {
        ans.push_back('1');
    }
    reverse(ans.begin(), ans.end());

    return ans;
}
