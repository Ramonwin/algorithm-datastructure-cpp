#include <iostream> // untuk bahasa C++
using namespace std;

int main(){
	//cara ke-1 input statis hardcode
	int angka = 10;
	cout <<"Angka yang di input adalah : " << angka <<endl;
	
	//cara ke-2 input dinamis
	int nilai;
	cout <<"Masukan Nilai :";
	cin >> nilai;
	
	cout<< "Nilai yang di input adalah : " << nilai <<endl;
	
	//melihat size dari tipe data
   cout << "Size of char : " << sizeof(char) << endl;
   cout << "Size of int : " << sizeof(int) << endl;
   cout << "Size of short int : " << sizeof(short int) << endl;
   cout << "Size of long int : " << sizeof(long int) << endl;
   cout << "Size of float : " << sizeof(float) << endl;
   cout << "Size of double : " << sizeof(double) << endl;
   
    cout << "Tipe Data Int" << endl;
	// sizeof digunakan untuk melihat ukuran tipe data
  	cout << "Size " << sizeof(int) << " byte." << endl;
	// INT_MIN dan INT_MAX digunakan jakauan terkecil/terbesar untuk INT
  	cout << "Range : " << INT_MIN;
  	cout << " s/d " << INT_MAX << endl;

	return 0;
}
