#include <iostream>
using namespace std;
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
    mhs1.nama = "Septi";
    mhs1.alamat = "Bandung";
    mhs1.usia = 22;

 	// mengisi nilai ke struct cara ke-2
    Mahasiswa mhs2 = {"Fariz", "Jakarta", 23};

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


