#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    int n, x = 1;
    string str;
    cin >> n;

    while(n != 0){
        vector<string> list;

        for(int i = 0; i < n; i++){
            cin >> str;
            list.push_back(str);
        }

        cout << "SET " << x++ << endl;

        for(int i = 0; i < n; i+=2){
            cout << list[i] << endl;;
        }

        int i = n % 2 != 0 ? list.size() - 2: list.size() - 1;
        for(i; i > 0; i-=2){
            cout << list[i] << endl;
        }
        cin >> n;
    }    
}
