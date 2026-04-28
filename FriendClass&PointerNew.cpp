#include <iostream>
using namespace std;

class mahasiswa
{
public:
    int nim;
    void showNim()
    {
        cout << "No Induk = " << nim << endl;
    }
};

int main()
{
    mahasiswa *mhs = new mahasiswwa{1}; //Pointer new mhs
    mhs->nim = 2;
    mhs->shownim();
    delete mhs;
    return 0;
}