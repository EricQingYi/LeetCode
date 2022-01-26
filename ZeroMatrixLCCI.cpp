#include "ZeroMatrixLCCI.h"
#include <set>

void ZeroMatrixLCCI::setZeroes(vector<vector<int>>& matrix){
	set<size_t> row, col;
	for (size_t r = 0; r < matrix.size(); ++r) {
		for (size_t c = 0; c < matrix[0].size(); ++c) {
			if (matrix[r][c] == 0) {
				row.insert(r), col.insert(c);
			}
		}
	}
	for (size_t r = 0; r < matrix.size(); ++r) {
		for (size_t c = 0; c < matrix[0].size(); ++c) {
			if (row.find(r) != row.end() || col.find(c) != col.end())
				matrix[r][c] = 0;
		}
	}
}
