//202. Happy Number
#include "HappyNumber.h"
#include <unordered_set>
bool HappyNumber::isHappy(int n){
    if (n == 1)
        return true;
    int new_n = 0;
    int prior = n;
    int rest;
    std::unordered_set<int> intSet;
    intSet.insert(n);
    bool result = false;
    do{
        for (; prior != 0;) {
            rest = int(prior / 10);
            new_n += (prior - rest * 10)*(prior - rest * 10);
            prior = rest;
        }
        if (new_n == 1) {
            result = true;
            break;
        }
        else if (intSet.find(new_n)!=intSet.end()) {
            break;
        }
        else {
            intSet.insert(new_n);
        }
        prior = new_n;
        new_n = 0;
    } while (1);
    return result;
}
