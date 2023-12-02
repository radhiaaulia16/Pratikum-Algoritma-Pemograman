//created by Radhia Aulia Nisa 23343049
#include <stdio.h>

void luas(const float pi, double r, double *L) {
    *L = pi * r * r;
    printf("hasil luas lingkaran: %.2f\n", *L);
}

void keliling(const float pi, double r, double *K) {
    *K = 2 * pi * r;
    printf("hasil keliling lingkaran: %.2f\n", *K);
}

int main(void) {
    const float pi = 3.14;
    double r;
    double L, K;
    
    printf("Masukkan nilai jari-jari: ");
    scanf("%lf", &r);

    luas(pi, r, &L);
    keliling(pi, r, &K);

    return 0;
}

