#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Person {
	int cash;
	int time;
};

int main()
{
	int n, t, tempCash, tempTime, total = 0;
	Person input;
	vector<Person> people;
	vector<bool> taken(47, false);

	cin >> n >> t;

	for (int i = 0; i < n; i++) {
		cin >> tempCash >> tempTime;
		input.cash = tempCash;
		input.time = tempTime;

		people.push_back(input);
	}

	Person temp;
	for (int i = 0; i < people.size() - 1; i++) {
		for (int j = 1; j < people.size() - i; j++) {
			if (people[j].cash > people[j - 1].cash) {
				temp = people[j];
				people[j] = people[j - 1];
				people[j - 1] = temp;
			}
		}
	}

	for (Person p : people) {
		tempTime = p.time;
		while (tempTime >= 0) {
			if (!taken[tempTime]) {
				total += p.cash;
				taken[tempTime] = true;
				break;
			}
			tempTime--;
		}
	}

	cout << total;

	return 0;
}
