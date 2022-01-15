#include "FirstBadVersion.h"

int FirstBadVersion::firstBadVersion(int n){
    int low = 1, mid = 1, high = n, result = n;
    while (low <= high) {
        if (isBadVersion(low)) {
            result = low;
            break;
        }
        mid = low + (high - low) / 2;
        if (isBadVersion(mid)) {
            high = mid;
        }
        else {
            low = mid + 1;
        }
    }
    return result;
}
