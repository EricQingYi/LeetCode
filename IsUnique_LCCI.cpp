#include "IsUnique_LCCI.h"
#include <algorithm>
bool IsUnique_LCCI::isUnique(string astr){
    bool* p_table = new bool[128];
    fill_n(p_table, 128, false);
    bool result = false;
    for (size_t i = 0; i < astr.length(); ++i) {
        if (!p_table[astr[i]])
            p_table[astr[i]] = true;
        else {
            result = true;
            break;
        }
    }
    delete[] p_table;
    return !result;
}
