#include <iostream>

using namespace std;

int main()
{
    int n,f_n1 = 0, f_n2 = 1, f_n;
    cout << "Masukkan Jumlah Deret: ";
    cin >> n;

    cout << f_n1 << " ";
    cout << f_n2 << " ";
    for(int i = 0; i <= n; i++){
        f_n = f_n1 + f_n2;
        cout << f_n << " ";
        f_n1 = f_n2;
        f_n2 = f_n;
    }
    return 0;
}
