//created by Radhia Aulia Nisa 23343049
#include <stdio.h>

int main() {
    int baris = 5;
    
    //perulangan untuk menampilkan pola segitiga dengan angka
    for (int i = 1; i <= baris; i++) {
        int gandakan = 1;
        for (int j = 1; j <= i; j++) {
            printf("%d ", i * gandakan);
            gandakan++;
        }
        printf("\n");
    }
    return 0;
}
