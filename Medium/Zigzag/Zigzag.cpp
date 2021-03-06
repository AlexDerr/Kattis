// This Solution is not the most efficient, it can be improved by starting the check with the first number inputted as it is 
// always included in the longest sequence. Then with this just process the longest list as you read it in, checking greater, 
// less, or updating the value such as is done in the findLongest method in this version.

#include <iostream>
#include <vector>
using namespace std;
 int findLongest(vector<int> list, bool findGreater) {
	int temp = list[0];
	int longest = 1;
 	for (int i = 0; i < list.size(); i++) {
		if (findGreater && temp < list[i]) {
			findGreater = !findGreater;
			longest++;
			temp = list[i];
		}
		else if (!findGreater && temp > list[i]) {
			findGreater = !findGreater;
			longest++;
			temp = list[i];
		}
		else {
			temp = list[i];
		}
	}
	return longest;
}
 int main()
{
	int n, temp, longest = 1;
	vector<int> list;
 	cin >> n;
 	for (int i = 0; i < n; i++) {
		cin >> temp;
		list.push_back(temp);
	}
 	temp = findLongest(list, false);
	temp > longest ? longest = temp : temp = temp;
 	temp = findLongest(list, true);
	temp > longest ? longest = temp : temp = temp;
 	cout << longest;
 	return 0;
}
