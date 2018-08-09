#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n, m, max = 0;
	vector<int> list(40, 0);

	cin >> n >> m;

	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= m; j++) {
			list[j + i]++;
		}
	}

	for (int i = 0; i < list.size() - 1; i++){
		if (list[i] > max) {
			max = list[i];
		}
	}

	for (int i = 0; i < list.size() - 1; i++) {
		if (list[i] == max) {
			cout << i << endl;
		}
	}

    return 0;
}
