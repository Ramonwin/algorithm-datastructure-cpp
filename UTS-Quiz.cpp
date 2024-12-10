/* 
	Buatlah aplikasi sederhana menampilkan bonus gaji akhir tahun 2024
	1. inputkan nilai gaji pokok
	2. inputkan 5 nilai lama kerja karyawan
	3. jika lama kerja minimal 5 tahun, maka bonus = 2 x gapok
	4. jika lama kerja minimal 10 tahun, maka bonus = 3 x gapok
    5. jika dibawah 5 tahun munculkan pesan "Maaf belum mendapatkan bonus akhir tahun"
 */
 
#include<stdio.h>
int main ()
{
  int gaji;
  int lamakerja [5];
  int i; 
  int bonus;
  
  printf("Silahkan input gaji pokok : \n");
  	scanf("%d",&gaji);
  printf("========================================= \n"); 	
 	
  printf("Silahkan input 5 nilai, lama kerja (tahun) karyawan : \n");
  
  /* baca isi nilai */
  for (i=0; i<5; i++) {
     scanf ("%d", &lamakerja[i]);
  }  
 
  /* menuliskan isi nilai*/
  printf("=========== Hasil Perhitungan ============= \n");
  for (i=0; i<5; i++) {
     if(lamakerja[i] >= 5 && lamakerja[i] <10){
     		bonus = gaji * 2;
     		printf("Lama Kerja %d tahun = Bonus Tahunan :",lamakerja[i]);
     		printf("%d \n", bonus);
	 }else if(lamakerja[i] >= 10){
	 		int bonus = gaji * 3;
     		printf("Lama Kerja %d tahun = Bonus Tahunan : ",lamakerja[i]);
     		printf("%d \n", bonus);
	 }else {
	 		printf("Lama Kerja %d tahun, Maaf belum dapat bonus \n",lamakerja[i]);
	 }
  }
  
  return 0;
}
