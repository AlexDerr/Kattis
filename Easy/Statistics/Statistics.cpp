#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n, caseNum = 1;

	while(cin >> n)
	{
		int temp, min = 1000000, max = -1000000;

		for(int i = 0; i < n; i++)
		{
			cin >> temp;
			if(temp < min)
			{
				min = temp;
			}
			if(temp > max)
			{
				max = temp;
			}
		}

		cout << "Case " << caseNum << ": " << min << " " << max << " " << max - min << endl;
		caseNum++;
	}

	return 0;
}