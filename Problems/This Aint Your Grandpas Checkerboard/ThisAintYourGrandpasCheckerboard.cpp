#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, numWhite, numBlack, consecWhite, consecBlack, result = 1;

	cin >> n;

	vector<vector<char> > vect(n, vector<char>(n, '0'));

	for(int i = 0; i < n; i++){
		numWhite = 0;
		numBlack = 0;
		consecWhite = 0;
		consecBlack = 0;

		for(int j = 0; j < n; j++){
			cin >> vect[i][j];

			if(vect[i][j] == 'W'){
				numWhite++;
				consecWhite++;
				consecBlack = 0;
			}
			else{
				numBlack++;
				consecBlack++;
				consecWhite = 0;
			}

			if(consecBlack >= 3 || consecWhite >= 3)
				result = 0;
		}
		if(numBlack != numWhite)
			result = 0;
	}
	
	for(int i = 0; i < n; i++){
		numWhite = 0;
		numBlack = 0;
		consecWhite = 0;
		consecBlack = 0;

		for(int j = 0; j < n; j++){
			if(vect[j][i] == 'W'){
				numWhite++;
				consecWhite++;
				consecBlack = 0;
			}
			else{
				numBlack++;
				consecBlack++;
				consecWhite = 0;
			}

			if(consecBlack >= 3 || consecWhite >= 3)
				result = 0;
		}
		if(numBlack != numWhite)
			result = 0;
	}

	cout << result << endl;

	return 0;
}