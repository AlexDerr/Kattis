#include <iostream>
using namespace std;

int main() {
	int l, r;

	cin >> l >> r;

	l == r && l == 0 ? cout << "Not a moose" : ( l == r ? cout << "Even " << l * 2 : cout << "Odd " << max(l, r) * 2);

	return 0;
}
