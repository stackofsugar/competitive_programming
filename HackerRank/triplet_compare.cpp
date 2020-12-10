#include <iostream>
using namespace std;

int main() {
    int g_sc_alice = 0,
        g_sc_bob = 0,
        arr_alice[3],arr_bob[3];

    for (int i = 0; i < 3; i++){
        cin >> arr_alice[i];
    }
    for (int i = 0; i < 3; i++){
        cin >> arr_bob[i];
    }

    for (int i = 0; i < 3; i++){
        if (arr_alice[i] > arr_bob[i]){
            g_sc_alice++;
        }
        else if (arr_alice[i] < arr_bob[i]){
            g_sc_bob++;
        }
        else { continue; }
    }

    cout << g_sc_alice << " " << g_sc_bob << endl;

}