#include <iostream>
#include <math.h>

using namespace std;

int main(){
    double x;

    cin >> x;

    cout << (int)round((x * 1000.0 * (5280.0 / 4854.0)));
}
