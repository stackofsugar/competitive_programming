#include <iostream>
#include <vector>
using namespace std;

int main() {
    int iterator, g_temp,
        grad_roundizer[] = {38,43,48,53,58,63,68,73,78,83,88,93,98};
    vector<int> grade;

    cin >> iterator;
    for (int i = 0; i < iterator; i++){
        cin >> g_temp;
        grade.push_back(g_temp);

        if (grade[i] < 38){
            continue;
        }
        else {
            for (int j = 0; j <= 13; j++){
                if (grade[i] == grad_roundizer[j] || grade[i] == grad_roundizer[j] + 1){
                    grade[i] = grad_roundizer[j] + 2;
                }
            }
        }
    }

    for (auto& i : grade){
        cout << i << endl;
    }
}