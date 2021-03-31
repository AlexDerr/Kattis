#include <iostream>
#include <cmath>
using namespace std;

int main(){

	int loops, input, base, expo, total = 0;

	cin >> loops;

	for(int i = 0; i < loops; i++){
		cin >> input;
		expo = input % 10;
		base = input / 10;
		total += pow(base, expo);
	}

	cout << total;

	return 0;
}
