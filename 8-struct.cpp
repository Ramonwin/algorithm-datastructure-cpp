#include <iostream>
using namespace std;

/*
	Structure atau struct adalah kumpulan dari beberapa variabel
	dengan beragam tipe data yang dibungkus dalam satu variabel
	
	* Records kalau di bahasa Pascal;
	* Dictionary kalau di bahasa Python;
	* Asosiatif Array kalau di bahasa PHP;
	* Object kalau di bahasa Javascript.

*/

// membuat struct
struct Mahasiswa {
    string nama;
    string alamat;
    int usia;
};

int main(){

    // menggunakan struct
    Mahasiswa mhs1;

    // mengisi nilai ke struct cara ke-1
    mhs1.nama = "Sarah";
    mhs1.alamat = "Bandung";
    mhs1.usia = 22;

 	// mengisi nilai ke struct cara ke-2
    Mahasiswa mhs2 = {"Erik", "Jakarta", 23};

    // mencetak isi struct
    cout << "## Mahasiswa 1 ##\n";
    cout << "Nama: " << mhs1.nama << endl;
    cout << "Alamat: " << mhs1.alamat << endl;
    cout << "Umur: " << mhs1.usia << endl;

	cout << "=========================="<<endl;
    cout << "## Mahasiswa 2 ##\n";
    cout << "Nama: " << mhs2.nama << endl;
    cout << "Alamat: " << mhs2.alamat << endl;
    cout << "Umur: " << mhs2.usia << endl;

    return 0;
}
