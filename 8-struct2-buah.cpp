#include <iostream>
#include <string>
using namespace std;

struct buah {
	string warna;
	float berat;
	int harga;
	string rasa;
};

int main(){
	buah apel; // menggunakan atau memanggil struct
	
	buah jeruk ={"Orange",1.50f,20000,"asem"};
	
	apel.warna="merah";
	apel.berat =2.5f;
	apel.harga = 50000;
	apel.rasa="manis";
		
	// mencetak isi struct cara ke-1
	cout << apel.warna <<endl;
	cout << apel.berat <<endl;
	cout << apel.harga <<endl;
	cout << apel.rasa <<endl;
	
	cout<<"======================="<<endl;
	
	cout << jeruk.warna <<endl;
	cout << jeruk.berat <<endl;
	cout << jeruk.harga <<endl;
	cout << jeruk.rasa <<endl;
		
	return 0;
}

