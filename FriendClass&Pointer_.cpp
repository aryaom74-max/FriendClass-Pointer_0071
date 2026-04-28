#include <iostream>
using namespace std;
class mahasiswa{
    public:
    int nim;
    void showNim(){
        cout<<"No Induk = "<<nim<<endl;
    }
};

int main (){
    mahasiswa mhs{1}; // object mhs
    mhs.showNim(); //Member acces operator

    mahasiswa &refmhs = mhs; //Pointer Refrence refmhs
    refmhs.nim = 2; //Member acces operator
    mhs.showNim(); 

    mahasiswa *pmhs = &mhs; //Pointer Derefrence pmhs
    pmhs->nim = 3; //Arrow operator
    mhs.showNim();
    return 0;
}