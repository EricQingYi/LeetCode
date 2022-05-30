#include "BinaryNumberToStringLCCI.hpp"
//十进制小数转换成二进制小数用"乘2取整，顺序排列"方法。

string Solution::printBin(double num)
{
    if(num == 0)
	return "0";
    string res = "0.";
    for(size_t i = 1; ; ++i){
	if(num == 0)
	    break;
	if(i > 30)
	    return "ERROR";
	res += std::to_string(int(num*2));
	num = num*2 - int(num*2);
    }
    return res;
}
