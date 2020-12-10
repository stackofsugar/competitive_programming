// https://tlx.toki.id/courses/competitive/chapters/01/problems/A
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int selCount;

    cin >> selCount;

    int N_partic[selCount],
        M_passing[selCount],
        int_quesd[selCount];
    
    for (int i = 0; i < selCount; i++){
        cin >> N_partic[i] >> M_passing[i];
        int particip[N_partic[i]][3];
        string str_idnum[N_partic[i]+1];            
        cin >> str_idnum[0];
        for (int j = 0; j < N_partic[i]; j++){
            cin >> str_idnum[j+1];
            if (str_idnum[j+1] == str_idnum[0]){
                int_quesd[i] = j;
            }
            for (int k = 0; k < 3; k++){
                cin >> particip[j][k];
            }
        }
        // Calculation Phase
        int hit3 = 0, 
            hit2 = 0, 
            hit1 = 0;

        for (int j = 0; j < N_partic[i]; j++){
            if (j != int_quesd[i]){
                if (particip[int_quesd[i]][2] == particip[j][2]){
                    hit3++;
                    if (particip[int_quesd[i]][1] == particip[j][1]){
                        hit2++;
                        if (particip[int_quesd[i]][0] <= particip[j][0]){
                            hit1++;
                        }
                    }
                    else if (particip[int_quesd[i]][1] < particip[j][1]){
                        hit2++; hit1++;
                    }
                }
                else if (particip[int_quesd[i]][2] < particip[j][2]){
                    hit3++; hit2++; hit1++;
                }
            }
        }
        if (M_passing[i] < hit3){
            if (M_passing[i] < hit2){
                if (M_passing[i] < hit1){
                    cout << "Ya" << endl;
                }
                else {
                    cout << "TIDAK" << endl;
                }
                
            }
            else {
                cout << "YA" << endl;
            }
        }
        else {
            cout << "YA" << endl;
        }
    }
}

/*
str_idnum [0] is the questioned ID
str_idnum [1-N] is the participating ID
int_quesd [i] represents the line of participants that got tested
*/