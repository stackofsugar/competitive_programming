#include <bits/stdc++.h>
using namespace std;

int main(){
    int matchSize, pbuf1, pbuf2, max;
    cin >> matchSize;
    int leads[matchSize], leadbuf[matchSize];

    for(int i = 0; i < matchSize; i++){
        cin >> pbuf1;
        cin >> pbuf2;
        leads[i] = pbuf1 - pbuf2;
    }


    for(int i = 0; i < matchSize; i++){
        if(i == 0){
            leadbuf[i] = leads[i];
        }
        else{
            for(int j = 1; j <= i; j++){
                leadbuf[i] = 0;
                if(j == 1){
                    leadbuf[i] = leadbuf[0] + leads[j];
                }
                else {
                    leadbuf[i] = leadbuf[i-1] + leads[j];
                }
            }
        }
    }

    if(leads[max] < 0){
        leads[max] *= -1;
        cout << "2 ";
    }
    else {
        cout << "1 ";
    }

    for(int i = 0; i < matchSize; i++){
        leadbuf[i] *= -1;
    }

    max = 0;
    for(int i = 0; i < matchSize; i++){
        if(leadbuf[i] > leadbuf[max]){
            max = i;
        }
    }
    cout << leadbuf[max] << '\n';
    
}