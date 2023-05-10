#include <iostream>
using namespace std;

class pelajar;

class manusia {
public:
    void showNilaiPelajar(pelajar&);
};

class pelajar {
private:
    int nilai;
public:
    pelajar() {
        nilai = 100;
    }
};

int main()
{
    std::cout << "Hello World!\n";
}