#include <iostream>
using namespace std;

int main() {
	// Perulangan Bersarang (Nested Loop)
	// deret bintang segitiga siku siku
	
    int n;

    cout << "Masukkan jumlah baris: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
