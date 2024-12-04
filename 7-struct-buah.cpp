#include <iostream>
#include <string>

using namespace std;

//string warna1;
//float berat1;
//int harga1;
//string rasa1;


//string warna2;
//float berat2;
//int harga2;
//string rasa2;

struct buah {
	string warna;
	float berat;
	int harga;
	string rasa;
};

int main(){
	buah apel;
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
	
	// mencetak isi struct cara ke-2
//	int i;
//	for (i=0;i<4;i++){
//		cout<<jeruk[i]<<" : " <<endl;
//	}
	
	return 0;
}

