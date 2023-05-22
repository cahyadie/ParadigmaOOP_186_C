#ifndef IBU_H
#define IBU_H

class ibu {
public:
	string nama;
	vector<anak*>daftar_anak;

	ibu(string pNama) :nama(pNama) {
		cout << "ibu\"" << nama << "\"ada\n";
	}
	~ibu() {
		cout << "ibu\""<<nama<<"\"tidakada\";
	}
	void tambahAnak(anak*);
	void cetakAnak();
};
void ibu::tambahAnak(anak*) {
	daftar_anak.push_back(pAnak);
}
void ibu::cetakAnak(anak* pAnak) {
	cout << "Daftar Anak dari ibu\"" << this->nama << "\":\n";
	for (auto& a : daftar_anak) {
		cout << a->nama << "\n";
	}
	cout << endl;
}
#endif  

