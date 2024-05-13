#include <iostream>
#include <string>
using namespace std;

class Mahasiswa
{
public:
    int nim;
    string nama;
public:
    Mahasiswa()
    {
        nim = 0;
        nama = "";
    };
    Mahasiswa(int iNim)
    {
        nim = iNim;
    };
    Mahasiswa(string);
    Mahasiswa(int iNim, string iNama);
    
    void cetak();

    Mahasiswa::Mahasiswa(string iNama){
        nama = iNama;
    }

    Mahasiswa::Mahasiswa(int iNim,string iNama)
    {
        nim = iNim;
        nama = iNama;
    };

    void Mahasiswa::cetak(){
        cout << "NIM = " << nim << endl;
        cout << "NAMA = " << nama << endl;
    }
};

int main()
{
    Mahasiswa mhs1;
    Mahasiswa mhs2(20);
    Mahasiswa mhs3("Rohman");
    Mahasiswa mhs4(31, "Arul");

    mhs1.cetak();
    mhs2.cetak();
    mhs3.cetak();
    mhs4.cetak();

    return 0;
}