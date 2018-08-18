#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	int t, n;
	vector<string> list;
	string temp;

	cin >> t;

	for (int i = 0; i < t; i++){
		cin >> n;

		for (int j = 0; j < n; j++) {
			cin >> temp;

			if (find(list.begin(), list.end(), temp) == list.end()) {
				list.push_back(temp);
			}
		}
		cout << list.size() << endl;
		list.clear();
	}

	return 0;
}
