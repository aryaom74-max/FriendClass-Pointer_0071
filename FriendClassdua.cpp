#include <iostream>
#include <string>
using namespace std;
class mahasiswa
{
private:
    string Nama;
public:
    friend void setNama(mahasiswa &a, string);
};

