#include <iostream>
#include <vector>
using namespace std;

int main() {
    int iteration,input;
    vector<int> vec;

    cin >> iteration;
    for (int i = 0; i < iteration; i++){
        cin >> input;
        vec.push_back(input);
    }

    int max = 0;
    for (int i = 0; i < iteration; i++){
        if (vec[i] > max)
            max = vec[i];
    }

    int result = 0;
    for (int i = 0; i < iteration; i++){
        if (vec[i] == max)
            result++;
    }

    cout << result << endl;
}