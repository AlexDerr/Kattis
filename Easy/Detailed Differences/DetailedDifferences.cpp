#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	string str1, str2;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> str1 >> str2;

		cout << str1 << endl << str2 << endl;

		for (int j = 0; j < str1.size(); j++) {
			if (str1[j] == str2[j]) {
				cout << '.';
			}
			else {
				cout << '*';
			}
		}

		cout << endl << endl;
	}


    return 0;
}
