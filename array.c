#include <stdio.h>
#include <conio.h>
main(){
 int b,sya=0, nilaiSiswa[11];
 double rata;
 
 printf("\n\tARRAY SATU DIMENSI\n\n");
 printf("Input nilai berapa banyak? "); scanf("%d",&b);
 printf("\n");
 ////////////////////////////////////////////////////////////////////
 for(int han=0;han<b;han++){
  printf("Nilai ke-%d : ",han); scanf("%d",&nilaiSiswa[han]);
 }
 ////////////////////////////////////////////////////////////////////
 printf("\nHASIL NILAI YG DIINPUTKAN USER");
 for(int han=0;han<b;i\han++){
  printf("\nNilai ke-%d = %d", han,nilaiSiswa[han]);
 }
 ////////////////////////////////////////////////////////////////////
 for(int han=0;han<b;han++){
  sya=sya+nilaiSiswa[han];
  rata=sya/b;
 }
 printf("\nHasil penjumlahan kesemua nilai = %d",sya);
 printf("\nRata-rata nya = %f", rata);
}
