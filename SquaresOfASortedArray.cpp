#include "SquaresOfASortedArray.h"
#include <stack>
#include <math.h>

vector<int> SquaresOfASortedArray::sortedSquares(vector<int>& nums){
    stack<int> s;
    auto p_low = nums.begin();
    auto p_high = nums.end() - 1;
    int low, high;
    for (low = pow(*p_low, 2), high = pow(*p_high, 2); ;) {
        if (low >= high) {
            s.push(low);
            if (p_low + 1 > p_high)
                break;
            low = pow(*(++p_low), 2);
        }
        else {
            s.push(high);
            if (p_high - 1 < p_low)
                break;
            high = pow(*(--p_high), 2);
        }
    }
    for (size_t i = 0; i < nums.size(); ++i) {
        nums[i] = s.top();
        s.pop();
    }
    return nums;
}
