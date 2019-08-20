#include <iostream>

using namespace std;

int main(){
    int limit, iterations, change, numDenied = 0, totalPeople = 0;
    string action;

    cin >> limit >> iterations;

    for(int i = 0; i < iterations; i++){
        cin >> action >> change;

        if(action == "enter"){
            if(totalPeople + change > limit){
                numDenied += 1;
            }
            else{
                totalPeople += change;
            }
        }
        else{
            totalPeople -= change;
        }
    }

    cout << numDenied;
}
