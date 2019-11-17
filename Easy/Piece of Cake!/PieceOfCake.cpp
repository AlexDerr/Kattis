#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n, h, v;

	cin >> n >> h >> v;

	int result = 4 * max(n - v, v) * max(n - h, h);

	cout << result << endl;

	return 0;
}