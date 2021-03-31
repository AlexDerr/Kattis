#include <iostream>
#include <vector>
using namespace std;

int main() {
	int x, n, total, temp;

	cin >> x >> n;

	total = x * (n + 1);

	for (int i = 0; i < n; i++) {
		cin >> temp;
		total -= temp;
	}

	cout << total;

	return 0;
}
