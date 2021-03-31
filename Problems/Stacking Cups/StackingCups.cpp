#include <iostream>
#include <string>
#include <vector>
#include <exception>
using namespace std;

struct Cup {
	string color;
	double radius;
};

int main()
{
	int n;
	string firstHalf, secondHalf, line;
	Cup tempCup;
	vector<Cup> cups;

	cin >> n;
	cin.ignore();

	for (int i = 0; i < n; i++) {
		getline(cin, line);

		firstHalf = line.substr(0, line.find(' '));
		secondHalf = line.substr(line.find(' ') + 1, line.size() - 1);

		try {
			tempCup.radius = (double)stoi(firstHalf) / 2; 
			tempCup.color = secondHalf;
		}
		catch(exception e){
			tempCup.radius = stoi(secondHalf);
			tempCup.color = firstHalf;
		}

		cups.push_back(tempCup);
	}

	Cup temp;
	for (int i = 0; i < cups.size() - 1; i++) {
		for (int j = 1; j < cups.size() - i; j++) {
			if (cups[j].radius < cups[j - 1].radius) {
				temp = cups[j];
				cups[j] = cups[j - 1];
				cups[j - 1] = temp;
			}
		}
	}

	for (Cup c : cups) {
		cout << c.color << endl;
	}

    return 0;
}
