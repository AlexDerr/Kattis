#include <iostream>

using namespace std;

int main()
{
	int g, s, c, value;
	cin >> g >> s >> c;

	value = (g * 3) + (s * 2) + (c);

	if(value >= 8){
		cout << "Province or Gold";
	}
	else if(value == 7 || value == 6){
		cout << "Duchy or Gold";
	}
	else if(value == 5){
		cout << "Duchy or Silver";
	}
	else if(value == 4 || value == 3){
		cout << "Estate or Silver";
	}
	else if(value == 2){
		cout << "Estate or Copper";
	}
	else{
		cout << "Copper";
	}

	return 0;
}