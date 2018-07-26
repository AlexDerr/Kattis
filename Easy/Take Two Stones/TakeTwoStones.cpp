#include <iostream>
using namespace std;

int main() {
    int n;

    cin >> n;

    (n % 2 == 0) ? cout << "Bob" : cout << "Alice";

    return 0;
}
