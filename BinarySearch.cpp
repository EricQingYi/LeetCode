#include "BinarySearch.h"

int BinarySearch::search(vector<int>& nums, int target){
    int mid, low = 0, high = nums.size() - 1, result = -1;
    for (; low <= high;) {
        mid = low + (high - low) / 2;
        if (nums[mid] < target) {
                low = mid + 1;
        }
        else if (target < nums[mid]) {
                high = mid - 1;
        }
        else {
            result = mid;
            break;
        }
    }
    return result;
}
