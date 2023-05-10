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
}