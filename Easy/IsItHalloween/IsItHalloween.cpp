#include <iostream>
#include <string>

using namespace std;

int main(){
    string str;
    int x;

    cin >> str >> x;

    if(str == "OCT" && x == 31)
        cout << "yup";
    else if(str == "DEC" && x == 25)
        cout << "yup";
    else
        cout << "nope";
}
