#include <iostream>
using namespace std;
/*
	FUNGSI & PROSEDUR
	1.  fungsi atau prosedur sering digunakan untuk membungkus program menjadi bagian-bagian kecil.
		Tujuannya agar program tidak menumpuk pada fungsi main() saja
		
		a. Fungsi adalah sub-program yang bisa digunakan kembali baik di dalam program itu sendiri, maupun di program yang lain.
		b. Fungsi dapat menerima input dan menghasilkan output
		c. Fungsi bisa mengembalikan nilai ataupun tidak mengembalikan nilai
		
	2. Prosedur adalah Fungsi yang tidak menerima input (parameter)
*/

// membuat fungsi hallo(), tanpa parameter,  fungsi ini tidak mengembalikan nilai
void hallo(){
    cout << "Hallo Selamat Datang Kelas SI-C \n";
}

// membuat fungsi hallo_semua(), dengan input parameter
void hallo_semua(string kelas){
 	cout << "Hallo Semua mahasiswa : "<< kelas <<endl;
 }
 
// Fungsi yang mengembalikan nilai
int tambah(int a, int b){
	int hasil = a + b;
	return hasil;
}

float bagi(int a, int b){
    float hasil = (float)a / (float)b;
    return hasil;
}

int main(){
    // memanggil fungsi hallo()
    hallo();
    hallo_semua("SI-A");
    hallo_semua("SI-B");
    hallo_semua("SI-C");

	// memangil fungsi yang menggunakan parameter & mengembalikan nilai
	cout <<"hasil penjumlahan 5 + 10 adalah : " << tambah(5,10)<<endl;
	cout <<"hasil pembagian 6 bagi 2 adalah : " << bagi(6,2)<<endl;
	
	cin.get();
    return 0;
}

