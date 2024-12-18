#include <iostream>
#include <string>  // library operasi string
#include <iomanip> // Untuk std::setw
using namespace std;
// Cara ke-2 INPUT STRUCT secara dinamis sesuai inputan user
struct Buah {
	string nama;
	string rasa;
	float berat;
};

int main(){
	Buah apel [2]; // menggunakan struct dan menyimpan 2 data didalam array
	
	cout<<"Masukan 2 data buah-buahan \n";
	
	for(int i=0; i<2; i++){
		cin.ignore(); // Membersihkan buffer input
		cout<<"========================== \n";
		cout<<"Buah ke- :" << i + 1 <<endl;
		cout<<"Nama : ";
		getline(cin,apel[i].nama); // untuk membaca satu baris input dari user, termasuk spasi
		cout<<"Rasa : ";
		getline(cin,apel[i].rasa);
		cout<<"berat : ";
		cin>>apel[i].berat;
	}
	
	cout << string(40, '=') << endl; // Membuat garis pemisah
	cout <<"NAMA"<<setw(20)<<"| RASA"<<setw(12)<<"| BERAT "<<endl;
	cout << string(40, '=') << endl;
	
	for(int i=0; i<2; i++){
		cout<<apel[i].nama<<setw(12)
			<<apel[i].rasa<<setw(10)
			<<apel[i].berat<<endl;
	}
	
	// cin.get(); membaca karakter dari buffer
	// cin.ignore(); mengabaikan karakter di buffer
	// cin.get(); sering digunakan untuk mengatasi masalah input data yang melibatkan karakter newline ('\n')
	// yang tertinggal di dalam buffer input
	// gunakan cin.ignore(); kemudian getline(cin); atau gunakan cin.get(); diawal
	return 0;
}


