#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
	int n, temp, result = 0;
	string str;

	cin >> n;

	while (n > 0) {
		temp = n % 2;
		str.insert(0, 1, temp + '0');
		n /= 2;
	}
	reverse(str.begin(), str.end());
	// cout << str;

	for (int i = 0; i < (int)str.length(); i++) {
		result += (str.at(((int)str.length() - i - 1)) - 48) * pow(2, i);
	}

	cout << result;
}
