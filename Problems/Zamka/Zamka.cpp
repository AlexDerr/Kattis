#include <iostream>
using namespace std;

int main() {
	int l, d, x, max = 1, min = 10000, temp;

	cin >> l >> d >> x;

	for (int i = l; i <= d; i++) {
		temp = 0;
		for (int j = i; j != 0; j = j / 10) {
			temp += j % 10;
		}
		if (i < min && temp == x) {
			min = i;
		}
		if (i > max && temp == x) {
			max = i;
		}
	}

	cout << min << endl << max;
  
  return 0;
}
