#include <iostream>
#include <iomanip> // Untuk std::setw
using namespace std;

/*
	LATIHAN
	1. Buatlah fungsi sederhana yg bisa menampilkan pesan "Mahasiswa Ranking ke 1 sd 100"
	2. Untuk Mahasiswa Ranking 1 sd 50, beri keterangan "Selamat Anda Lulus"
*/

int i;

void mahasiswa(int a){
    cout << "Mahasiswa Ranking ke - " << a <<endl;
}

int main(){
	for(i=1; i<=100; i++){
		if(i<=50){
			cout<<" Selamat Anda Lulus  ";
			mahasiswa(i);
			cout << string(50, '=') << endl; // Membuat garis pemisah
		}else{
			mahasiswa(i);	
		}		
	}

	cin.get();
    return 0;
}



