#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int n, curr, prev1, prev2, bestStart = 1, bestMax;

	cin >> n >> prev2 >> prev1 >> curr;

	bestMax = max(prev2, curr); 

	for(int i = 3; i < n; i++){
		prev2 = prev1;
		prev1 = curr;
		cin >> curr;

		if(curr < bestMax && prev2 < bestMax){
			bestMax = max(curr, prev2);
			bestStart = i - 1;
		}
	}

	cout << bestStart << " " << bestMax;

	return 0;
}