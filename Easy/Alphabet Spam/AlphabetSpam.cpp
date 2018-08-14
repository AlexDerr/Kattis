#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	int wSpace = 0, lCase = 0, uCase = 0, symbol = 0, total = 0;
	double result;
	string input;

	cin >> input;

	for(int i = 0; i < input.size(); i++){
		total++;
		if (input[i] == '_') {
			wSpace++;
		}
		else if (input[i] >= 'a' && input[i] <= 'z') {
			lCase++;
		}
		else if (input[i] >= 'A' && input[i] <= 'Z') {
			uCase++;
		}
		else {
			symbol++;
		}
	}

	cout << setprecision(6) << (double)wSpace / (double)total << endl;
	cout << setprecision(6) << (double)lCase / (double)total << endl;
	cout << setprecision(6) << (double)uCase / (double)total << endl;
	cout << setprecision(6) << (double)symbol / (double)total << endl;


    return 0;
}
