#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n;
	double  vel, theta, x1, h1, h2, time, yPos;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> vel >> theta >> x1 >> h1 >> h2;

		time = x1 / (vel * cos(theta * acos(-1) / 180));

		yPos = vel * time * sin(theta * acos(-1) / 180) - ( .5 * 9.81 * time * time);

		if (yPos > h1 + 1 && yPos < h2 - 1) {
			cout << "Safe" << endl;
		}
		else {
			cout << "Not Safe" << endl;
		}
	}

    return 0;
}
