#include <iostream>
using namespace std;

int main(){

	int nums[9];
	int check[9] = {0,0,1,1,1,1,1,1,1};
	int sum = 0, count = 0, pos1 = 0, pos2 = 1;

	for(int i = 0; i < 9; i++){
		cin >> nums[i];
	}

	for(int i = 0; i < 9; i++){
			if(check[i] == 1)
				sum += nums[i];
	}

	while(sum != 100){

		if(count == 7){
			if(pos1 == 8){
				check[pos1] = 1;
				pos1 = 0;
				check[pos1] = 0;
			}
			else{
				check[pos1] = 1;
				pos1 += 1;
				check[pos1] = 0;
			}
			if(pos1 == 0){
				check[pos2] = 1;
				pos2 = 1;
				check[pos2] = 0;
			}
			else{
				check[pos2] = 1;
				pos2 = pos1 + 1;
				check[pos2] = 0;
			}

			count = 0;
		}
		else{
			if(pos2 == 8){
				check[pos2] = 1;
				pos2 = 0;
				check[pos2] = 0;
			}
			else{
				check[pos2] = 1;
				pos2 += 1;
				check[pos2] = 0;
			}

			count++;
		}

		sum = 0;

		for(int i = 0; i < 9; i++){
			if(check[i] = 1)
				sum += nums[i];
		}

		cout << sum << endl;
	}

	for(int i = 0; i < 9; i++){
		if(check[i] == 1)
			cout << nums[i] << endl;
	}

	return 0;
}