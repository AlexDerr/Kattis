#include <iostream>

using namespace std;

int factorial(int n){
    if(n != 1)
        return n * factorial(n - 1);
    else
        return 1;
}

int main(){
    int n, x;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> x;

        cout << factorial(x) % 10 << endl;
    }
}
