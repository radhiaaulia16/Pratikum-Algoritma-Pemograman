//created by Radhia Aulia Nisa 23343049
#include <stdio.h>

int perkalian(int a, int b) {
    if (b == 1) {
        return a;
    } else {
        return a + perkalian(a, b - 1); // fungsi perkalian memanggil dirinya sendiri
    }
}

int main(void) {
    int bil1 = 12; // Mengganti nilai bil1 dengan 12
    int bil2 = 6;  // Mengganti nilai bil2 dengan 6

    int hasil = perkalian(bil1, bil2);

    printf("%d x %d = ", bil1, bil2);

    // Menampilkan hasil sebagai penjumlahan
    for (int i = 0; i < bil2; ++i) {
        printf("%d", bil1);
        if (i < bil2 - 1) {
            printf(" + ");
        }
    }

    printf(" = %d\n", hasil);

    return 0;
}

