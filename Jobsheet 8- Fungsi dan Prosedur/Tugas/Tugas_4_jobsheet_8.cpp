//created by Radhia Aulia Nisa 23343049
#include <stdio.h>

float potong(float total_pembelian) {
    float diskon = 0.0;
    
    if (total_pembelian > 1000000 && total_pembelian < 3000000) {
        diskon = total_pembelian * 0.20;
    } else if (total_pembelian >= 3000000) {
        diskon = total_pembelian * 0.35;
    }
    
    return diskon;
}

int main() {
    float total_pembelian;
    printf("Program Hitung Potongan\n");
    printf("Total Pembelian (Rp.) : ");
    scanf("%f", &total_pembelian);

    float diskon = potong(total_pembelian);
    float total_bayar = total_pembelian - diskon;

    printf("Besar Diskon : Rp. %.2f\n", diskon);
    printf("Besar Yang Harus Dibayarkan : Rp. %.2f\n", total_bayar);

    return 0;
}
