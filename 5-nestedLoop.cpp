#include <iostream>
using namespace std;

/*
	NESTED LOOP
	
	Di dalam blok perulangan ada yang disebut dengan nested loop atau perulangan bersarang
	atau perulangan didalam perulangan
*/

int main(){
	//loop untuk baris
    for(int i = 0; i < 10; i++){
    	// loop untuk kolom
        for(int j = 0; j < 10; j++){
        	// Cetak pasangan baris dan kolom
            cout<<"Perulangan ke : " << i << "," << j <<endl;;
        }
    }

    return 0;
}


