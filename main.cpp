#include <iostream>
#include <vector>
#include <string>
#include "canPlaceFlowers.h"
using namespace std;

int main() {
	vector<int> vec1 = { 0,0 };
	CanPlaceFlowers sol;
	bool result = false;
	result = sol.canPlaceFlowers(vec1, 2);
	cout << result << endl;
	return 0;
}