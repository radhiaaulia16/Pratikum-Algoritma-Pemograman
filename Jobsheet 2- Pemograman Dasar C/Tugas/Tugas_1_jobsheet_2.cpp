//cretaed by Radhia Aulia Nisa 23343049

#include <stdio.h>

int main(){
	
	char nama;
	
	//menampilkan pesan
	printf("Hello, siapa nama lengkap mu?\n");
	
	//meminta input dari user
	printf("Nama saya : ");
	scanf("%[^\n]s", &nama);
	
	//menampilkan pesan
	printf("Selamat datang %s dalam Pemograman C", &nama);
	
	return 0;
}