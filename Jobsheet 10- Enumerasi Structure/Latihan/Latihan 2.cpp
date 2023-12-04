//created by Radhia Aulia Nisa 23343049
#include <stdio.h>

enum hari {SENIN, SELASA, RABU, KAMIS, JUMAT, SABTU, MINGGU};

int main() {
    enum hari sekarang;
    sekarang = RABU;

    printf("Ukuran variabel enum: %d bytes\n", sizeof(sekarang));
}
