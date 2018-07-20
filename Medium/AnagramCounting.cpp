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

	cin >> str;

	for (char c : str) {
		occurences[c]++;
	}

	for (auto const& x : occurences) {
		if (x.second != 0) {
			denominator *= factorial(x.second);
		}
	}

	anagrams = factorial(str.length()) / denominator;

	cout << anagrams;
	
	/*for (auto const& x : occurences) {
		cout << x.first << " " << x.second << endl;
	}*/
	
	return 0;
}