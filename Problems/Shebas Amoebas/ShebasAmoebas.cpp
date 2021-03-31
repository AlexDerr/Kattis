#include <iostream>
#include <string>
#include <vector>
using namespace std;

void removePixels(vector<vector<char>> &matrix, int rows, int cols, int curRow, int curCol) {
	bool hasPath = true, NW, N, NE, W, E, SW, S, SE;
	matrix[curRow][curCol] = '.';

	while (hasPath) {
		NW = false;
		N = false;
		NE = false;
		W = false;
		E = false;
		SW = false;
		S = false;
		SE = false;

		if (curRow > 0 && curCol > 0 && matrix[curRow - 1][curCol - 1] == '#') {
			curRow--;
			curCol--;
			NW = true;
		}
		else if (curRow > 0 && matrix[curRow - 1][curCol] == '#') {
			curRow--;
			N = true;
		}
		else if (curRow > 0 && curCol < cols - 1 && matrix[curRow - 1][curCol + 1] == '#') {
			curRow--;
			curCol++;
			NE = true;
		}
		else if (curCol > 0 && matrix[curRow][curCol - 1] == '#') {
			curCol--;
			W = true;
		}
		else if (curCol < cols - 1 && matrix[curRow][curCol + 1] == '#') {
			curCol++;
			E = true;
		}
		else if (curRow < rows - 1 && curCol > 0 && matrix[curRow + 1][curCol - 1] == '#') {
			curRow++;
			curCol--;
			SW = true;
		}
		else if (curRow < rows - 1 && matrix[curRow + 1][curCol] == '#') {
			curRow++;
			S = true;
		}
		else if (curRow < rows - 1 && curCol < cols - 1 && matrix[curRow + 1][curCol + 1] == '#') {
			curRow++;
			curCol++;
			SE = true;
		}

		matrix[curRow][curCol] = '.';

		if (!NW && !N && !NE && !W && !E && !SW && !S && !SE) {
			hasPath = false;
		}
	}
}

int main()
{
	int rows, cols, count = 0;
	string input;
	vector<vector<char>> matrix;
	
	cin >> rows >> cols;

	matrix.resize(rows);
	for (int i = 0; i < rows; i++) {
		matrix[i].resize(cols);
	}

	for (int i = 0; i < rows; i++) {
		cin >> input;
		for (int j = 0; j < cols; j++) {
			matrix[i][j] = input[j];
		}
	}

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			if (matrix[i][j] == '#') {
				count++;
				removePixels(matrix, rows, cols, i, j);
			}
		}
	}
  
	cout << count;

	return 0;
}
