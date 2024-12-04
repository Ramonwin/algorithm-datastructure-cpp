#include <iostream>

using namespace std;

int main(){
	// Buat aplikasi inputan pendaftaran Nikah KUA
	/*
		1. Input Usia
		2. Jika Usia 21 atau lebih munculkan pesan "Boleh Menikah"
		3. Jika Usia dibawah 21 munculkan pesan "Boleh Menikah + Surat izin Ortu"
		4. jika usia dibawah 15 "Belum Boleh, Sekolah dulu Dek"
	*/
	
	int usia;
	
	cout <<"Aplikasi Pendaftaran Nikah KUA"<<endl;
	cout <<"=============================== "<<endl;
	cout <<"Silahkan Input Usia :"<<endl;

	cin >>usia;
		
	if(usia >= 21){
		cout <<"Boleh Menikah";
	}else if(usia >= 15 ){
		cout<<"Boleh Menikah + Surat Izin Ortua";
	}else{
		cout<<"Belum Boleh, Sekolah dulu Dek";
	}
	
	return 0;
}
