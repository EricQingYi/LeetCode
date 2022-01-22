#include "CheckPermutationLCCI.h"
#include <algorithm>

bool CheckPermutationLCCI::CheckPermutation(string s1, string s2){
	if (s1.size() != s2.size())
		return false;
	int t1[128];
	int t2[128];
	fill_n(t1, 128, 0);
	fill_n(t2, 128, 0);
	for (size_t i = 0; i < s1.size(); ++i) {
		t1[s1[i]] += 1;
		t2[s2[i]] += 1;
	}
	for (size_t i = 0; i < 128; ++i) {
		if (t1[i] != t2[i])
			return false;
	}
	return true;
}
