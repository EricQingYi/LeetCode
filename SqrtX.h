//69. Sqrt(x)
#pragma once
#include <vector>
using namespace std;

class SqrtX{
public:
	int mySqrt(int x);
	int mySqrt_01(int x);
	int mySqrt_02(int x);
private:
	vector<int> SqrtArray;// For mySqrt_02 solution
};

