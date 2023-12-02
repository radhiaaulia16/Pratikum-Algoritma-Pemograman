// created by Radhia Aulia Nisa 23343049
#include <stdio.h>

int main() {
    char nama[100], program_studi[100], fakultas[100];
    char nim[20];
    float nilai_praktikum, uts, uas, nilai_akhir;

    // Meminta inputan data mahasiswa
    printf("Nama: ");
    scanf(" %[^\n]s", nama);

    printf("NIM: ");
    scanf(" %[^\n]s", nim);

    printf("Program Studi: ");
    scanf(" %[^\n]s", program_studi);

    printf("Fakultas: ");
    scanf(" %[^\n]s", fakultas);

    printf("Nilai Praktikum: ");
    scanf("%f", &nilai_praktikum);

    printf("Nilai UTS: ");
    scanf("%f", &uts);

    printf("Nilai UAS: ");
    scanf("%f", &uas);

    // Menghitung nilai akhir berdasarkan bobot
    nilai_akhir = 0.3 * nilai_praktikum + 0.3 * uts + 0.4 * uas;

    // Menampilkan nilai akhir
    printf("\n=== Nilai Akhir ===\n");
    printf("Nama: %s\n", nama);
    printf("NIM: %s\n", nim);
    printf("Program Studi: %s\n", program_studi);
    printf("Fakultas: %s\n", fakultas);
    printf("Nilai Akhir: %.2f\n", nilai_akhir);

    return 0;
}




