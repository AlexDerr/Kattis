#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double h, v;
	double PI = 3.14159265;

	cin >> h >> v;

	cout << ceil(h / sin(v * PI / 180));

	return 0;
}
