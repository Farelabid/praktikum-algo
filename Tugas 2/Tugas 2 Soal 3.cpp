#include <iostream>
using namespace std;
int main ()
{
	int pilihan;
	
	cout << "PROGRAM PENGECEKAN KATEGORI ZONASI COVID\n";
	cout << "==========================================================================\n";
	cout << endl;
	cout << "Mohon pilih salah satu dari kondisi berikut:\n";
	cout << endl;
	
	cout << "(1) Terdapat kasus positif Covid-19 pada survey minggu pertama\n"
		 << "    dan terdapat kenaikan kasus pada minggu kedua,\n"
		 << "    diiringi dengan adanya kasus kematian akibat Covid-19\n"
		 << "    dan terdapat ODP";
	cout << endl;
	cout << endl;
	cout << "(2) Terdapat kasus positif Covid-19 pada survey minggu pertama\n"
		 << "    dan terdapat kenaikan kasus pada minggu kedua,\n"
		 << "    Tidak ada kasus kematian akibat Covid-19 namun terdapat ODP";
	cout << endl;
	cout << endl;
	cout << "(3) Tidak ada kasus positif Covid-19 pada survey minggu pertama dan kedua\n"
		 << "    Tidak ada kasus kematian akibat Covid-19 namun terdapat ODP";
	cout << endl;
	cout << endl;
	cout << "(4) Tidak ada kasus positif Covid-19 pada survey minggu pertama dan kedua\n"
		 << "    Tidak ada kasus kematian akibat Covid-19 dan tidak ada ODP";
	cout << endl;
	cout << endl;
	cout << "==========================================================================\n";
	cout << "\nPilihan Anda (1/2/3/4):";
	cin >> pilihan;
	cout << endl;
	
	switch (pilihan) {
		case 1 :
			cout << "Bahaya!!! Daerah anda dalam ZONA HITAM";
			break;
		case 2 :
			cout << "Bahaya!! Daerah anda dalam ZONA MERAH";
			break;
		case 3 :
			cout << "Bahaya! Daerah anda dalam ZONA ORANYE";
			break;
		case 4 :
			cout << "Daerah anda dalam ZONA HIJAU";
			break;
		default :
			cout << "Program Invalid, Mohon isi sesuai ketentuan yang berlaku";
			break;
			
	}
	
	cout << "\nTetap Jaga Kesehatan dan Patuhi Prokes";
	
	return 0;
}
