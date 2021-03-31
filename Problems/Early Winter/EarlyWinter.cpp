#include <iostream>

using namespace std;

int main(){
    int n, dm, result = 0;
    bool noYears = false;

    cin >> n >> dm;

    int input;
    for(int i = 0; i < n; i++){
        cin >> input;
        if(input > dm)
            result++;
        else
            break;
        
        if(i == n - 1)
            noYears = true;
    }

    if(noYears){
        cout << "It had never snowed this early!";
    }
    else{
        cout << "It hadn't snowed this early in " << result << " years!" << endl;
    }
}
