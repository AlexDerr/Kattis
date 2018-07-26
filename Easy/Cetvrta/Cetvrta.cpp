#include <iostream>
using namespace std;

int main() {
    int x, y, z, a, b, c;

    cin >> x >> a >> y >> b >> z >> c;

    ((x + y) / 2 == x) ? cout << z : ((x + z) / 2 == x ? cout << y : cout << x);

    cout << " ";

    ((a + b) / 2 == a) ? cout << c : ((a + c) / 2 == a ? cout << b : cout << a);
}
