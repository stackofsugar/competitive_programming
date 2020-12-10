#include <bits/stdc++.h>
using namespace std;

int main(){
    char numbers[] = {'0','1','2','3','4','5','6','7','8','9'};
    char lcase[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    char ucase[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    char scase[] = {'!','@','#','$','%','^','&','*','(',')','-','+'};
    int needSome[4] = {0,0,0,0};
    int needCount = 0;

    int strl;
    string strbuf;
    cin >> strl >> strbuf;

    for(int i = 0; i < 10; i++){
        if((count(strbuf.begin(), strbuf.end(), numbers[i]))){
            needSome[0]++;
        }
    }
    // cout << "NEEDSOME[0] = " << needSome[0] << endl;
    for(int i = 0; i < 26; i++){
        if((count(strbuf.begin(), strbuf.end(), lcase[i]))){
            needSome[1]++;
        }
    }
    // cout << "NEEDSOME[1] = " << needSome[1] << endl;
    for(int i = 0; i < 26; i++){
        if((count(strbuf.begin(), strbuf.end(), ucase[i]))){
            needSome[2]++;
        } 
    }
    // cout << "NEEDSOME[2] = " << needSome[2] << endl;
    for(int i = 0; i < 12; i++){
        if((count(strbuf.begin(), strbuf.end(), scase[i]))){
            needSome[3]++;
        } 
    }
    // cout << "NEEDSOME[3] = " << needSome[3] << endl;

    for(int i = 0; i < 4; i++){
        if(!needSome[i]){
            needCount++;
        }
        else {
            
        }
    }

    if((strl + needCount) < 6){
        cout << needCount + (6 - (strl + needCount)) << endl;
    }
    else {
        cout << needCount << endl;
    }
}