#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;

    int harga,jumlahPermen,uang=5000;
    cout << "List Harga Permen :"<< endl;
    cout << "Rp.500\n";
    cout << "Rp.1000\n";
    cout << "Rp.300\n";
    cout << "----------\n";

    cout << "Masukkan Harga Permen: ";
    cin >>harga;

    if(harga == 500){
        cout << "Dito mendapatkan 5 buah permen";
    }else if(harga == 1000){
        jumlahPermen= uang/harga;
        cout << "Dito mendapatkan " << jumlahPermen << " buah permen";
    }else if(harga == 300){
        cout << "Kelipatan harga\n";
        for(int i = 300; i <= uang; i+=300){
            cout << i << " ";
            jumlahPermen++;
        }
        cout << "\nDito mendapatkan " << jumlahPermen << " buah permen";
    }
    return 0;
}
