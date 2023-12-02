//created by Radhia Aulia Nisa 23343049
#include <stdio.h>
 
int main(){
  int i;
  
  //menampilkan deret bilangan genap menggunakan perulangan hingga 50
  printf("Deret bilangan genap: ");
  for (i=0 ;i<=50 ;i+=2) {
    printf("%d ",i);
  }
  
  //memberikan spasi antara baris pertama dengan selanjutnya
  printf("\n");
  
  //menampilkan deret bilangan ganjil menggunakan perulangan hingga 50
  printf("Deret bilangan ganjil: ");
  for (i=1 ;i<=50 ;i+=2){
    printf("%d ", i);
  }
 
  printf("\n");
  
  return 0;
}

