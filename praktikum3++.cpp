#include <iostream>

using namespace std;

int main() {
	int n;

	cout << "Masukkan jumlah baris segitiga pascal: ";
	cin >> n;

	int pascal[50][50];

	// Mengisi nilai segitiga pascal
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (j == 0 || j == i) {
				pascal[i][j] = 1;
			}
			else {
				pascal[i][j] = pascal[i - 1][j - 1] + pascal[i - 1][j];
			}
		}
	}

	// Menampilkan bentuk segitiga rapi
	for (int i = 0; i < n; i++) {

		// Spasi di depan untuk membentuk piramida
		for (int s = 0; s < n - i - 1; s++) {
			cout << " ";
		}

		// Menampilkan angka pascal
		for (int j = 0; j <= i; j++) {
			cout << pascal[i][j] << " ";
		}

		cout << endl;
	}

	cout << "\n====================================\n";
	cout << "Nama  : Fidlela Latifa Salsabila\n";
	cout << "NIM   : 25104410059\n";
	cout << "Prodi : Teknik Informatika - 1B\n";
	cout << "====================================\n";

	return 0;
}