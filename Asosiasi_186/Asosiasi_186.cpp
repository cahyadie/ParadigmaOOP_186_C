#include <iostream>
#include <vector>
using namespace std;

class dokter;
class pasien {
public:
	string nama;
	vector<dokter*> daftar_dokter;
	pasien(strin pNama) :nama(pNama) {
		cout << "Pasien\"" << nama << "\"ada\n";
	}
	~pasien() {
		cout << "Pasien\"" << nama << "\"Tidak ada\n";
	}
	void tambahDokter(dokter*);
	void cetakDokter();
};

