#include <iostream>
using namespace std;

class mahasiswa {
public:
	int nim;
	void showNIM() {
		cout << "No Induk : " << nim << endl;
	}
};

int main()
{
	mahasiswa* mhs = new mahasiswa{ 1 };
	mhs->nim = 2;
	mhs->showNIM();
	delete mhs;

	system("pause");
	return 0;
}
