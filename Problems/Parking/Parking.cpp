#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int t, n, temp;
	vector<int> list;

	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> n;
		for (int j = 0; j < n; j++) {
			cin >> temp;
			list.push_back(temp);
		}
		sort(list.begin(), list.end());
		cout << ((list[n - 1] - list[0]) * 2) << endl;
		list.clear();
	}

	return 0;
}
