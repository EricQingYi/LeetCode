#include <iostream>
#include <vector>
#include "SearchInsertPosition.h"
using namespace std;
int main() {
	vector<int> data = { 1,3,5,6 };
	SearchInsertPosition sol;
	cout << sol.searchInsert(data, 4) << endl;
	return 0;
}