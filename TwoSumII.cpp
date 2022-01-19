#include "TwoSumII.h"

/*
vector<int> TwoSumII::twoSum(vector<int>& numbers, int target){
    vector<int> result;
    for (size_t i = 0; i < numbers.size() && numbers[i] <= target; i++) {
        for (size_t j = i+1; j < numbers.size() && numbers[j] <= (target - numbers[i]); j++) {
            if (numbers[i] + numbers[j] == target) {
                result.push_back(i + 1);
                result.push_back(j + 1);
                goto label;
            }
        }
    }
    label:
    return result;
}
*/

int TwoSumII::BinarySearch(vector<int>& nums, size_t start, size_t end, int target) {
    int mid, low = start, high = end, result = -1;
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

vector<int> TwoSumII::twoSum(vector<int>& numbers, int target){
    vector<int> result;
    int j = -1;
    for (int i = 0; i < numbers.size() && numbers[i] <= target; i++) {
        if ((j = BinarySearch(numbers, i + 1, numbers.size() - 1, target - numbers[i])) != -1){
            result.push_back(i + 1);
            result.push_back(j + 1);
            break;
        }
    }
    return result;
}
