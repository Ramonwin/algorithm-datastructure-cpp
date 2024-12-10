#include <iostream>
using namespace std;
int main(){
	 // array = type data yg bisa menyimpan sekumpulan nilai
	 // bentuk array ada 3: 1 dimensi, 2 dimensi, 3 dimensi
	 // contoh array penyimpanan baju dalam lemari
	 // int umur1;
	 //	int umur2;
	 //	int umur3;
	 //	int umur1000;
	
	/*cara ke-1 memberi nilai statis*/
	int umur[5]= {20,25,30,35,40}; 
	int i;
	
	for(i=0;i<5;i++){
		cout<<"Usianya adalah :" << umur[i] <<endl;
	}
	
	cout<<"======================="<<endl;
	
	string buah[3]= {"semangka","nanas","jeruk"};
	int x;
	for(x=0; x<3; x++){
		cout<<buah[x]<<endl;
	}
	
	// membuat array
    string contact[] = {"Ami", "Ayu", "Budi", "Agus", "Mila"};

    //  mengambil banyaknya isi array
    int length = sizeof(contact) / sizeof(*contact);
    //int length = sizeof(contact) / sizeof(contact[0]);

    cout<<"Banyaknya isi array nilai: "<< length <<endl;

	/*cara ke-2 memberi nilai dinamis seusai inputan*/
	int nilai[5];
	int j;
	
	cout<<"======================="<<endl;
	cout<<"Silahkan Input Kumpulan Nilai :"<<endl;
	
	for(j=0;j<5;j++){
		cin>>nilai[j];
	}
	cout<<"==========OUTPUT==============="<<endl;
	
	for(j=0;j<5;j++){ 
		cout<<"Nilainya : " << nilai[j] <<endl;
	}
	return 0;
}
