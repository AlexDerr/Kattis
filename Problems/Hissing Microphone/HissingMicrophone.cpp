#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;

	cin >> str;

	for (int i = 1; i < str.length(); i++) {
		if (str.at(i - 1) == str.at(i) && str.at(i) == 's') {
			cout << "hiss";
			return 0;
		}
	}
	cout << "no hiss";

	return 0;
}
