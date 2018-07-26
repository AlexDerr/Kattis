
#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
	string a, b;
	int intA, intB, result;

	cin >> a >> b;

	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());

	intA = stoi(a);
	intB = stoi(b);

	result = (intA < intB) ? intB : intA;

	cout << result;

	return 0;
}
