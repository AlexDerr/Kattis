#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, temp;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> temp;
        if (temp % 2 == 0) {
            cout << temp << " is even" << endl;
        }
        else {
            cout << temp << " is odd" << endl;
        }
    }
    return 0;
}
