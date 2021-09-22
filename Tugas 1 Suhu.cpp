#include <iostream>
using namespace std;
int main ()
{
	double C,Fahr,Kelv,Re;
	
	cout << "PROGRAM KONVERSI SUHU" << endl;
	cout << "Masukkan nilai Celcius : ";
	cin >> C;
	
	Fahr = (9/5*C)+32;
	cout << "Nilai dalam Fahrenheit : " << Fahr << " F" << endl;
	
	Kelv = 273 + C;
	cout << "Nilai dalam Kelvin : " << Kelv << " K" << endl;
	
	Re = (4/9*C)+32;
	cout << "Nilai dalam Reamur : " << Re << " R" << endl;
	
	return 0;
}
