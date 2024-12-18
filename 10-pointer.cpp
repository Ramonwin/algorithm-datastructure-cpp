#include <iostream>
using namespace std;

int main() {
    int x = 10;    // Variabel biasa
    int *p = &x;   // Pointer menyimpan alamat dari x

    cout << "Nilai x: " << x << endl;
    cout << "Alamat x: " << &x << endl;
    cout << "Alamat yang disimpan di pointer p: " << p << endl;
    cout << "Nilai yang ditunjuk oleh pointer p: " << *p << endl;

    // Mengubah nilai x melalui pointer
    *p = 150;
    cout << "Nilai x setelah diubah melalui pointer: " << x << endl;

    return 0;
}



