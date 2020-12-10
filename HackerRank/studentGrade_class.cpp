#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;
/////////////////////////////////////////////////////////////////////////////////////////////
class Student{
    private:
        int score,
            sum = 0;
    public:
        void input(){
            for (int i = 0; i < 5; i++){
                cin >> score;
                score += sum;
                score = 0;
            }
        }
        int calculateTotalScore(){
            return sum;
        }
};
/////////////////////////////////////////////////////////////////////////////////////////////
int main() {
    int n; // number of students
    cin >> n;
    Student *s = new Student[n]; // an array of n students
    
    for(int i = 0; i < n; i++){
        s[i].input();
    }

    // calculate kristen's score
    int kristen_score = s[0].calculateTotalScore();
    cout << "kscore: " << kristen_score << endl;

    // determine how many students scored higher than kristen
    int count = 0; 
    for(int i = 1; i < n; i++){
        int total = s[i].calculateTotalScore();
        if(total > kristen_score){
            count++;
        }
    }

    // print result
    cout << count;
    
    return 0;
}
