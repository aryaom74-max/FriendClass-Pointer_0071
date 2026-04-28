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

void setNama(mahasiswa &a, string b)
{ 
    a.Nama = b;
    cout << a.Nama;
}

int main()
{
    mahasiswa joko;
    setNama(joko, "kairi Kumar");
    return 0;
}
