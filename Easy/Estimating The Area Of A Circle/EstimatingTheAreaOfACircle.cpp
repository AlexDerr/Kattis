#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	double r, m, c, estimate;
	cin >> r >> m >> c;

	while (r != 0 && m != 0 && c != 0) {
		estimate = ((2 * r) * (2 * r)) * (c / m);
		cout << setprecision(10) << r * r * 3.141592654 << " " << estimate << endl;
		cin >> r >> m >> c;
	}

	return 0;
}
