#include "InsertIntoBitsLCCI.hpp"

int Solution::insertBits(int N, int M, int i, int j)
{
    int mask = 0;
    for(int k = i; k <= j; ++k){
	mask = mask | (1 << k);
    }
    M = M << i;
    mask = ~mask;
    N = N & mask;
    return N | M;
}
