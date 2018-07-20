#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<int> setKeys(vector<int> vect, char key) {
	for (int i = 0; i < vect.size(); i++) {
		vect[i] = 0;
	}
	
	if (key == 'c') {
		vect[1] = 1;
		vect[2] = 1;
		vect[3] = 1;
		vect[6] = 1;
		vect[7] = 1;
		vect[8] = 1;
		vect[9] = 1;
	}
	else if (key == 'd') {
		vect[1] = 1;
		vect[2] = 1;
		vect[3] = 1;
		vect[6] = 1;
		vect[7] = 1;
		vect[8] = 1;
	}
	else if (key == 'e') {
		vect[1] = 1;
		vect[2] = 1;
		vect[3] = 1;
		vect[6] = 1;
		vect[7] = 1;
	}
	else if (key == 'f') {
		vect[1] = 1;
		vect[2] = 1;
		vect[3] = 1;
		vect[6] = 1;
	}
	else if (key == 'g') {
		vect[1] = 1;
		vect[2] = 1;
		vect[3] = 1;
	}
	else if (key == 'a') {
		vect[1] = 1;
		vect[2] = 1;
	}
	else if (key == 'b') {
		vect[1] = 1;
	}
	else if (key == 'C') {
		vect[2] = 1;
	}
	else if (key == 'D') {
		vect[0] = 1;
		vect[1] = 1;
		vect[2] = 1;
		vect[3] = 1;
		vect[6] = 1;
		vect[7] = 1;
		vect[8] = 1;
	}
	else if (key == 'E') {
		vect[0] = 1;
		vect[1] = 1;
		vect[2] = 1;
		vect[3] = 1;
		vect[6] = 1;
		vect[7] = 1;
	}
	else if (key == 'F') {
		vect[0] = 1;
		vect[1] = 1;
		vect[2] = 1;
		vect[3] = 1;
		vect[6] = 1;
	}
	else if (key == 'G') {
		vect[0] = 1;
		vect[1] = 1;
		vect[2] = 1;
		vect[3] = 1;
	}
	else if (key == 'A') {
		vect[0] = 1;
		vect[1] = 1;
		vect[2] = 1;
	}
	else if (key == 'B') {
		vect[0] = 1;
		vect[1] = 1;
	}

	return vect;
}

vector<int> addToCount(vector<int> count, vector<int> previous, vector<int> current) {
	for (int i = 0; i < count.size(); i++) {
		if (previous[i] == 0 && current[i] == 1) {
			count[i]++;
		}
	}
	return count;
}

int main() {
	vector<int> count(10, 0);
	vector<int> previous(10, 0);
	vector<int> current(10, 0);
	int t;
	char curChar;
	string input;

	cin >> t;
	cin.ignore();

	for (int i = 0; i < t; i++) {
		getline(cin, input);
		if (input.size() == 0) {
			for (int k = 0; k < count.size(); k++) {
				cout << count[k] << ' ';
			}
			cout << endl;
			continue;
		}

		curChar = input.at(0);

		current = setKeys(current, curChar);
		count = addToCount(count, previous, current);
		previous = setKeys(previous, curChar);

		for (int k = 1; k < input.length(); k++) {
			curChar = input.at(k);
			current = setKeys(current, curChar);
			count = addToCount(count, previous, current);
			previous = current;
		}

		for (int i = 0; i < 10; i++) {
			cout << count[i] << ' ';
			count[i] = 0;
			previous[i] = 0;
			current[i] = 0;
		}
		cout << endl;
	}
	return 0;
}
