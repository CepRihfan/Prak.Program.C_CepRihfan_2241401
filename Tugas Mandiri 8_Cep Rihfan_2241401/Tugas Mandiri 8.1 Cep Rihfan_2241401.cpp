#include <stdio.h>

int main() {
    int data[] = {12, 15, 7, 10, 5, 2, 17, 25, 9, 20, 35, 28, 14, 11, 999};
    int A[11];
    int i, j = 0;

    printf("Hasil a:\n");
    for (i = 0; data[i] != 999; i++) {
        if (j < 11) {
            A[j++] = data[i];
        }
    }
    for (i = 0; i < j; i++) {
        printf("%d ", A[i]);
    }
    printf("\n\n");

    printf("Hasil b:\n");
    j = 0;
    for (i = 0; data[i] != 999; i++) {
        if (data[i] > 9 && j < 11) {
            A[j++] = data[i];
        }
    }
    for (i = 0; i < j; i++) {
        printf("%d ", A[i]);
    }
    printf("\n\n");

    printf("Hasil c:\n");
    j = 0;
    for (i = 0; data[i] != 999; i++) {
        if (data[i] > 9) {
            A[j++] = data[i];
        }
    }
    for (i = 0; i < j; i++) {
        printf("%d ", A[i]);
    }
    printf("\n\n");

    printf("Hasil d:\n");
    j = 0;
    for (i = 0; data[i] != 999; i++) {
        if (data[i] % 2 != 0 && j < 11) {
            A[j++] = data[i];
        }
    }
    for (i = 0; i < j; i++) {
        printf("%d ", A[i]);
    }
    printf("\n\n");

    printf("Hasil e:\n");
    j = 0;
    for (i = 0; data[i] != 999; i++) {
        if (data[i] % 2 != 0) {
            A[j++] = data[i];
        }
    }
    for (i = 0; i < j; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}
