
#include <iostream>
using namespace std;

int main() {
	int n;
	double a, b, c;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> a >> b >> c;

		a + b == c || a - b == c || b - a == c || a * b == c || a / b == c || b / a == c ?  cout << "Possible" << endl : cout << "Impossible" << endl;
	}

	return 0;
}
