#include <iostream> // untuk bahasa C++
using namespace std;

int main(){
	// Conditional / selection / If statement
	// if 1 kondisi,
	// if 2 kondisi atau lebih dan nested if
	
	// if, else if , else
	// ternary If
	// Switch Case
	
	int nilai = 100;
	
	if(nilai == 100){
		cout << "Grade A";
	}else if(nilai == 70){
		cout << "Grade B";
	}else if (nilai == 60){
		cout << "Grade C";
	}else if (nilai == 50){
		cout << "Grade D Remedial";
	}else{
		cout << "Grade E Remedial";
	}
	
	// ternary if adalah ekspresi singkat untuk menulis pernyataan kondisi sederhana dalam satu baris
	cout<<endl;
	cout<< (nilai == 100 ? "Selamat Anda Lulus" : "Maaf Gagal");
	
	
	return 0;
}
