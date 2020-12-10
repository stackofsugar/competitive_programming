#include <stdio.h>
#define moddr 1000000007

int main() {
    long long num = 1, // yang dipangkatkan
              exp = 1, // eksponen
              g_buffer = 1;

    scanf("%lld%lld",&num,&exp);
    num %= moddr;

    while (exp > 0){
        if (exp % 2){
            g_buffer = (g_buffer * num) % moddr;
        }
        exp /= 2;
        num = (num * num) % moddr ;
    }
    printf("%lld\n",g_buffer);
}