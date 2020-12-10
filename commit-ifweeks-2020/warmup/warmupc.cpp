#include <iostream>
#include <string>
using namespace std;

int main(){
    int arrLength;
    cin >> arrLength;
    
    int arr[arrLength], lookTable[100];
    for(int i = 0; i < arrLength; i++){
        cin >> arr[i]; // main array
    }
    for(int i = 0; i < 100; i++){
        lookTable[i] = 0;
    }
    
    for(int i = 0; i < 100; i++){
        for(int j = 1; j < 100; j++){
            if(arr[i] == j){
                lookTable[j-1]++;
            }
        }
    }

    for(int i = 0; i < 100; i++){
        cout << lookTable[i] << " " << '\n';
    }    
}