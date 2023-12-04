// created by Radhia Aulia Nisa 23343049
#include <stdio.h>

// Mendefinisikan struktur untuk data mahasiswa
struct Mahasiswa {
    int npm;
    char nama[50];
    char tgl_lahir[10];
    char alamat[100];
    long hp;
};

int main() {
    // Mendeklarasikan array untuk menyimpan data mahasiswa
    struct Mahasiswa mahasiswa[50];

    int i = 0;
    char input_lagi;

    do {
        // Memasukkan data mahasiswa
        printf("NPM : ");
        scanf("%d", &mahasiswa[i].npm);

        printf("NAMA : ");
        scanf("%s", &mahasiswa[i].nama);

        printf("TGL LAHIR : ");
        scanf("%s", mahasiswa[i].tgl_lahir);
        
        printf("\n");

        printf("ALAMAT : ");
        scanf("%s", mahasiswa[i].alamat);

        printf("HP : ");
        scanf("%ld", mahasiswa[i].hp);

        // Menampilkan data mahasiswa
        printf("%d %s %s %s %ld\n", mahasiswa[i].npm, mahasiswa[i].nama, mahasiswa[i].tgl_lahir,
               mahasiswa[i].alamat, mahasiswa[i].hp);

        // Mengecek apakah ingin memasukkan data lagi
        printf("Mau memasukkan data lagi [y/t]? ");
        scanf(" %c", &input_lagi);

        i++;

    } while (input_lagi == 'y' || input_lagi == 'Y');

    printf("Data mahasiswa:\n");

    // Menampilkan semua data mahasiswa
    for (int j = 0; j < i; j++) {
        printf("%d %s %s %s %ld\n", mahasiswa[j].npm, mahasiswa[j].nama, mahasiswa[j].tgl_lahir,
               mahasiswa[j].alamat, mahasiswa[j].hp);
    }

    return 0;
}
