#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int temp, total, winTotal = 0, winNumber = 0;

	for (int i = 0; i < 5; i++) {
		total = 0;
		for (int j = 0; j < 4; j++) {
			cin >> temp;
			total += temp;
		}
		if (total > winTotal) {
			winTotal = total;
			winNumber = i + 1;
		}
	}
	cout << winNumber << " " << winTotal;

	return 0;
}
