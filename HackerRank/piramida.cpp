#include <stdio.h>

int min(int x, int y){
    if (x < y){
        return x;
    }
    else {
        return y;
    }
}

int main() {
    int num,
        cols,
        buffer1,
        buffer2;

    scanf("%d",&num);
    cols = (num*2) - 1;

    for (int i = 1; i <= cols; i++) {
        //buffer1 = (i < ((2*num) - i)) ? i : ((2*num) - i); // (ekspresi) ? (true) : (false)
        buffer1 = min(i, ((2*num)-i));
        for (int j = 1; j <= cols; j++){
            //buffer2 = (j < ((2*num) - j)) ? j : ((2*num) - j);
            buffer2 = min(j, ((2*num)-j));
            printf("%d",min(buffer1,buffer2));
            if (j == cols){
                printf("\n");
            }
            else {
                printf(" "); 
            }
        }
    }
}

/*
Ukuran persegi: MxM di mana M = 2*N-1

Clue:

for (i dari 1 ke M) {
    x = min(i, 2*N - i)
    for (j dari 1 ke M) {
        y = min(j, 2*N - j)
        tampilkan min(x, y)
        tampilkan enter jika J == M, spasi jika tidak
    }
    tampilkan newline
}

--> min(A, B) : mengambil nilai paling kecil antara A dan B
*/