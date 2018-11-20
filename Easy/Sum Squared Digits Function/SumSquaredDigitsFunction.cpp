#include <iostream>

using namespace std;

int main(){
    int p, k, b, n, sum = 0;

    cin >> p;

    for(int i = 0; i < p; i++){
        cin >> k >> b >> n;

        while(n != 0){
            sum += (n % b) * (n % b);

            n /= b;
        }

        cout << k << " " << sum << endl;

        sum = 0;
    }
}
