//created by Radhia Aulia Nisa 23343049
#include <stdio.h>

int main() {
	char op;
    double angka1, angka2;
    
    //meminta inputan dari user
    printf("Masukkan operator (+, -, *, /): ");
    scanf("%c", &op);

    printf("Masukkan angka 1: ");
    scanf("%lf", &angka1);
    
    printf("Masukkan angka 2: ");
    scanf("%lf", &angka2);
    
    //melakukan pengecekan kondisi dan mengeksekusi berdasarkan inputan user
    switch (op) {
    case '+':
    printf("Hasil: %.2lf\n", angka1 + angka2);
    break;

	case '-':
	printf("Hasil: %.2lf\n", angka1 - angka2);
	break;

	case '*':
	printf("Hasil: %.2lf\n", angka1 * angka2);
	break;

	case '/':
	if (angka2 != 0)
	printf("Hasil: %.2lf\n", angka1 / angka2);
	else
	printf("Tidak bisa melakukan pembagian oleh 0.\n");
	break;

	default:
	printf("Operator tidak valid.\n");
    }

    return 0;
}
