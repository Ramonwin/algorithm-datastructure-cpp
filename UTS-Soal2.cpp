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
			c. Jika kode selain 1 & 2, tidak ada bonus, bonus = 0	
		4. Total gaji = Gapok + Bonus
		5. Jika Total gaji melebihi 10jt maka dikenakan pph21 sebesar 2%
		6. Tampilkan Output : Nama karyawan & Total Gaji & Pajak (berurutan)
	*/
	
	int i, gapok, bonus, total_gaji, pajak;
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
			total_gaji = gapok + bonus;
			if(total_gaji > 10000000){
				pajak = 0.02 * total_gaji;
				cout<<nama[i]<<" - Total Gaji : "<< total_gaji <<" - Pajak PPH21 (2%) : "<<pajak<<endl;	
			}else{
				cout<<nama[i]<<" - Total Gaji : "<< total_gaji <<endl;
			}
		}else if (status[i]==2){
			bonus = 1 * gapok;
			total_gaji = gapok + bonus;
			if(total_gaji > 10000000){
				pajak = 0.02 * total_gaji;
				cout<<nama[i]<<" - Total Gaji : "<< total_gaji <<" - Pajak PPH21 (2%) : "<<pajak<<endl;	
			}else{
				cout<<nama[i]<<" - Total Gaji : "<< total_gaji <<endl;
			}
		}else{
			bonus = 0;
			total_gaji = gapok + bonus;
			if(total_gaji > 10000000){
				pajak = 0.02 * total_gaji;
				cout<<nama[i]<<" - Total Gaji : "<< total_gaji <<" - Pajak PPH21 (2%) : "<<pajak<<endl;	
			}else{
				cout<<nama[i]<<" - Total Gaji : "<< total_gaji <<endl;
			}
		}
	}
	return 0;
}
