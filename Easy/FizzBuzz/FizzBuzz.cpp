#include <iostream>
using namespace std;

int main() {
	int x, y, n;

	cin >> x >> y >> n;

	for (int i = 1; i <= n; i++) {
		i % x == 0 && i % y == 0 ? cout << "FizzBuzz" << endl : (i % x == 0 ? cout << "Fizz" << endl : (i % y == 0 ? cout << "Buzz" << endl : cout << i << endl));
	}

	return 0;
}
