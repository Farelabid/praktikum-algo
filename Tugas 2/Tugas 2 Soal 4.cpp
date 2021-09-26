#include <iostream>
using namespace std;
int main ()
{
	int kuota_pengajar,kuota_siswa,jml_pengajar,jml_siswa;
	int kategori_pengajar,kategori_siswa;
	long total_kp,total_ks;
	long harga=6000;
	
	cout << "PROGRAM PENGHITUNG ANGGARAN KUOTA PEMERINTAH" << endl;
	cout << "============================================" << endl;
	
	cout << "\nSilahkan Pilih Kategori Pengajar (1/2) :" << endl;
	cout << "\n[1] Pengajar di tingkat Sekolah Dasar hingga Menengah";
	cout << "\n[2] Pengajar di tingkat Pendidikan Tinggi" << endl;
	cout << "\nPilihan anda : ";
	cin >> kategori_pengajar;
	
	if (kategori_pengajar==1) {
		
		kuota_pengajar = 42;
		cout << "Masukkan Jumlah Pengajar :";
		cin >> jml_pengajar;
		total_kp=(kuota_pengajar*jml_pengajar);
		cout << "\nTotal Kuota untuk Pengajar adalah " << total_kp << " GB" << endl;
		cout << "Senilai Rp. " << total_kp*harga << endl;
	
		cout << "\nSilahkan Pilih Kategori Siswa (1-5) :" << endl;
		cout << "\n[1] Siswa PAUD";
		cout << "\n[2] Siswa SD;";
		cout << "\n[3] Siswa SMP";
		cout << "\n[4] Siswa SMA";
		cout << "\n[5] Mahasiswa" << endl;
		cout << "\nPilihan anda : ";
		cin >> kategori_siswa;
	
			if (kategori_siswa==1) {
			kuota_siswa=20;
			cout << "Masukkan Jumlah Siswa : ";
			cin >> jml_siswa;
			total_ks=(kuota_siswa*jml_siswa);
			cout << "\nTotal Kuota untuk Siswa adalah " << total_ks << " GB" << endl;
			cout << "Senilai Rp. " << total_ks*harga << endl;
			cout << "\nJumlah Biaya yang perlu dikeluarkan adalah :\n";
			cout << "Rp. " << (total_kp*harga)+(total_ks*harga) << endl;
	
			} else if (kategori_siswa==2) {
			kuota_siswa=35;
			cout << "Masukkan Jumlah Siswa : ";
			cin >> jml_siswa;
			total_ks=(kuota_siswa*jml_siswa);
			cout << "\nTotal Kuota untuk Siswa adalah " << total_ks << " GB" << endl;
			cout << "Senilai Rp. " << total_ks*harga << endl;
			cout << "\nJumlah Biaya yang perlu dikeluarkan adalah :\n";
			cout << "Rp. " << (total_kp*harga)+(total_ks*harga) << endl;
		
			} else if (kategori_siswa==3) {
			kuota_siswa=35;
			cout << "Masukkan Jumlah Siswa : ";
			cin >> jml_siswa;
			total_ks=(kuota_siswa*jml_siswa);
			cout << "\nTotal Kuota untuk Siswa adalah " << total_ks << " GB" << endl;
			cout << "Senilai Rp. " << total_ks*harga << endl;
			cout << "\nJumlah Biaya yang perlu dikeluarkan adalah :\n";
			cout << "Rp. " << (total_kp*harga)+(total_ks*harga) << endl;
		
			} else if (kategori_siswa==4) {
			kuota_siswa=35;
			cout << "Masukkan Jumlah Siswa : ";
			cin >> jml_siswa;
			total_ks=(kuota_siswa*jml_siswa);	
			cout << "\nTotal Kuota untuk Siswa adalah " << total_ks << " GB" << endl;
			cout << "Senilai Rp. " << total_ks*harga << endl;
			cout << "\nJumlah Biaya yang perlu dikeluarkan adalah :\n";
			cout << "Rp. " << (total_kp*harga)+(total_ks*harga) << endl;
	
			} else if (kategori_siswa==5) {
			kuota_siswa=50;
			cout << "Masukkan Jumlah Mahaiswa : ";
			cin >> jml_siswa;
			total_ks=(kuota_siswa*jml_siswa);
			cout << "\nTotal Kuota untuk Siswa adalah " << total_ks << " GB" << endl;
			cout << "Senilai Rp. " << total_ks*harga << endl;
			cout << "\nJumlah Biaya yang perlu dikeluarkan adalah :\n";
			cout << "Rp. " << (total_kp*harga)+(total_ks*harga) << endl;	
		
			} else {
			cout << "\nMohon pilih kategori Siswa yang tersedia";
	}
	
	cout << endl;
	
	} else if (kategori_pengajar==2) {
		kuota_pengajar = 50;
		cout << "Masukkan Jumlah Pengajar : ";
		cin >> jml_pengajar;
		total_kp=(kuota_pengajar*jml_pengajar);
		cout << "\nTotal Kuota untuk Pengajar adalah " << total_kp << " GB" << endl;
		cout << "Senilai Rp. " << total_kp*harga << endl;
		
		cout << endl;
	
		cout << "\nSilahkan Pilih Kategori Siswa (1-5) :" << endl;
		cout << "\n[1] Siswa PAUD";
		cout << "\n[2] Siswa SD;";
		cout << "\n[3] Siswa SMP";
		cout << "\n[4] Siswa SMA";
		cout << "\n[5] Mahasiswa" << endl;
		cout << "\nPilihan anda : ";
		cin >> kategori_siswa;
	
			if (kategori_siswa==1) {
			kuota_siswa=20;
			cout << "Masukkan Jumlah Siswa : ";
			cin >> jml_siswa;
			total_ks=(kuota_siswa*jml_siswa);
			cout << "\nTotal Kuota untuk Siswa adalah " << total_ks << " GB" << endl;
			cout << "Senilai Rp. " << total_ks*harga << endl;
			cout << "\nJumlah Biaya yang perlu dikeluarkan adalah :\n";
			cout << "Rp. " << (total_kp*harga)+(total_ks*harga) << endl;
	
			} else if (kategori_siswa==2) {
			kuota_siswa=35;
			cout << "Masukkan Jumlah Siswa : ";
			cin >> jml_siswa;
			total_ks=(kuota_siswa*jml_siswa);
			cout << "\nTotal Kuota untuk Siswa adalah " << total_ks << " GB" << endl;
			cout << "Senilai Rp. " << total_ks*harga << endl;
			cout << "\nJumlah Biaya yang perlu dikeluarkan adalah :\n";
			cout << "Rp. " << (total_kp*harga)+(total_ks*harga) << endl;
		
			} else if (kategori_siswa==3) {
			kuota_siswa=35;
			cout << "Masukkan Jumlah Siswa : ";
			cin >> jml_siswa;
			total_ks=(kuota_siswa*jml_siswa);
			cout << "\nTotal Kuota untuk Siswa adalah " << total_ks << " GB" << endl;
			cout << "Senilai Rp. " << total_ks*harga << endl;
			cout << "\nJumlah Biaya yang perlu dikeluarkan adalah :\n";
			cout << "Rp. " << (total_kp*harga)+(total_ks*harga) << endl;	
		
			} else if (kategori_siswa==4) {
			kuota_siswa=35;
			cout << "Masukkan Jumlah Siswa : ";
			cin >> jml_siswa;
			total_ks=(kuota_siswa*jml_siswa);	
			cout << "\nTotal Kuota untuk Siswa adalah " << total_ks << " GB" << endl;
			cout << "Senilai Rp. " << total_ks*harga << endl;
			cout << "\nJumlah Biaya yang perlu dikeluarkan adalah :\n";
			cout << "Rp. " << (total_kp*harga)+(total_ks*harga) << endl;
	
			} else if (kategori_siswa==5) {
			kuota_siswa=50;
			cout << "Masukkan Jumlah Mahaiswa : ";
			cin >> jml_siswa;
			total_ks=(kuota_siswa*jml_siswa);
			cout << "\nTotal Kuota untuk Siswa adalah " << total_ks << " GB" << endl;
			cout << "Senilai Rp. " << total_ks*harga << endl;
			cout << "\nJumlah Biaya yang perlu dikeluarkan adalah :\n";
			cout << "Rp. " << (total_kp*harga)+(total_ks*harga) << endl;
	
			} else {
			cout << "\nMohon pilih kategori Siswa yang tersedia";
		}
	} else {
			cout << "\nMohon pilih kategori Guru yang tersedia";
}

	return 0;
	
}
