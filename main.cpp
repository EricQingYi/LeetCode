#include <iostream>
#include "RotateMatrixLCCI.h"
using namespace std;

int main() {
	RotateMatrixLCCI sol;
	vector<vector<int>> m = { {1,2,3} ,{4,5,6}, {7,8,9} };
	for (auto& i : m) {
		for (auto& j : i) {
			cout << j << " ";
		}
		cout << endl;
	}
	cout << endl;
	sol.rotate(m);
	for (auto& i : m) {
		for (auto& j : i) {
			cout << j << " ";
		}
		cout << endl;
	}
	return 0;
}