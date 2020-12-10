#include <bits/stdc++.h>
using namespace std;

int main(){
    int testCase;
    cin >> testCase;

    for(int i = 0; i < testCase; i++){
        int arrCount, arrThreshold, arrLate = 0, arrOntime = 0;
        cin >> arrCount;
        cin >> arrThreshold;
        int arr[arrCount];

        for(int i = 0; i < arrCount; i++){
            cin >> arr[i];
            if(arr[i] <= 0){
                arrOntime++;
            }
            else {
                arrLate++;
            }
        }

        if(arrOntime < arrThreshold){
            cout << "YES \n";
        }
        else {
            cout << "NO \n";
        }
    }

}