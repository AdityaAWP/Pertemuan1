#include <iostream>

using namespace std;

int main()
{
    //Luas Lingkaran
    float phi = 3.14;
    float r;

    cout << "Input Jari Jari: ";
    cin >>r;

    float hasil = phi*r*r;
    cout << "Hasilnya: "<< hasil<< endl;

    //Luas Persegi Panjang

    float p,l;

    cout << "Input Panjang: ";
    cin >>p;
    cout << "Input Lebar: ";
    cin >>l;
    float jumlah=p*l;
    cout << "Hasilnya: " << jumlah;

    return 0;
}
