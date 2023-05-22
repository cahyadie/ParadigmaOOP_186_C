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

class dokter {
public:
	string nama;
	vector<pasien*> daftar_pasien;

	dokter(string pNama) :nama(pNama) {
		cout << "Dokter\"" << nama << "\"ada\n";
	}
	~dokter() {
		cout << "Dokter\"" << nama << "\"tidak ada\n";
	}
	void tambahPasien(pasien*);
	void cetakpasien();
};

void pasien::tambahDokter(dokter* pDokter) {
	daftar_dokter.push_back(pDokter);
}
void pasien::cetakDokter() {
	cout << "Daftar Dokter yang menangani pasien\"" << this->nama << "\":\n";
	for (auto& a : daftar_dokter) {
		cout << a->nama << "\n";
	}
	cout << endl;
}
