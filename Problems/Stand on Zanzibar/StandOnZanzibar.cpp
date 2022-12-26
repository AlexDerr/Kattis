//https//open.kattis.com/problems/zanzibar

#include<iostream>
#include<vector>
using namespace std;



int StandOnZanzibar(int prev,int temp)
{
	int sum = 0;
	
		if (temp > (prev * 2))
			sum = sum + (temp - (prev * 2))	;
	

	return sum;
}

int main()
{
	
	
	int t, temp,prev;
	cin >> t;

	for (int i = 0; i < t; i++)
	{
		int sum = 0;
		temp = 1;
		while (temp != 0)
		{
			prev = temp;
			cin >> temp;
			sum = sum + StandOnZanzibar(prev, temp);
		}
		cout << sum << endl;
	}

	


	return 0;
}

