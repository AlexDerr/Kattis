#include <iostream>

using namespace std;

int main(){
    int n, b;
    double p;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> b >> p;

        double t, x1, x2, x3;

        t = p / b;    
        x2 = 60 * b / p;
        x1 = x2 - (x2 / b);
        x3 = x2 + (x2 / b);

        cout << x1 << " " << x2 << " " << x3 << endl;
    }
}
