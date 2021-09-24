#include <iostream>
using namespace std;
int main ()
{
	double x,y;
	
	cout << "PROGRAM MENGHITUNG FUNGSI (y)" << endl;
	cout << "-------------------------" << endl;
	cout << "| y = (2x^2 + 5x - 8)/2 |" << endl;
	cout << "-------------------------" << endl;
	cout << "\nMasukkan nilai X : ";
	cin >> x;
	y = (2 * (x*x) + 5*x - 8)/2;
	cout << "\nNilai y adalah : " << endl;
	cout << y;
	
	
	return 0;
}
