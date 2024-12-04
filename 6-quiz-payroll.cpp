#include <iostream>
using namespace std;

int main(){
	// Buat program sederhana untuk payroll
	/*
		1. Input Jumlah Kehadiran dalam 1 bulan
		2. Input Jabatan :
		3. Jika kode 1 adalah staff, income 1 hari = Rp. 100.000
		4. Jika kode 2 adalah spv, income 1 hari = Rp. 200.000
		5. Jika kode 3 adalah manager, income 1 hari = Rp. 300.000
		6. Total Income = jumlah kehadiran * Income Jabatan
		7. Munculkan pesan "gaji anda adalah" sesuai Total income
	*/
	
	int hadir, jabatan,tot_income;
	
	cout<<"Program Payroll Sederhana"<<endl;
	cout<<"==============================="<<endl;
	cout<<"Silahkan Input Jumlah Kehadiran : "<<endl;
	
	cin>>hadir;
	
	cout<<"Silahkan Input Kode Jabatan : "<<endl;
	cin>>jabatan;
	
	cout<<"==============================="<<endl;
	
	if(jabatan == 1){
		tot_income = hadir * 100000;
		cout<<"Gaji Staff Anda adalah "<<tot_income<<endl;
	}else if(jabatan == 2){
		tot_income = hadir * 200000;
		cout<<"Gaji SPV Anda adalah "<<tot_income<<endl;
	}else if(jabatan == 3){
		tot_income = hadir * 300000;
		cout<<"Gaji Manager Anda adalah "<<tot_income<<endl;
	}else{
		printf("Anda tidak punya gaji");
	}
	
	return 0;
}
