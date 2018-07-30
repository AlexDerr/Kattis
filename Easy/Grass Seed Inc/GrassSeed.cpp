#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	double c, n, l, w, total = 0;

	cin >> c >> n;

	for (int i = 0; i < n; i++) {
		cin >> l >> w;
		total += c * l * w;
	}

	cout << setprecision(9) << total;

	return 0;
}
