//created by Radhia Aulia Nisa 23343049
# include <stdio.h>

int main() {
    double const PI = 3.14;
    double d, r, LP, volume;

    // meminta inputan dari user
    printf("Masukkan diameter lingkaran : ");
    scanf("%lf", &d);

    r = d / 2.0;

    // menampilkan nilai jari-jari
    printf("Jari-jari lingkaran adalah %.2lf\n", r);

    // eksekusi nilai inputan
    LP = 4.0 * PI * r * r ;
    volume = (4.0 / 3.0) * PI * r * r * r;

    // menampilkan hasil nilai
    printf("Nilai Luas Permukaan : %.2lf\n", LP);
    printf("Nilai volume : %.2lf\n", volume);

    return 0;
}






