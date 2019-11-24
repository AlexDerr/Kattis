#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

int main(){
	int n;

	cin >> n;

	for(int i = 0; i < n; i++){
		string input;
		vector<char> output;
		int len;

		cin >> input;
		len = input.length();

		for(int i = sqrt(len) - 1; i >= 0; i--){
			for(int j = i; j < len; j+= sqrt(len)){
				output.push_back(input[j]);
			}
		}

		for(int j = 0; j < len; j++){
			cout << output[j];
		}

		cout << endl;
	}

	return 0;
}