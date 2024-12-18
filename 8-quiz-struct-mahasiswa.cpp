#include <iostream>
#include <string>
using namespace std;
/*
	Soal:
	1. Buat sebuah struct bernama Mahasiswa yang memiliki atribut:
		a. Nama (string)
		b. NIM (string)
		c. IPK (float)
		
	2. Implementasikan program untuk:
		a. Menerima data 3 mahasiswa.
		b. Menampilkan data mahasiswa dengan nilai tertinggi.
*/

// Definisi struct Mahasiswa
struct Mahasiswa {
    string nama;
    int nim;
    float ipk;
};

int main() {
    // Array untuk menyimpan data 3 mahasiswa
    Mahasiswa mahasiswa[3];
    
    // Input data mahasiswa
    cout << "Masukkan data 3 mahasiswa:\n";
    
    for (int i = 0; i < 3; i++) {
    	cout <<"========================== \n";
        cout << "Mahasiswa ke- " << i + 1 << ":\n";
        cout << "Nama: ";
        cin.ignore(); // Membersihkan buffer input
        getline(cin, mahasiswa[i].nama); // untuk membaca satu baris input dari user, termasuk spasi
        cout << "NIM: ";
        cin >> mahasiswa[i].nim;
        cout << "IPK: ";
        cin >> mahasiswa[i].ipk;
    }

    // Mencari mahasiswa dengan nilai tertinggi
    int indeksTertinggi = 0;
    for (int i = 0; i < 3; i++) {
        if (mahasiswa[i].ipk > mahasiswa[indeksTertinggi].ipk) {
            indeksTertinggi = i;
        }
    }

    // Menampilkan data mahasiswa dengan nilai tertinggi
    cout <<"========================== \n";
    cout << "### Mahasiswa dengan nilai tertinggi adalah:\n";
    cout << "Nama: " << mahasiswa[indeksTertinggi].nama << endl;
    cout << "NIM: " << mahasiswa[indeksTertinggi].nim << endl;
    cout << "Nilai: " << mahasiswa[indeksTertinggi].ipk << endl;

	// cin.get(); membaca karakter dari buffer
	// cin.ignore(); mengabaikan karakter di buffer
	// cin.get(); sering digunakan untuk mengatasi masalah input data yang melibatkan karakter newline ('\n')
	// yang tertinggal di dalam buffer input
	// gunakan cin.ignore(); kemudian getline(cin); atau gunakan cin.get(); diawal
    return 0;
}

