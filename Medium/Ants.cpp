#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
	int cases, len, numAnts, center, centerDist, best, bestIndex, worst, worstIndex;
	vector<int> positions;

	cin >> cases;

	for (int i = 0; i < cases; i++) {
		cin >> len >> numAnts;

		positions.resize(numAnts, 0);

		for (int j = 0; j < numAnts; j++) {
			cin >> positions[j];
		}

		center = len / 2;
		if (len % 2 != 0) {
			center++;
		}

		best = -1;
		bestIndex = -1;
		centerDist = 1000000;

		for (int j = 0; j < numAnts; j++) {
			if (abs(center - positions[j]) < centerDist) {
				if (positions[j] <= center) {
					best = positions[j];
					centerDist = abs(center - positions[j]);
				}
				else {
					best = len - positions[j];
					centerDist = abs(center - positions[j]);
				}
				bestIndex = j;
			}
		}

		worst = -1;
		worstIndex = -1;

		
		for (int j = 0; j < numAnts; j++) {
			if (positions[j] <= center) {
				if ((len - positions[j]) > worst) {
					worst = len - positions[j];
					worstIndex = j;
				}
			}
			else {
				if ((positions[j] > worst)) {
					worst = positions[j];
					worstIndex = j;
				}
			}
		}

		cout << best << " " << worst << endl;
	}


	return 0;
}