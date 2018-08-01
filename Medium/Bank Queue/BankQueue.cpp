// KattisC++.cpp : Defines the entry point for the console application.
//

#include <stdafx.h>

#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Person {
	int cash;
	int time;
};

vector<Person> sortPeople(vector<Person> people, int size) {
	Person temp;
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - i - 1; j++) {
			if (people[i].cash < people[i + 1].cash) {
				temp = people[i];
				people[i] = people[i + 1];
				people[i + 1] = temp;
			}
		}
	}
	return people;
}

int main()
{
	int n, t, tempCash, tempTime, maxIndex, total = 0;
	Person input;
	vector<Person> people;
	vector<Person> sorted;
	vector<bool> taken (47, false);

	cin >> n >> t;

	for (int i = 0; i < n; i++) {
		cin >> tempCash >> tempTime;
		input.cash = tempCash;
		input.time = tempTime;

		people.push_back(input);
	}

	sorted = sortPeople(people, people.size());


	//for (int i = 0; i < t - 1; i++) {
	for (Person p : sorted){
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
