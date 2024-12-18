#include <iostream>
using namespace std;

/*
	Quiz
	1. Buat program sederhana perhitungan luas tanah & pajak
	2. hitung sebanyak 3x luas tanah menggunakan fungsi
	2. luas = panjang * lebar
	3. harga 1m = Rp. 5.000.000
	4. jika harga jual tanah lebih dari 1Milliar maka pajak ppn 10%
*/

int luas,harga, pajak;

int luastanah(int panjang, int lebar){
	luas = panjang * lebar;
	harga = 5000000 * luas;
	if(harga > 1000000000){
		pajak = 0.1 * harga;
	}else{
		pajak = 0;
	}
	
	return luas;
}

int main(){
	
	cout<<"Tanah ke-1 \n";
	cout<<"Luas tanah :" <<luastanah(20,5)<<endl;
	cout<<"Harga :"<< harga<<endl;
	cout<<"Pajak :"<<pajak<<endl;
	cout<<"================================= \n";
	cout<<"Tanah ke-2 \n";
	cout<<"Luas tanah :" <<luastanah(25,10)<<endl;
	cout<<"Harga :"<< harga<<endl;
	cout<<"Pajak :"<<pajak<<endl;
	cout<<"================================= \n";
	cout<<"Tanah ke-3 \n";
	cout<<"Luas tanah :" <<luastanah(15,10)<<endl;
	cout<<"Harga :"<< harga<<endl;
	cout<<"Pajak :"<<pajak<<endl;
	cout<<"================================= \n";
	
	cin.get();
	return 0;
}
