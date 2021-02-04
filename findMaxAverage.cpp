#include "findMaxAverage.h"

double FindMaxAverage::findMaxAverage(vector<int>& nums, int k){
	auto size = nums.size();
	double sum = 0.0;
	double result = 0.0;
	if (k == size) {
		for (auto i = nums.begin(); i != nums.end(); ++i)
			sum += *i;
		result = sum / size;
	}
	else {
		for (auto i = nums.begin(); i <= nums.end() - k; ++i) {
			if (i == nums.begin()) {
				for (auto j = i; j < i + k; ++j)
					sum += *j;
				result = sum / k;
			}
			else {
				sum -= *(i - 1);
				sum += *(i + k - 1);
				if (sum / k > result)
					result = sum / k;
			}
		}
	}
	return result;
}
