#include <iostream>
using namespace std;

struct Orang
{
    string nama;
    string alamat;
    int umur;
};

int main()
{
    //Deklarasi variabel struct
    Orang mhs;
    //Mengisi data
    cout << "Isikan data nama : ";
    cin >> mhs.nama;
}
