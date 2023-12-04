// created by Radhia Aulia Nisa 23343049

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char mainLagi;
    do {
        // Inisialisasi generator nomor acak
        srand(time(NULL));

        // Menghasilkan nomor acak antara 1 dan 20
        int nomorSasaran = rand() % 20 + 1;

        int tebakAngka, coba = 0;
        printf("Selamat datang di permainan tebak nomor!\n");

        do {
            // Minta pemain menebak nomor
            printf("Tebak nomor antara 1 dan 20: ");
            scanf("%d", &tebakAngka);

            // Periksa apakah tebakan benar, lebih besar, atau lebih kecil
            if (tebakAngka == nomorSasaran) {
                printf("Selamat, Anda benar!\n");
                printf("==========================================\n");
            } else if (tebakAngka < nomorSasaran) {
                printf("Nomor saya lebih besar!\n");
                printf("==========================================\n");
            } else {
                printf("Nomor saya lebih kecil!\n");
                printf("==========================================\n");
            }

            coba++;

        } while (tebakAngka != nomorSasaran);

        // Menampilkan jumlah percobaan yang diperlukan
        printf("Anda berhasil menebak dalam %d percobaan.\n", coba);

        // Menanyakan apakah ingin bermain lagi
        printf("Mau bermain lagi? (y/n): ");
        scanf(" %c", &mainLagi);
        
        printf("============================================\n");

    } while (mainLagi == 'y' || mainLagi == 'Y');

    printf("Terima kasih telah bermain!\n");

    return 0;
}