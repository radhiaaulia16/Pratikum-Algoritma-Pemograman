//created by Radhia Aulia Nisa 23343049
#include <stdio.h>

// menghitung rental fim
int main() {
    int durasiFilm = 3;  // Durasi film dalam jam
    float tarifPertama = 15000;  // Tarif untuk jam pertama
    float tarifBerikutnya = 0.5 * tarifPertama;  // Tarif untuk jam berikutnya

    // Menghitung total biaya berdasarkan durasi
    float totalBiaya;
    
    //menggunakan decision making untuk menghitung total biaya
    if (durasiFilm == 1) {
    //kondisi pertama jika durasi film sama dengan 1 jam (selama 1 jam)
    totalBiaya = tarifPertama;
    } else if (durasiFilm > 1) {
    //kondisi berikutnya apabila durasi film lebih dari 1 jam
    totalBiaya = tarifPertama + (tarifBerikutnya * (durasiFilm - 1));
    } else {
    printf("Durasi film harus lebih dari 0 jam.\n");
    }
    
    //menampilkan hasil total biaya setelah selesai melakukan pengecekan kondisi
    printf("Total biaya penyewaan film untuk %d jam: Rp %.2f\n", durasiFilm, totalBiaya);

    return 0;
}

