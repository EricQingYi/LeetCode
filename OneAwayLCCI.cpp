#include "OneAwayLCCI.h"

bool OneAwayLCCI::oneEditAway(string first, string second){
    auto size_1 = first.size(), size_2 = second.size();
    unsigned dc_count = 0; // Count the number of difference char between string first and second.
    if(max(size_1,size_2)-min(size_1,size_2) > 1)
		return false;
    for (size_t i = 0, j = 0; i < max(size_1,size_2) && j < max(size_1,size_2); ) {
        if (first[i] != second[j]) {
            ++dc_count;
            if (dc_count > 1)
                return false;
            if (size_1 < size_2) {
                ++j;
                continue;
            }
            else if(size_1 > size_2) {
                ++i;
                continue;
            }
        }
        ++i, ++j;
    }
    return true;
}
