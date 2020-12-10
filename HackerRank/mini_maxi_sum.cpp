#include <iostream>
using namespace std;

int main() {
    long long arr_main[5];
    long long sum = 0,
              max = 0,
              min = 1000000000,
              g_temp;

    for (int i = 0; i < 5; i++){
        cin >> g_temp;
        arr_main[i] = g_temp;
        
        if (arr_main[i] > max){
            max = arr_main[i];
        }

        if (arr_main[i] < min){
            min = arr_main[i];
        }

        sum += arr_main[i];
    }

    cout << (sum - max) << " " << (sum - min) << endl;
}