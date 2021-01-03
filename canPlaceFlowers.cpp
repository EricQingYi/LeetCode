#include "canPlaceFlowers.h"

bool CanPlaceFlowers::canPlaceFlowers(vector<int>& flowerbed, int n){
	auto size = flowerbed.size();
	int remain = n;
	if (size == 1) {
		if (!flowerbed[0]) {
			remain--;
			flowerbed[0] = 1;
		}
		return remain > 0 ? false : true;
	}
	if (flowerbed[0] == 0 && flowerbed[1] == 0) {
		remain--;
		flowerbed[0] = 1;
	}
	if (size == 2) {
		return remain > 0 ? false : true;
	}
	for (int pre = 0, current = 1, next = 2;;
		pre = current, current = next, next++) {
		if (next == size) {
			if (!flowerbed[pre] && !flowerbed[current]) {
				remain--;
				flowerbed[current] = 1;
			}
			break;
		}
		if (!flowerbed[pre] && !flowerbed[current] && !flowerbed[next]) {
			remain--;
			flowerbed[current] = 1;
		}
	}
	return remain > 0 ? false : true;
}
