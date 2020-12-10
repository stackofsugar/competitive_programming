/*
2020, Christopher Digno
*/

#include <iostream>
#include <vector>
using namespace std;

// void puttingVector(vector<int>&,int,string);

int main() {
    int g_K, // kapasitas maksimal knapsack
        g_n; // jumlah item input

    cout << "n = ";
    cin >> g_n;
    cout << "K = ";
    cin >> g_K;

    int pi[g_n];        // alokasi array untuk menyimpan nilai pi
    cout << "profit = ";
    for (int i = 0; i < g_n; i++){ // pi => [0],[1],[2],[3]
        cin >> pi[i];
    }

    cout << "weight = ";
    int wi[g_n];        // alokasi array untuk menyimpan nilai wi
    for (int i = 0; i < g_n; i++){ // wi => [0],[1],[2],[3]
        cin >> wi[i];
    }

    int copy_arr[g_n+1][g_K+1];  // alokasi array 2d (sebagai baris, pi wi) sebagai tabel int knapsack

    for (int i = 0; i <= g_K; i++){ // inisiasi baris pertama dengan 0
        copy_arr[0][i] = 0;
    }
    for (int i = 0; i <= g_n; i++){ // inisiasi kolom pertama dengan 0
        copy_arr[i][0] = 0;
    }

    for (int i = 1; i <= g_n; i++){ // memulai pengisian array dengan algoritma
        for (int j = 1; j <= g_K; j++){
            if (j < wi[i-1]){
                copy_arr[i][j] = copy_arr[i-1][j];
            }
            else {
                copy_arr[i][j] = max(copy_arr[i-1][j], copy_arr[i-1][j-wi[i-1]]+pi[i-1]);
            }
            
        }
    }

    // outputs
    cout << "The maximum profit is: " << copy_arr[g_n][g_K] << endl; // <-- 8

    for (int i = 0; i < g_n; i++){
        for (int j = i+1; j < g_n; j++){
            if (pi[i] + pi[j] == copy_arr[g_n][g_K]){
                cout << "The profit config is: " << pi[i] << " and " << pi[j] << endl;
                cout << "The weight config is: " << wi[i] << " and " << wi[j] << endl;
            }
        }
    }

}

/*
    n = 4 <- jumlah input
    p = {1,2,5,6}
    w = {2,3,4,5}
    K = 8 <- kapasitas knapsack

            i ->    0  1  2  3  4  5  6  7  8
                    |  |  |  |  |  |  |  |  |
        pi  wi  0   0  0  0  0  0  0  0  0  0   i = 0 -> i'll just skip this
        1   2   1   0  0  1* 1  1  1  1  1  1   i = 1
        2   3   2            2  2  3  3  3  3   i = 2
        5   4   3               5  5  6  7  7   i = 3
        6   5   4                  6  6  7  8   i = 4
            j^

    formula for arr[n][K] = max(arr[n-1][K], arr[n-1] [K-Ki[i]+pi[i]]) untuk setiap loop [i], [K]

    explained like a pro = https://www.youtube.com/watch?v=nLmhmB6NzcM

Implementasikan algoritma Integer Knapsack untuk mendapatkan solusi
optimal dari suatu permasalahan, dengan ketentuan sebagai berikut
a. Gunakan bahasa pemrograman yang anda kuasai.
b. Input : jumlah item (n), bobot setiap item (wi), profit setiap item (pi) dan
kapasitas (K) knapsack dimasukkan secara interaktif
c. Output : Solusi yang dihasilkan
d. Percobaan dilakukan sebanyak 10 kali dengan input yang berbeda-beda.
*/



// puttingVector(vector_anda, banyak_input, nama_konteks_input)
// void puttingVector(vector<int>& vector, int iteration, string unspaced_name){
//     cout << unspaced_name << ": ";
//     int temp_data;
//     for (int i = 0; i < iteration; i++){
//         cin >> temp_data;
//         vector.push_back(temp_data);
//     }
// }