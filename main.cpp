#include <iostream>
#include "SquaresOfASortedArray.h"
using namespace std;

int main() {
	SquaresOfASortedArray sol;
	vector<int> v = { -3,-1,0,2,4 };
	sol.sortedSquares(v);
	for(size_t i = 0; i < v.size(); ++i){
		cout << v[i] << " ";
	}
	cout << endl;
	return 0;
}