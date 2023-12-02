//created by Radhia Aulia Nisa 23343049
# include <stdio.h>
	
int main (){
	
	//berisi variabel rupiah dan konstanta nilai tukar
	const double nilai_tukar = 14.25;
	double rupiah;
	
	//meminta inputan dari user
	printf("masukkakn nominal rupiah : ");
	scanf("%lf", &rupiah);
	
	//eksekusi konversi rupiah ke dollar
	double dollar = rupiah / nilai_tukar ;
	
	//menampilkan hasil konversi rupiah ke dollar
	printf ("hasil %.2lf adalah $ %.2lf", rupiah, dollar);
	
	return 0;
	
}


    

