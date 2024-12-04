#include <iostream>

using namespace std;
int main(){
		/*
		looping / perulangan / repetition
		1. for (counted loop)
		2. while (counted loop & uncounted loop)
		3. do while
		4. Nested For
	*/
	int i;
	int tgl;
	int bln;
	int tahun;
	
	for (i=1; i<=100; i++){
		cout<< "Soal CPNS No." << i <<endl;
	}
	cout<<"=========================================="<<endl;
	
	for(tgl=1; tgl<=30; tgl++){
		cout<< "Tanggal:" << tgl <<endl;
	}
	cout<<"=========================================="<<endl;
	
	for(bln=1; bln<=12; bln++){
		cout<< "Bulan:" << bln <<endl;
	}
	cout<<"=========================================="<<endl;
	
	for(tahun=2024; tahun>=2000; tahun--){
		cout<< "Tahun:" << tahun <<endl;
	}
	cout<<"=========================================="<<endl;
	return 0;
}
