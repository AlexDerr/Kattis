#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n, l, r;
	string input, left, right;
	
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> input;
		if (input[0] == 'P') {
			cout << "skipped" << endl;
		}
		else {
			left = input.substr(0, input.find('+'));
			right = input.substr(input.find('+') + 1, input.length() - 1);
			// cout << "left " << left << " right " << right;
			l = stoi(left);
			r = stoi(right);
			cout << l + r << endl;
		}

	}

	return 0;
}
