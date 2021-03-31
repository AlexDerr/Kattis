#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int n, t1, t2;
    double v1, v2, total = 0;

    cin >> n;

    cin >> t2 >> v2;

    for(int i = 1; i < n; i++){
        t1 = t2;
        v1 = v2;

        cin >> t2 >> v2;

        total += (((v1 + v2) / 2) * (t2 - t1)) / 1000;
    }

    cout << std::setprecision(10) << total;
}
