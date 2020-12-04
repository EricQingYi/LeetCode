#include "SearchInsertPosition.h"

int SearchInsertPosition::searchInsert(vector<int>& nums, int target){
	size_t pos = 0;
	for (size_t i = 0; i < nums.size(); ++i) {
		if (nums[i] == target) {
			pos = i;
			break;
		}
		else if (nums[i] < target)
			pos++;
		else
			break;
	}
	return pos;
}
