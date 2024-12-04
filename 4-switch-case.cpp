#include <iostream> // untuk bahasa C++
using namespace std;

int main(){
	// Switch Case
	
	int nilai;
	cout<<"Masukkan Nilai :";
	cin>>nilai;
	
	switch(nilai){
		case 100 :
			cout << "Grade A" <<endl;
			break; // fungsi break untuk menghentikan eksekusi lebih lanjut dari statement
		case 80 :
			cout << "Grade B" <<endl;
			break;
		case 70 :
			cout << "Grade C" <<endl;
			break;
		default :
			cout << "REMEDIAL" <<endl;
			break;
	}	
	return 0;
}
