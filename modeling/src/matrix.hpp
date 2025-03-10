#ifndef MATRIX_HPP
#define  MATRIX_HPP

#include <vector>
using namespace std;
class Matrix {
private:
	vector<vector<float>> data;
	int cols ;
	int rows;

public:
	Matrix(int rows, int cols){this.cols = cols; this.rows = rows;}


};

#endif // MATRIX_HPP
