#include <iostream> // untuk bahasa C++
using namespace std;

int main()
{
	// Ada enam jenis kelompok operator dalam pemrograman C++ :
	// 1. Operator Aritmatika;
	// 2. Operator Penugasan;
	// 3. Operator Pembanding;
	// 4. Operator Logika;
	// 5. Operator Bitwise;
	// 6. dan Operator Lain-lain.
	
	int a = 6;
	int b = 4;
	int hasil;
	
	// 1. Operator Aritmatika;
	// tambah
	hasil = a + b;
	cout << "Hasil Penjumlahan :" << hasil << endl;

	// kurang
	hasil = a - b;
	cout << "Hasil Pengurangan :" << hasil << endl;

	// kali
	hasil = a * b;
	cout << "Hasil Perkalian :" << hasil << endl;

	// bagi
	float c = 6;
	float d = 4;
	cout << "Hasil Pembagian :" << (c / d) << endl;

	// modulus (sisa bagi)
	hasil = a % b;
	cout << "Hasil Modulus :" << hasil << endl;
	
	cout << "=============================================================="<<endl;
	cout << "=============================================================="<<endl;
	
	
	// 2. Operator Penugasan;
    // pengisian sekaligus penambahan
    b += a; // ini sama seperti b = b + a
    cout << "Hasil b += a adalah " << b << endl;

    // pengisian sekaligus pengurangan
    b -= a; // ini sama seperti b = b - a
    cout << "Hasil b -= a adalah " << b << endl;

    // pengisian sekaligus perkalian
    b *= a; // ini sama seperti b = b * a
    cout << "Hasil b *= a adalah " << b << endl;

    // pengisian sekaligus pembagian
    b /= a; // ini sama seperti b = b / a
    cout << "Hasil b /= a adalah " << b << endl;

    // pengisian sekaligus penambahan
    b %= a; // ini sama seperti b = b % a
    cout << "Hasil b %= a adalah " << b << endl;
    
    cout << "=============================================================="<<endl;
	cout << "=============================================================="<<endl;
    
	// 3. Operator Pembanding;
	cout << (a > b) << endl;
	cout << (a < b) << endl;
	cout << (a == b) << endl;
	cout << (a != b) << endl;

	// logika And, or, Not
	cout << (a && b) << endl;
	cout << (a || b) << endl;

	return 0;
}
