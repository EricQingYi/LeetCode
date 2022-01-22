#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
	string* p_table = new string[128];
	fill_n(p_table, 128, "apple");
	cout << *(p_table+127) << endl;
	delete[] p_table;
	return 0;
}