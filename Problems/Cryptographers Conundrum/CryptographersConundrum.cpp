#include <iostream>
#include <string>
using namespace std;

int main()
{
	int total = 0;
	string str;

	cin >> str;

	for (int i = 0; i < str.size(); i += 3) {
		str[i] != 'P' ? total++ : total = total;
		str[i + 1] != 'E' ? total++ : total = total;
		str[i + 2] != 'R' ? total++ : total = total;

	}

	  cout << total;

    return 0;
}
