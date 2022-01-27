#include <iostream>
#include "StringRotationLCCI.h"
using namespace std;

int main() {
	string a = "apple";
	StringRotationLCCI sol;
	cout << sol.isFlipedString(a, "leapp") << endl;
	return 0;
}