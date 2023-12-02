//created by Radhia Aulia Nisa 23343049
#include <stdio.h>

int main(){
	int i = 0;
	int j = 0;
	int k ;
	
	//perulangan mencetak segitiga dengan karakter asteris
	for ( int i=0 ; i<= 5 ; i++){
		for( int j=0 ; j<=i ; j++ ){
			printf("*");
		}
		printf("\n");
	}
	
	//memberi spasi antara pola 1 dan 2
	printf("\n");
	
	//perulangan untuk pola segitiga terbalik
	for ( int i =0; i<5 ; i++){
		for(int j = 0; j<i; j++){
			printf(" ");
		}
		for ( k = 5; k>i ; k--){
			printf ("*") ;
		}
		printf("\n");
	}
	
	return 0;
}