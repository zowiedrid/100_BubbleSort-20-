#include <iostream>
using namespace std;

int a[10]; // jumlah kapasitas array
int n; // jumlah data

void input() {
	while (true) {
		cout << "Masukkan jumlah data: "; //output ke layar
		cin >> n; //input dari user
		if (n <= 10) { //jika n kurang dari sama dengan 10
			break; //keluar dari loop
		}
		else {
			cout << "Jumlah data tidak boleh lebih dari 10" << endl; //output ke layar
		}
	}

	cout << endl; //output ke layar
	cout << "=============================" << endl; //output ke layar
	cout << "Masukkan data: " << endl; //output ke layar
	cout << "=============================" << endl; //output ke layar

	for (int i = 0; i < n; i++) { //looping dengan i dimulai dari 0 hingga n-1
		cout << "Data ke-" << i + 1 << ": "; //output ke layar
		cin >> a[i]; //input dari user
	}
}

void bubbleSortArray() {
	int pass = 1; //inisialisasi pass dengan 1

	do {
		for (int j = 0; j <= n - 1 - pass; j++) { //looping dengan j dimulai dari 0 hingga n-1-pass
			if (a[j] > a[j + 1]) { //jika a[j] lebih besar dari a[j+1]
				int temp = a[j]; //simpan a[j] ke dalam variabel temp
				a[j] = a[j + 1]; //a[j] diisi dengan a[j+1]
				a[j + 1] = temp; //a[j+1] diisi dengan temp
			}
		}
		pass = pass + 1; //pass ditambah 1

		cout << "\nPass ke-" << pass - 1 << ": "; //output ke layar
		for (int i = 0; i < n; i++) { //looping dengan i dimulai dari 0 hingga n-1
			cout << a[i] << " "; //output ke layar
		}
		cout << endl; //output ke layar

	} while (pass <= n - 1); //looping jika pass kurang dari sama dengan n-1
}

void display() {
	cout << endl; //output ke layar
	cout << "=============================" << endl; //output ke layar
	cout << "Data setelah diurutkan: " << endl; //output ke layar
	cout << "=============================" << endl; //output ke layar
	cout << endl; //output ke layar
	for (int j = 0; j < n; j++) { //looping dengan j dimulai dari 0 hingga n-1
		cout << a[j] << " "; //output ke layar
	}

	cout << endl; //output ke layar
	cout << "=============================" << endl; //output ke layar
	cout << "Jumlah pass: " << n - 1 << endl; //output ke layar
}