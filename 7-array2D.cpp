#include <iostream>
using namespace std;
/*
	ARRAY 2D
	
	Array 2 dimensi di C++ adalah struktur data yang memungkinkan untuk menyimpan data
	dalam bentuk tabel atau matriks, yaitu baris dan kolom
*/

int main() {
    int matriks[2][3] = {
        {1, 2, 3}, 
        {4, 5, 6}
    };
    
//  cout << matriks[0][0]; 
//	cout << matriks[0][1];
//	cout << matriks[0][2] <<endl;
//	cout << matriks[1][0];
//	cout << matriks[1][1];
//	cout << matriks[1][2];
	
	cout<<"Tampilkan Nilai Matriks Menggunakan Nested Loop"<<endl;
	cout<<"==============================================="<<endl;
	for (int i = 0; i < 2; i++) { // Loop untuk baris
        for (int j = 0; j < 3; j++) { // Loop untuk kolom
            cout << matriks[i][j] << " ";
        }
        cout << endl; // Pindah ke baris berikutnya
    }

    return 0;
 }   
 




