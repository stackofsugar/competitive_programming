#include <iostream>
#include <vector>
using namespace std;

int main() {
    double iteration,
           input;
    vector<int> vec;

    cin >> iteration;
    for (int i = 0; i < iteration; i++){
        cin >> input;
        vec.push_back(input);
    }

    // Parse
    double c_minus = 0,
           c_plus  = 0,
           c_zero  = 0;

    for (int i = 0; i < iteration; i++){
        if (vec[i] < 0){
            c_minus++;
        }
        else if (vec[i] > 0){
            c_plus++;
        }
        else {
            c_zero++;
        }
    }

    cout << c_plus/iteration << endl << c_minus/iteration << endl << c_zero/iteration << endl;
}