#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	int result = 1;

	getline(cin, str);

	for (int i = 0; i < (int)str.length(); i++) {
			str.at(i) == 'A' ? (result == 1 ? result = 2 : (result == 2 ? result = 1 : result = 3)) : result = result;
			str.at(i) == 'B' ? (result == 2 ? result = 3 : (result == 3 ? result = 2 : result = 1)) : result = result;
			str.at(i) == 'C' ? (result == 1 ? result = 3 : (result == 3 ? result = 1 : result = 2)) : result = result;
	}
	cout << result;

	return 0;
}
