
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	int n;
	string tempSchool, tempTeam;
	vector<string> schools;
	vector<string> teams;
	
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> tempSchool >> tempTeam;
		if (find(schools.begin(), schools.end(), tempSchool) == schools.end()) {
			schools.push_back(tempSchool);
			teams.push_back(tempTeam);
		}
	}

	for (int i = 0; i < 12; i++) {
		cout << schools[i] << " " << teams[i] << endl;
	}

	return 0;
}
