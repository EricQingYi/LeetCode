#include "SummaryRanges.h"

std::vector<std::string> Solution::summaryRanges(std::vector<int>& nums){
    std::vector<std::string> ret;
    size_t slowIndex = 0, fastIndex = 0;
    if(nums.size() == 0)
        return ret;
    for(size_t i = 0; i < nums.size(); i++){
        if(i == 0)
            continue;
        if(nums[i-1] + 1 == nums[i])
            fastIndex = i;
        else{
            if(slowIndex == fastIndex)
                ret.push_back(std::to_string(nums[slowIndex]));
            else
                ret.push_back(std::to_string(nums[slowIndex]) + \
                    "->" + std::to_string(nums[fastIndex]));
            slowIndex = i;
            fastIndex = slowIndex;
        }
    }
    if(slowIndex == fastIndex)
        ret.push_back(std::to_string(nums[slowIndex]));
    else
        ret.push_back(std::to_string(nums[slowIndex]) + \
            "->" + std::to_string(nums[fastIndex]));
    return ret;
}