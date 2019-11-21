#include <iostream>
#include <climits>

using namespace std;

int main(){
	int n, input, minVal = INT_MAX, minIndex = INT_MAX;

	cin >> n;

	for(int i = 0; i < n; i++){
		cin >> input;

		if(input < minVal){
			minIndex = i;
			minVal = input;
		}
	}

	cout << minIndex;	

    return 0;
}