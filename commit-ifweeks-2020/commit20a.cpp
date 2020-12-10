#include <bits/stdc++.h>
using namespace std;

int main(){
    int sumPair;
    cin >> sumPair;

    for(int i = 0; i < sumPair; i++){
        unsigned long long p1, p2, div;
        cin >> p1 >> p2;
        div = p1;

        if(div % p2){
            cout << p1 << endl;
        }
        else {
            unsigned long long subtr = 00000000000000000;
            for(unsigned long long j = 2; j <= 10; j++){
                if(!(div % j)){
                    subtr = j;
                    break;
                }
            }
            // cout << "SUBTR: " << subtr << endl;
            while(div){
                if(div % p2 && !(p1 % div)){
                    cout << div << endl;
                    break;
                }
                div -= subtr;
            }
        }
    }
}