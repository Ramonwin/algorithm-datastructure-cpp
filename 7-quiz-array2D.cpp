#include <iostream>
using namespace std;

/* Buatlah program sederhana untuk menampilkan data mahasiswa
	
	1. Tampilkan nama 5 Mahasiswa meliputi : Npm, Nama, Alamat, Kelas
	2. Gunakan Array 2 Dimensi & Nested Loop

*/

int main() {
	cout <<"Daftar Mahasiswa STIMIK AMIK "<<endl;
    cout <<"============================="<<endl;
    
    
    string mahasiswa[5][4] = {
        {"111111", "Sarah  ", "Bandung","SI-C"},
       	{"222222", "Septi  ", "Jakarta","SI-C"},
       	{"333333", "Okta   ", "Cimahi ","SI-C"},
        {"444444", "Keisya ", "Bogor  ","SI-C"},
        {"555555", "Abghiya", "Bekasi ","SI-C"}
    };
        
    cout <<"NPM   |Nama   |Alamat |Kelas"<<endl;
    cout <<"============================="<<endl;

    for (int i = 0; i < 5; i++) { // Loop untuk baris
        for (int j = 0; j < 4; j++) { // Loop untuk kolom
            cout << mahasiswa[i][j] << " ";
        }
        cout << endl; // Pindah ke baris berikutnya
    }

    return 0;
}

