#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector<string> list;
	string str, temp;

	getline(cin, str);
	int j;


	for (int i = 0; i < str.length(); i = j + 1) {
		temp = "";

		for (j = i; str[j] != ' ' && j < str.length(); j++) {
			temp.push_back(str[j]);
		}
		if (find(list.begin(), list.end(), temp) != list.end()) {
			cout << "no";
			return 0;
		}
		list.push_back(temp);
	}
	cout << "yes";

	return 0;
}
