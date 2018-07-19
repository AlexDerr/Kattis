#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	if (n == 0) {
		cout << 4;
	}
	else {
		int num = 2;
		for (int i = 0; i < n; i++) {
			num += num - 1;
		}
		cout << num * num;
	}

	return 0;
}