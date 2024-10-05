#include <stdio.h>
#include <math.h>

int main() {
    float alas, tinggi, sisi_miring;

    printf("Masukkan panjang alas segitiga (cm): ");
    scanf("%f", &alas);
    printf("Masukkan tinggi segitiga (cm): ");
    scanf("%f", &tinggi);

    sisi_miring = sqrt(alas * alas + tinggi * tinggi);

    printf("Sisi miring segitiga: %.2f cm\n", sisi_miring);

    return 0;
}

