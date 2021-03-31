#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector<int> list(4, 0);

	cin >> list[0] >> list[1] >> list[2] >> list[3];

	sort(list.begin(), list.end());

	cout << list[0] * list[2];
}
