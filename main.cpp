#include <iostream>
#include "BinarySearch.h"
using namespace std;

int main() {
	BinarySearch sol;
	vector<int> arr = { -2,3,6 };
	cout << "Result:" << sol.search(arr, 3) << endl;
	return 0;
}