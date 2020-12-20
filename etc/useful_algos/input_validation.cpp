#include <iostream>
#include <limits>
using namespace std;

void cleanbuf(){
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
}

template<typename Ty>
Ty input(Ty floor = 0, Ty ceil = numeric_limits<Ty>::max()){
    Ty buffer;
    while(1){
        if(cin >> buffer){
            if(buffer < floor){
                cout << "Your input was too small! Try again: \n";
            } else if(buffer > ceil){
                cout << "Your input was too big! Try again: \n";
            } else {
                return buffer;
            }
        } else {
            cout << "Invalid input! Please try again: \n";
            cleanbuf();
        }
    }
}