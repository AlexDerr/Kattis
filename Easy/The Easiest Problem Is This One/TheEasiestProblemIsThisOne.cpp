#include <iostream>
using namespace std;

int SumDigits(int n) {
	int sum = 0;
	while (n != 0) {
		sum += n % 10;
		n /= 10;
	}
	return sum;
}

int main()
{
	int n, i, tempSum;

	cin >> n;

	while (n != 0) {
		i = 11;
		tempSum = SumDigits(n);
		while (SumDigits(i * n) != tempSum) {
			i++;
		}
		cout << i << endl;

		cin >> n;
	}

    return 0;
}
