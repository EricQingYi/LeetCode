#include <iostream>
#include <vector>
#include <string>
#include "RemoveElement.h"
using namespace std;
int main() {
	RemoveElement sol;
	//vector<int> data = { 3,2,2,3 };
	//auto size = sol.removeElement(data, 3);
	vector<int> data = {0,4,4,0,4,4,4,0,2};
	auto size = sol.removeElement(data, 4);
	for (size_t i = 0; i < size; ++i) {
		cout << data[i] << ' ';
	}
	cout << endl;
	return 0;
}