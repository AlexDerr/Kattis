#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
	int t = 0, c = 0, g = 0;
	string str;

	getline(cin, str);

	for (int i = 0; i < (int)str.length(); i++) {
		str.at(i) == 'T' ? t++ : (str.at(i) == 'C' ? c++ : (str.at(i) == 'G' ? g++ : i = i));
	}

	cout << ((t * t) + (c * c) + (g * g) + (min(t, min(c, g)) * 7));
}
