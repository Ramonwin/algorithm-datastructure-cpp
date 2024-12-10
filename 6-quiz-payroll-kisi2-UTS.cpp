#include <iostream>
using namespace std;

int main(){
	// Buat program sederhana untuk payroll (Kisi - Kisi UTS)
	/*
		1. Input Jumlah Kehadiran dalam 1 bulan
		2. Input Nama 3 Karyawan 
		3. Input 3 Posisi Jabatan :
		4. Jika kode 1 adalah staff, income 1 hari = Rp. 100.000
		5. Jika kode 2 adalah spv, income 1 hari = Rp. 200.000
		6. Jika kode 3 adalah manager, income 1 hari = Rp. 300.000
		7. Total Income = jumlah kehadiran * Income Jabatan
		8. Munculkan pesan "gaji karyawan anda adalah" sesuai Total income
	*/
	
	int i, hadir, tot_income;
	string nama[3];
	int jabatan[3];
	
	cout<<"Program Payroll Sederhana"<<endl;
	cout<<"==============================="<<endl;
	cout<<"Silahkan Input Jumlah Kehadiran : "<<endl;
	cin>>hadir;
	
	cout<<"## Silahkan Input Nama Karyawan : "<<endl;
	for(i =0; i<3; i++){
		cin>>nama[i];	
	}
	
	cout<<"## Silahkan Input Kode Jabatan : "<<endl;
	for(i =0; i<3; i++){
		cin>>jabatan[i];	
	}
		
	cout<<"============  HASIL PERHITUNGAN  ================"<<endl;
	
	for(i=0; i<3; i++){
		if(jabatan[i] == 1){
		tot_income = hadir * 100000;
		cout<<"Gaji Staff "<< nama[i]<< " : " <<tot_income<<endl;
		}else if(jabatan[i] == 2){
			tot_income = hadir * 200000;
			cout<<"Gaji SPV "<< nama[i]<< " : "<<tot_income<<endl;
		}else if(jabatan[i] == 3){
			tot_income = hadir * 300000;
			cout<<"Gaji Manager "<<  nama[i]<< " : " <<tot_income<<endl;
		}else{
			printf("Anda tidak punya gaji");
		}	
	}
	
	return 0;
}
