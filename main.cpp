#include <iostream>
#include "SortOfStacksLCCI.h"

int main() {
	SortedStack sol;
	sol.push(1);
	sol.push(2);
	std::cout<< sol.peek() << ' ';
	sol.pop();
	std::cout<< sol.peek() << std::endl; 
	return 0;
}
