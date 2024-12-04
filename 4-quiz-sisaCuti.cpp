#include <iostream>

using namespace std;

int main(){
	/*
	Buat aplikasi sederhana menghitung sisa cuti menggunakan Switch Case
	Ketentuan :
		1. Input Static nilai Total cuti tahunan 12 hari & cuti bersama 4 hari
		2. Input Dinamis pengajuan cuti
		3. maksimal ambil cuti adalah 3 hari
		4. Hitung total sisa cuti, dan munculkan pesan sisa cuti adalah : ....
		5. total sisa cuti = total cuti tahunan - cuti bersama - pengajuan cuti
		6. Jika pengajuan cuti lebih dari 3 hari, munculkan pesan "Maaf tidak bisa, pengajuan melebihi batas maksimal"
	*/
	
	int cutiTahun = 12;
	int cutiBer = 4;
	int ambilCuti;
	int sisaCuti;
	
	cout <<"Aplikasi Hitung Sisa Cuti"<<endl;
	cout <<"=============================== "<<endl;
	cout <<"Silahkan Input Pengajuan Cuti :"<<endl;

	cin >>ambilCuti;
	
	switch(ambilCuti){
		case 0 :
			sisaCuti = cutiTahun - cutiBer - ambilCuti;
			cout << "Total Sisa Cuti Adalah :"<<sisaCuti <<endl;
			break;
		case 1 :
			sisaCuti = cutiTahun - cutiBer - ambilCuti;
			cout << "Total Sisa Cuti Adalah :"<<sisaCuti <<endl;
			break;
		case 2 :
			sisaCuti = cutiTahun - cutiBer - ambilCuti;
			cout << "Total Sisa Cuti Adalah :"<<sisaCuti <<endl;
			break;
		case 3 :
			sisaCuti = cutiTahun - cutiBer - ambilCuti;
			cout << "Total Sisa Cuti Adalah :"<<sisaCuti <<endl;
			break;
		default :
			cout << "Maaf tidak bisa, pengajuan melebihi batas maksimal"<<endl;
			break;
			
	}
	
	return 0;
}
