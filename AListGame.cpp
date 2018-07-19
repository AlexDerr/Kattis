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

//int main() {
//	int x, divisor, temp;
//	int total = 0;
//
//	cin >> x;
//
//	if (x % 2 == 0) {
//		while (x != 1) {
//			x /= 2;
//			total++;
//		}
//		cout << total;
//	}
//	else {
//		while (x != 1) {
//			divisor = 2;
//			while (x % divisor != 0 && divisor <= x) {
//				divisor++;
//			}
//			x = x / divisor;
//			total++;
//		}
//		cout << total;
//	}
//
//	return 0;
//}