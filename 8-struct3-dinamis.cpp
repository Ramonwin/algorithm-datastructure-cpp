#include <iostream>
#include <string>

using namespace std;

// Cara ke-2 input struct DINAMIS
struct Mahasiswa {
    int id;
    string nama;
    string jurusan;
    float ipk;
};

// Fungsi untuk menampilkan data mahasiswa
void tampilkanMahasiswa(const Mahasiswa& m) {
    cout << "ID Mahasiswa : " << m.id << endl;
    cout << "Nama         : " << m.nama << endl;
    cout << "Jurusan      : " << m.jurusan << endl;
    cout << "IPK          : " << m.ipk << endl;
}

int main() {
    // Deklarasi variabel struct
    Mahasiswa m1;

    // Input data mahasiswa
    cout << "Masukkan ID Mahasiswa: ";
    cin >> m1.id;
    cin.ignore(); // Membersihkan buffer
    cout << "Masukkan Nama Mahasiswa: ";
    getline(cin, m1.nama);
    cout << "Masukkan Jurusan Mahasiswa: ";
    getline(cin, m1.jurusan);
    cout << "Masukkan IPK Mahasiswa: ";
    cin >> m1.ipk;

    // Menampilkan data mahasiswa
    cout << "\n Data Mahasiswa:"<<endl;
    tampilkanMahasiswa(m1);

    return 0;
}
