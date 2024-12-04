#include <iostream>

using namespace std;
int main(){
	/*
	== QUIZ ==	
	1. Buatlah program sederhana Melihat Hari Libur Nasional Bulan November 1-30
	2. Buatlah fungsi perulangan untuk penanggalan ganjil dan genap
	3. Untuk penanggalan genap jika berada di angka 10 maka :
	   munculkan pesan "Hari Libur Pahlawan Nasional"
	4. Untuk penanggalan ganjil jika berada di angka 27 maka :
	   munculkan pesan "Hari Libur PILKADA Serentak"
	*/
	
	int i;
	cout<<"===== HARI LIBUR NASIONAL ==="<<endl;
	cout<<"============================="<<endl;
	cout<<"====== Tanggal Genap ========"<<endl;
	for (i=1; i<=30; i++){
		if(i % 2 == 0){
			if(i==10){
				cout<< i << " : Hari Libur Pahlawan Nasional"<<endl;
			}else{
				cout<< i <<endl;
			}
		}
	}
	
	cout<<"=============================="<<endl;
	cout<<"====== Tanggal Ganjil ========"<<endl;
	for (i=1; i<=30; i++){
		if(i % 2 == 1){
			if(i==27){
				cout<< i << " : Hari Libur PILKADA Serentak"<<endl;
			}else{
				cout<< i <<endl;
			}
		}
	}

	cout<<"================================"<<endl;
	return 0;
}
