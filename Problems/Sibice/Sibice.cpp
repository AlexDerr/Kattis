#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n, w, h, temp, maxLen;

	cin >> n >> w >> h;

	maxLen = (int)sqrt((w * w) + (h * h));

	for (int i = 0; i < n; i++) {
		cin >> temp;
		if (temp <= maxLen) {
			cout << "DA" << endl;
		}
		else {
			cout << "NE" << endl;
		}
	}

	return 0;
}
