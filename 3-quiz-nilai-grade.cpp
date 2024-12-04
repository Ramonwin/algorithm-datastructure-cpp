#include <iostream> // untuk bahasa C++
using namespace std;

int main(){
	// Ketentuan :
	// Grade A = 81-100,
	// Grade B = 70-79,
	// Grade C = 60-69,
	// Grade D = 50-59,
	// Grade E = <50
	
	
	int nilai;
	cout <<"masukan nilai :" <<endl;
	
	cin >> nilai;
	
	if(nilai >= 81){
		cout << "Grade A";
	}else if(nilai >= 70){
		cout << "Grade B";
	}else if(nilai >= 60){
		cout << "Grade C";
	}else if(nilai >= 50){
		cout << "Grade D";
	}else{
		cout << "Grade E";
	}
	
	return 0;
}
