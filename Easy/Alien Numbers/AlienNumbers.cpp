#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int ToDecimal(string lang, string number)
{
	int langLen = lang.length();
	int numLen = number.length();
	int value = 0;

	for(int i = 0; i < numLen; i++)
	{
		char temp = number[i];
		int position = int(lang.find_first_of(temp));
		value += position * (pow(langLen, numLen - i - 1));
	}

	return value;
}

string ToLang(string lang, int decimal)
{
	int len = lang.length();
	string output;

	int numDigits = 0;
	while(pow(len, numDigits) <= decimal)
	{
		numDigits++;
	}

	for(int i = numDigits - 1; i >= 0; i--)
	{
		int position = len - 1;

		while((position * pow(len, i)) >  decimal)
		{
			position--;
		}

		output.push_back(lang[position]);
		decimal -= position * (pow(len, i));
	}

	return output;
}

int main()
{
	int T;
	string number, source, target;

	cin >> T;

	for(int i = 1; i <= T; i++)
	{
		cin >> number >> source >> target;
		int decimal = ToDecimal(source, number);
		string output = ToLang(target, decimal);

		cout << "Case #" << i << ": " << output << endl;
	}
}