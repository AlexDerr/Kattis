#include <iostream>
using namespace std;

int main() {
	int h, m;

	cin >> h >> m;

	m -= 45;

	if (m < 0) {
		h--;
		m = 60 + m;
	}
	if (h == -1) {
		h = 23;
	}

	cout << h << " " << m;

	return 0;
}
