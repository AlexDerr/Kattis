#include <iostream>
#include <string>

using namespace std;

int main(){
    string str;
    int x[15] = {0}, max = 0;

    for(int i = 0; i < 5; i++){
        cin >> str;
        if(str[0] == 'A')
            x[1]++;
        else if(str[0] == 'T')
            x[10]++;
        else if(str[0] == 'J')
            x[11]++;
        else if(str[0] == 'Q')
            x[12]++;
        else if(str[0] == 'K')
            x[13]++;
        else
            x[str[0] - 48]++;
    }

    for(int i = 0; i < 15; i++){
        if(x[i] > max)
            max = x[i];
    }

    cout << max;
}
