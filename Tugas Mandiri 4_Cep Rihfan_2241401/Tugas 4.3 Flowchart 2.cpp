#include <stdio.h>

int main() {
    int N;


    printf("Masukkan nilai N: ");
    scanf("%d", &N);

   
    while (N <= 50) {
        N = N - 25;
    }

   
    N = N + 10;

    
    printf("Nilai akhir N: %d\n", N);

    return 0;
}

