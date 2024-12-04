#include <iostream>
using namespace std;

int main(){
	// Buat program sederhana untuk payroll + bonus akhir tahun
	/*
		1. Input nilai gaji pokok
		2. Input 5 nama karyawan
		3. Input 5 Status Karyawan :
			a. Jika kode 1 adalah karyawan tetap, bonus = 2 x Gaji Pokok
			b. Jika kode 2 adalah karyawan kontrak, bonus = 1 x Gaji Pokok		
		4. Total gaji = Gapok + Bonus
		5. Tampilkan Output : Nama karyawan & Total Gaji (berurutan)
	*/
	
	int i, gapok, bonus, total_gaji;
	int status[5];
	string nama[5];
	
	cout<<"Program Payroll Sederhana"<<endl;
	cout<<"==============================="<<endl;
	cout<<"## Silahkan Input gaji pokok : "<<endl;
	cin>>gapok;
	
	cout<<"## Silahkan Input 5 Nama Karyawan : "<<endl;
	for(i=0;i<5;i++){
		cin>>nama[i];
	}
	
	cout<<"## Silahkan Input 5 Status Karyawan : "<<endl;
	for(i=0;i<5;i++){
		cin>>status[i];
	}
	
	cout<<"=========== HASIL PERHITUNGAN ==============="<<endl;
	for(i=0;i<5;i++){
		if(status[i] == 1){
			bonus = 2 * gapok;
			cout<<nama[i]<<" - Total Gaji :"<< gapok + bonus <<endl;
		}else{
			bonus = 1 * gapok;
			cout<<nama[i]<<" - Total Gaji :"<< gapok + bonus <<endl;
		}
	}
	return 0;
}
