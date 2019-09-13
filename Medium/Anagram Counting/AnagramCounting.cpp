// *** This file does not work to pass the tests in Kattis as it does not handle the large ints properly ***
// *** To the best of my knowledge this does compute the anagram correctly just breaks when it gets to the large tests ***
// *** Working version in python can be found in this folder ***

#include <iostream>
#include <string>
#include <map>
#include <math.h>
using namespace std;

unsigned long long factorial(int n)
{
	return (n == 1 || n == 0) ? 1 : factorial(n - 1) * n;
}

int main() {
	int denominator = 1;
	unsigned long long anagrams;
	string str;
	map<char, int> occurences;

	for (char ch = 'A'; ch <= 'Z'; ch++) {
		occurences.insert(pair<char, int>(ch, 0));
	}
	for (char ch = 'a'; ch <= 'z'; ch++) {
		occurences.insert(pair<char, int>(ch, 0));
	}

	while (cin >> str) {
		// cin >> str;
		denominator = 1;

		for (auto &x : occurences) {
			x.second = 0;
		}

		for (char c : str) {
			occurences[c]++;
		}

		for (auto &x : occurences) {
			if (x.second != 0) {
				denominator *= factorial(x.second);
			}
		}

		anagrams = factorial(str.length()) / denominator;

		cout << anagrams << endl;
	}
	
	return 0;
}
