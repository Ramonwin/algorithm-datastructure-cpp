/*
## Linked list di C++ adalah salah satu struktur data yang digunakan untuk menyimpan elemen secara berurutan.
 					Berbeda dengan array, elemen dalam linked list tidak disimpan dalam lokasi memori yang berurutan.
				    Sebaliknya, setiap elemen (disebut node) memiliki dua komponen utama:

	1. Data: Menyimpan nilai atau data.
	2. Pointer: Menunjuk ke node berikutnya dalam daftar.
	
## Jenis Linked List
	1. Singly Linked List: Setiap node hanya memiliki satu pointer ke node berikutnya.
	2. Doubly Linked List: Setiap node memiliki pointer ke node berikutnya dan sebelumnya.
	3. Circular Linked List: Node terakhir menunjuk kembali ke node pertama, membentuk lingkaran.
	
## Keuntungan Linked List
	1. Ukurannya dinamis (dapat bertambah atau berkurang sesuai kebutuhan).
	2. Operasi penyisipan dan penghapusan elemen lebih efisien dibandingkan array, khususnya jika elemen sering dimodifikasi.

## Kelemahan Linked List
	1. Akses elemen lebih lambat karena harus melewati node satu per satu.
	2. Memerlukan memori tambahan untuk menyimpan pointer.
	
*/

#include <iostream>
using namespace std;

// Struktur Node
struct Node {
    int data;
    Node* next;
};

// Fungsi untuk menambahkan node di awal
void insertAtHead(Node*& head, int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = head;
    head = newNode;
}

// Fungsi untuk menampilkan linked list
void display(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    Node* head = nullptr; // Inisialisasi head of the list
    
    // Menambahkan elemen ke linked list
    insertAtHead(head, 10);
    insertAtHead(head, 20);
    insertAtHead(head, 30);

    // menampilkan list
    cout << "Linked List: ";
    display(head);

    return 0;
}

