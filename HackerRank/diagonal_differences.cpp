#include <iostream>
#include <vector>
using namespace std;

int main() {
    int dimension,
        m_data;
    vector<vector<int>> matrix_main;
    vector<int> matrix;

    // Matrix input phase
    cin >> dimension;
    for (int i = 0; i < dimension; i++){
        for (int j = 0; j < dimension; j++){
            cin >> m_data;
            matrix.push_back(m_data);
        }
        matrix_main.push_back(matrix);
        matrix.clear();
    }

    // Diagonal calculation phase
    int diagonal_prime = 0,
        diagonal_secondary = 0;

        // Primary diagonal (+ gradient)
    for (int i = 0; i < dimension; i++){
        diagonal_prime += matrix_main[i][i]; 
    }
        // Secondary diagonal (- gradient)
        int j = 0;
    for (int i = dimension - 1; i >= 0; i--){
        diagonal_secondary += matrix_main[i][j];
        j++;
    }
    
    if (diagonal_prime < diagonal_secondary){
        cout << diagonal_secondary - diagonal_prime << endl;
    }
    else {
        cout << diagonal_prime - diagonal_secondary << endl;
    }
}

/*
 [00] [01] [02] [03]
 [10] [11] [12] [13]
 [20] [21] [22] [23]
 [30] [31] [32] [33]
*/