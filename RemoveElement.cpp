#include "RemoveElement.h"

int RemoveElement::removeElement(vector<int>& nums, int val){
	if (nums.size() == 0)
		return 0;
	int* p_frontVal = nullptr;
	int* p_tempFrontVal = p_frontVal;
	bool set_pFrontVal = false;
	int* p_backNoneVal = p_frontVal;
	size_t noneValSize = nums.size();
	size_t tempValCount = 0;
	for (size_t i = 0; ; ++i) {
		if (i >= noneValSize) {
			noneValSize -= tempValCount;
			break;
		}
		if (nums[i] != val && !set_pFrontVal)
			continue;
		else if (nums[i] == val && !set_pFrontVal) {
			p_frontVal = &nums[i];
			set_pFrontVal = true;
		}
		if (nums[i] == val && set_pFrontVal) {
			++tempValCount;
			continue;
		}
		else if (nums[i] != val && set_pFrontVal) {
			for (p_backNoneVal = &nums[i], p_tempFrontVal = p_frontVal;
				p_backNoneVal != (&nums[nums.size() - 1]) + 1; ) {
				*p_tempFrontVal = *p_backNoneVal;
				p_tempFrontVal++;
				p_backNoneVal++;
			}
			i -= tempValCount;
			noneValSize -= tempValCount;
			tempValCount = 0;
			set_pFrontVal = false;
		}
	}
	return noneValSize;
} 