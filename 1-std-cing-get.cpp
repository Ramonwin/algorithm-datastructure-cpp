#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Masukkan karakter pertama: ";
    cin >> ch;        // Membaca satu karakter
    cin.get();          // Membaca karakter '\n' dari buffer
    cout << "Masukkan karakter kedua: ";
    ch = cin.get();     // Membaca karakter berikutnya (termasuk spasi atau newline)
    cout << "Karakter kedua adalah: " << ch << endl;
    return 0;
}
