#include <iostream>

using namespace std;

int main() {
	int x;
	int divisor = 2;
	int total = 0;

	cin >> x;

	while (divisor * divisor <= x) {
		if (x % divisor == 0) {
			x /= divisor;
			total++;
		}
		else {
			divisor++;
		}
	}
	total++;
	cout << total;
}
