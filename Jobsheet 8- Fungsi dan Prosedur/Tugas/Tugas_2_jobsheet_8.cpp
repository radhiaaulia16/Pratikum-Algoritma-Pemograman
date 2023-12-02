//created by Radhia Aulia Nisa 23343049
#include <stdio.h>

void penjumlahan(int a, int b){
	printf("%d + %d = %d\n", a, b, a+b);
}

void pengurangan(int a, int b){
	printf("%d - %d = %d\n", a, b, a-b);
}

void perkalian(int a, int b){
	printf("%d x %d = %d\n", a, b, a*b);
}

void pembagian(int a, int b){
	printf("%d / %d = %d\n", a, b, a/b);
}

int main(){
	int a;
	int b;
	
	printf("Masukkan bilangan bulat 1 : ");
	scanf("%d", &a);
	
	printf("Masukkan bilangan bulat 2 : ");
	scanf("%d", &b);
	
	penjumlahan(a, b);
	pengurangan(a, b);
	perkalian(a, b);
	pembagian(a, b);
	
	return 0;
}

