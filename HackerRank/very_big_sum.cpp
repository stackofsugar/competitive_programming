#include <iostream>
using namespace std;

int main() {
    int iterator;
    long long calc = 0,
              input;

    cin >> iterator;
    for (int i = 0; i < iterator; i++){
        cin >> input;
        calc += input;
    }

    cout << calc << endl;
}