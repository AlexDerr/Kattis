#include <iostream>
using namespace std;

int main() {
	int n = 1, total = 0, tempSpeed, tempTime, prevTime = 0;

	cin >> n;
	while (n != -1) {
		for (int i = 0; i < n; i++) {
			cin >> tempSpeed >> tempTime;

			total += tempSpeed * (tempTime - prevTime);
			prevTime = tempTime;
		}
		cout << total << " miles" << endl;
		total = 0;
		prevTime = 0;
		cin >> n;
	}

	return 0;
}
