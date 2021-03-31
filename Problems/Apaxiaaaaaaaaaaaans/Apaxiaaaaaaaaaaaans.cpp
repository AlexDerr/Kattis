#include <iostream>
#include <string>
using namespace std;

int main()
{
	string input, output;
	char prev;

	cin >> input;

	output.push_back(input[0]);
	prev = input[0];

	for (int i = 1; i < input.size(); i++) {
		while (input[i] == prev) {
			i++;
		}
		output.push_back(input[i]);
		prev = input[i];
	}

	cout << output;

    return 0;
}
