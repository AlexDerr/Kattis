#include <iostream>
#include <string>

using namespace std;

int main(){
	int count = 0;
	string input;

	for(int i = 0; i < 5; i++){
		cin >> input;

		if(input.find("FBI") != string::npos){
			cout << i + 1 << " ";

			count++;
		}
	}

	if(count == 0){
		cout << "HE GOT AWAY!" << endl;
	}

    return 0;
}
