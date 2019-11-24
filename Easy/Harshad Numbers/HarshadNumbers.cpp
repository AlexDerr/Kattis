#include <iostream>

using namespace std;

int main(){
	int n, temp, sum;

	cin >> n;

	for(n; ; n++){
		sum = 0;
		temp = n;

		while(temp != 0){
			sum += temp % 10;
			temp /= 10;
		}

		if(n % sum == 0){
			cout << n;
			break;
		}
	}

	return 0;
}