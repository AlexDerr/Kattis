#include <iostream>
using namespace std;

int main()
{
	int s, total = 0, swap = 0;

	cin >> s;

	cout << s << ":" << endl;

	for (int i = 2; i < s; i++) {
		for (int j = i - 1; j <= i; j++){
			while (total <= s) {
				if (swap == 0) {
					total += i;
					swap = 1;
				}
				else {
					total += j;
					swap = 0;
				}

				if (total == s) {
					cout << i << "," << j << endl;
				}
			}
			total = 0;
			swap = 0;
		}
	}

	return 0;
}
