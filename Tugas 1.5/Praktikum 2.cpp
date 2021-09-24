#include <iostream>
using namespace std;

int main()
{
	string nama;
		int nilai;

	cout <<"PROGRAM KONVERSI NILAI"<<endl;

	cout <<"Input Data Mahasiswa"<<endl;
	cout <<"Masukan Nama    : "; cin>>nama;
	cout <<"Masukan Nilai   : "; cin>>nilai;
	cout <<endl;
	cout <<"Nama Mahasiswa  : "<<nama<<endl;

	if ((nilai >= 85) && (nilai <=100)) {
		cout <<"Nilai Mahasiswa : A";
	}

	else if ((nilai >= 80) && (nilai <= 84)) {
		cout <<"Nilai Mahasiswa : A-";
	}

	else if ((nilai >= 75) && (nilai <= 79)) {
		cout <<"Nilai Mahasiswa : B+";
	}

	else if ((nilai >= 70) && (nilai <= 74)) {
		cout <<"Nilai Mahasiswa : B";
	}

	else if ((nilai >= 65) && (nilai <= 69)) {
		cout <<"Nilai Mahasiswa : B-";
	}

	else if ((nilai >= 60) && (nilai <= 64)) {
		cout <<"Nilai Mahasiswa : C+";
	}

	else if ((nilai >= 55) && (nilai <= 59)) {
		cout <<"Nilai Mahasiswa : C";
	}
    
	else if ((nilai >= 50) && (nilai <= 54)) {
		cout <<"Nilai Mahasiswa : C-";
	}
    
	else if ((nilai >= 40) && (nilai <= 49)) {
		cout <<"Nilai Mahasiswa : D";
	}
    
	else if (nilai < 40) {
		cout <<"Nilai Mahasiswa : E";
	}


	return 0;	
}
