#include <stdio.h>

int main() {
    int g_n = 0, // modulus segini
        g_x = 0, // segini
        g_y = 0; // sampe segini

    scanf("%d%d%d",&g_n,&g_x,&g_y);
    for (int i = g_x + 1; i < g_y; i++){
        if ((i % g_n) == 0){
            printf("%d\n",i);
        }
    }
}