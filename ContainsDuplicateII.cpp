#include "ContainsDuplicateII.h"
#include "map"
#include <stdlib.h>

bool Solution::containsNearbyDuplicate(std::vector<int>& nums, int k){
    std::map<int,size_t> valToIndexs;
    for(size_t i = 0; i < nums.size(); i++){
        if(!valToIndexs.count(nums[i]))
            valToIndexs[nums[i]] = i;
        else{ 
            if(abs(i - valToIndexs[nums[i]]) > k)
                valToIndexs[nums[i]] = i;
            else
                return true;
        }
    }
    return false;
}