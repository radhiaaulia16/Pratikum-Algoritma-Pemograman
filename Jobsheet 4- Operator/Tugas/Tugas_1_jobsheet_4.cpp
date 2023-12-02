//created by Radhia Aulia Nisa 23343049
#include <stdio.h>

//konversi detik ke dalam jam, menit dan sisa detik
int main() {
    int totalDetik, jam, menit, detikSisa;
    
    //meminta inputan dari user
    printf("Masukkan jumlah waktu dalam detik: ");
    scanf("%d", &totalDetik);

    jam = totalDetik / 3600;  // 1 jam = 3600 detik
    totalDetik %= 3600;       // Sisa detik setelah dihitung jam

    menit = totalDetik / 60;  // 1 menit = 60 detik
    detikSisa = totalDetik % 60;  // Sisa detik setelah dihitung menit
    
    //menampilkan hasil konversi
    printf("Hasil Output: %d Jam, %d Menit, %d Detik\n", jam, menit, detikSisa);

    return 0;
}
 


