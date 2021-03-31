#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n, g, temp;
	vector<int> list;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> g;
		list.resize(g, 0);
		temp = 0;
		for (int j = 0; j < g; j++) {
			cin >> list[j];
		}
		for (int j = 0; j < g; j++) {
			if (count(list.begin(), list.end(), list[j]) == 1) {
				temp = list[j];
			}
		}

		cout << "Case #" << i + 1 << ": " << temp << endl;
	}
  return 0;
}
