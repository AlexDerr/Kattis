#include <iostream>
using namespace std;

int main() {
	int n, count = 0, temp;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> temp;
		if (temp < 0) {
			count++;
		}
	}

	cout << count;

	return 0;
}
