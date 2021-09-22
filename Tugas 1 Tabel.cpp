#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
	string nama,nim,plug;
	
	//Input Data
	cout << "Masukkan :" << "\n";
	cout << "Nama		: ";
	getline (cin,nama);
	cout << "NIM		: ";
	getline (cin,nim);
	cout << "Plug		: ";
	getline (cin,plug);
	
	//Output Data
	cout << endl << "Inilah data anda : " << "\n";
	cout << "Nama		: " << nama << "\n";
	cout << "NIM		: " << nim << "\n";
	cout << "Plug		: " << plug << "\n";
	
	//Tabel
	cout << endl << "Dalam bentuk tabel : " << "\n";
	cout << setfill('=') << setw(50) << "=" << "\n";
	cout << setfill(' ')
		 << "NIM" << setw(nim.length())
		 << "|" << setw(6) << "Nama" << setw(nama.length())
		 << "|" << setw(6) << "Plug" << setw(plug.length()) << "\n";
	cout << setfill('=') << setw(50) << "=" << "\n";
	//Bawah Tabel
	cout << setfill(' ')
		 << nim << setw(3)
		 << "|" << setw(nama.length() + 2) << nama << setw(4) << "|"
		 << setw(plug.length() + 2) << plug << setw(4) << "\n";
	cout << setfill('=') << setw(50) << "=" << "\n";
	
	
	return 0;
}
