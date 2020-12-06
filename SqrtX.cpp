#include "SqrtX.h"
//------Newton Solution: find positive root of y=x^2-C (C is input value)--------------
int SqrtX::mySqrt(int x){
    if (x == 0)
        return 0;
    double temp_x = x;
    double temp_newx;
    double temp_y = pow(temp_x, 2) - x;
    for (size_t i = 0;; ++i) {
        temp_newx = temp_x - temp_y / (2 * temp_x);
        if (fabs(temp_newx - temp_x) < 1e-7)
            break;
        temp_y = pow(temp_newx, 2)-x;
        temp_x = temp_newx;
    }
    return (int)temp_newx;
}

//----------Math solution:x^(1/2) == (exp(log(x)))^(1/2)== exp(log(x)/2)-----------
int SqrtX::mySqrt_01(int x) {
    int result = (int)exp(log(x) / 2);
    return pow((double)result + 1, 2) <= x ? result + 1 : result;
}

//------------ My_solution:----------------------------------------------
int SqrtX::mySqrt_02(int x){
    int temp = 0;
    int result = 0;
    size_t LeftIndex = 0;
    size_t RightIndex = SqrtArray.size() - 1;
    size_t MidIndex = (LeftIndex + RightIndex) / 2;
    if (SqrtArray.empty() || x > SqrtArray[RightIndex]) {
        for (size_t i = SqrtArray.size();; ++i) {
            temp = i * i;
            SqrtArray.push_back(temp);
            if (temp == x) {
                result = i;
                break;
            }
            else if (temp < x) {
                result = i;
            }
            else {
                break;
            }
        }
    }
    else{
        while (LeftIndex <= RightIndex){
            if (SqrtArray[MidIndex] <= x && x < SqrtArray[MidIndex+1]) {
                result = MidIndex;
                break;
            }
            else if (x < SqrtArray[MidIndex]) {
                RightIndex = MidIndex;
                MidIndex = (LeftIndex + RightIndex) / 2;
            }
            else {
                LeftIndex = MidIndex;
                MidIndex = (LeftIndex + RightIndex) / 2;
            }
        }
    }
    return result;
}

