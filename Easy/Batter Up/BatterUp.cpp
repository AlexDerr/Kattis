#include <iostream>
using namespace std;

int main() {
	double atBats, walks = 0, bases = 0, temp, result;

	cin >> atBats;

	for (int i = 0; i < atBats; i++) {
		cin >> temp;
		if (temp == -1) {
			walks++;
		}
		else {
			bases += temp;
		}
	}

	result = (bases / (atBats - walks));
	cout << result;
	
	return 0;
}
