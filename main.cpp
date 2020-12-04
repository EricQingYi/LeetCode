#include <iostream>
#include <vector>
#include <string>
#include "LengthOfLastWord.h"
using namespace std;

int main() {
	string s = "ad 23d 421a2  ";
	LengthOfLastWord sol;
	cout << sol.lengthOfLastWord(s) << endl;
	return 0;
}