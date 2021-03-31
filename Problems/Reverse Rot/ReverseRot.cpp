#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	int n;
	string str;

	cin >> n;


	while (n != 0) {
		cin >> str;

		reverse(str.begin(), str.end());

		for (int i = 0; i < str.length(); i++) {
			for (int j = 0; j < n; j++) {
				if (str[i] == 'Z') {
					str[i] = '_';
				}
				else if (str[i] == '_') {
					str[i] = '.';
				}
				else if (str[i] == '.') {
					str[i] = 'A';
				}
				else {
					str[i]++;
				}
			}
		}

		cout << str << endl;
		
		cin >> n;
	}

	return 0;
}
