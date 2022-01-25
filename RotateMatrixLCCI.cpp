#include "RotateMatrixLCCI.h"
#include <algorithm>

void RotateMatrixLCCI::rotate(vector<vector<int>>& matrix){
	this->transpose(matrix);
	for (auto& r : matrix) {
		reverse(r.begin(), r.end());
	}
	return;
}

void RotateMatrixLCCI::transpose(vector<vector<int>>& matrix){
	int temp = 0;
	for (size_t i = 0; i < matrix.size(); ++i) {
		for (size_t j = 0; j < matrix[0].size(); ++j) {
			if (i <= j)
				continue;
			temp = matrix[j][i];
			matrix[j][i] = matrix[i][j];
			matrix[i][j] = temp;
		}
	}
}
