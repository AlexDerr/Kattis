#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int first = 0, second = 0;
    string input, str1, str2;

    cin >> input;

    str1 = input.substr(0, input.size() / 2);
    str2 = input.substr(input.size() / 2, input.size());

    for (int i = 0; i < input.size() / 2; i++) {
        first += str1[i] - 65;
        second += str2[i] - 65;
    }

    for (int i = 0; i < str1.length(); i++) {
        str1[i] = ((str1[i] - 65 + first) % 26) + 65;
        str2[i] = ((str2[i] - 65 + second) % 26) + 65;
    }

    for (int i = 0; i < str1.length(); i++) {
        str1[i] = ((str1[i] + str2[i] - 130) % 26) + 65;
    }

    cout << str1;

    return 0;
}
