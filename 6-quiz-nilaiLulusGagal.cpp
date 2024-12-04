#include<iostream>
using namespace std;

int main (){
 /* 
	Buatlah program sederhana menampilkan nilai suara paslon yg menang dan gagal menggunakan array
	1. inputkan 4 nilai suara paslon walikota Bandung
	2. tampilkan semua 4 nilai suara paslon yang telah di input
	3. jika nilai suara paslon 50 atau lebih maka tampilkan pesan 
		"selamat anda pemenang pilkada walikota Bandung 2024-2029"
	4. jika nilai di bawah 50 maka tampilkan pesan "Maaf masih gagal"
 */
 
  int nilai[4];
  int i; 
  
  cout<<"Program input suara pilkada"<<endl;
  cout<<"============================="<<endl;
  cout<<"Silahkan input 4 nilai suara paslon : "<<endl;
  
  /* baca isi nilai */
  for (i=0; i<4; i++) {
     cin>>nilai[i];
  }  
 
  /* menuliskan isi nilai */
  printf("=========== Hasil Evaluasi =============== \n");
  for (i=0; i<4; i++) {
     if(nilai[i] >= 50){
     	cout<<nilai[i]<<" : Selamat anda pemenang pilkada walikota Bandung 2024-2029 "<<endl;
	 }else{
	 	cout<<nilai[i]<<" : Maaf masih gagal "<<endl;
	 }
  }
  
  return 0;
}
