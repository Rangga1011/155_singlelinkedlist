#include <iostream>
using namespace std;

struct Node {
	int noMhs;
	string name;
	Node* next;
};

Node* start = NULL;

void addNode() {
	int nim;
	string nama;
	Node* nodeBaru = new Node();
	cout << "Masukan NIM: ";
	cin >> nim;
	cout << "Masukan Nama: ";
	cin >> nama;
}

