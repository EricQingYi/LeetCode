#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	size_t a = 3, b = 2;
	cout << max(a,b) - min(a,b) << endl;
	return 0;
}