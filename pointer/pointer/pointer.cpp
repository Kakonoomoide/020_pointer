#include <iostream>
using namespace std;

class mahasiswa {
public:
	int nim;
	void showNIM();
};

void mahasiswa::showNIM() {
	cout << "No Induk : " << nim << endl;
}

int main(){
	mahasiswa mhs{ 1 };
	mhs.showNIM();

	mahasiswa& ref = mhs;
	ref.nim = 2;
	mhs.showNIM();

	mahasiswa* pMhs = &mhs;
	pMhs->nim = 3;
	mhs.showNIM();

	system("pause");
	return 0;
}