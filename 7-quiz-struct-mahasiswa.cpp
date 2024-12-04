#include <iostream>
#include <string>
using namespace std;
/*
	Soal:
	1. Buat sebuah struct bernama Mahasiswa yang memiliki atribut:
		a. Nama (string)
		b. NIM (string)
		c. Nilai (float)
		
	2. Implementasikan program untuk:
		a. Menerima data 3 mahasiswa.
		b. Menampilkan data mahasiswa dengan nilai tertinggi.
*/


// Definisi struct Mahasiswa
struct Mahasiswa {
    string nama;
    string nim;
    float nilai;
};

int main() {
    // Array untuk menyimpan data 3 mahasiswa
    Mahasiswa mahasiswa[3];
    
    // Input data mahasiswa
    cout << "Masukkan data 3 mahasiswa:\n";
    for (int i = 0; i < 3; ++i) {
        cout << "Mahasiswa " << i + 1 << ":\n";
        cout << "Nama: ";
        cin.ignore(); // Membersihkan buffer input
        getline(cin, mahasiswa[i].nama);
        cout << "NIM: ";
        cin >> mahasiswa[i].nim;
        cout << "Nilai: ";
        cin >> mahasiswa[i].nilai;
    }

    // Mencari mahasiswa dengan nilai tertinggi
    int indeksTertinggi = 0;
    for (int i = 1; i < 3; ++i) {
        if (mahasiswa[i].nilai > mahasiswa[indeksTertinggi].nilai) {
            indeksTertinggi = i;
        }
    }

    // Menampilkan data mahasiswa dengan nilai tertinggi
    cout << "\n Mahasiswa dengan nilai tertinggi:\n";
    cout << "Nama: " << mahasiswa[indeksTertinggi].nama << endl;
    cout << "NIM: " << mahasiswa[indeksTertinggi].nim << endl;
    cout << "Nilai: " << mahasiswa[indeksTertinggi].nilai << endl;

    return 0;
}

