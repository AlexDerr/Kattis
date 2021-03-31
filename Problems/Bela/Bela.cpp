#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n, total = 0;
	char b;
	string input;

	cin >> n >> b;

	for (int i = 0; i < n * 4; i++) {
		cin >> input;

		if (input[1] == b) {
			if (input[0] == 'A') {
				total += 11;
			}
			else if (input[0] == 'K') {
				total += 4;
			}
			else if (input[0] == 'Q') {
				total += 3;
			}
			else if (input[0] == 'J') {
				total += 20;
			}
			else if (input[0] == 'T') {
				total += 10;
			}
			else if (input[0] == '9') {
				total += 14;
			}
		}
		else {
			if (input[0] == 'A') {
				total += 11;
			}
			else if (input[0] == 'K') {
				total += 4;
			}
			else if (input[0] == 'Q') {
				total += 3;
			}
			else if (input[0] == 'J') {
				total += 2;
			}
			else if (input[0] == 'T') {
				total += 10;
			}
		}
	}

	cout << total;

  return 0;
}
