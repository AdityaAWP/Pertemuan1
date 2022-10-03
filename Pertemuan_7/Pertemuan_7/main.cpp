#include <iostream>

using namespace std;

int main()
{
    int jurusan,semester;
    string ti,si,dkv,freshman,sophomore,junior,senior;
    ti = "Teknik Informatika";
    si = "Sistem Informatika";
    dkv = "Desain Komunikasi Visual";

    freshman = "dan anda dalam kategori Freshman Year";
    sophomore = "dan anda dalam kategori Sophomore Year";
    junior = "dan anda dalam kategori Junior Year";
    senior = "dan anda dalam kategori Senior Year";

    cout << "Silahkan Pilih Jurusan" << endl;
    cout << "1. "<<ti << endl;
    cout << "2. "<<si << endl;
    cout << "3. "<<dkv << endl;
    cout << "Masukkan Nomor Jurusan Anda = ";
    cin >> jurusan;
    cout << endl;
    cout << "Masukkan Semester anda = ";
    cin >> semester;
    cout << endl;

    if(jurusan == 1)
    {
        if(semester > 0 && semester <= 2)
        {
            cout << "Jurusan anda "<<ti<<" "<<freshman;
        }
        else if(semester <= 4)
        {
            cout << "Jurusan anda "<<ti<<" "<<sophomore;
        }
        else if(semester <= 6)
        {
            cout << "Jurusan anda "<<ti<<" "<<junior;
        }
        else if (semester <= 8)
        {
            cout << "Jurusan anda "<<ti<<" "<<senior;
        }
        else
        {
            cout << "Tidak ada data";
        }

    }
    else if(jurusan == 2)
    {
        if(semester > 0 && semester <= 2)
        {
            cout << "Jurusan anda "<<si<<" "<<freshman;
        }
        else if(semester <= 4)
        {
            cout << "Jurusan anda "<<si<<" "<<sophomore;
        }
        else if(semester <= 6)
        {
            cout << "Jurusan anda "<<si<<" "<<junior;
        }
        else if (semester <= 8)
        {
            cout << "Jurusan anda "<<si<<" "<<senior;
        }
        else
        {
            cout << "Tidak ada data";
        }

    }
    else if(jurusan == 3)
    {
        if(semester > 0 && semester <= 2)
        {
            cout << "Jurusan anda "<<dkv<<" "<<freshman;
        }
        else if(semester <= 4)
        {
            cout << "Jurusan anda "<<dkv<<" "<<sophomore;
        }
        else if(semester <= 6)
        {
            cout << "Jurusan anda "<<dkv<<" "<<junior;
        }
        else if (semester <= 8)
        {
            cout << "Jurusan anda "<<dkv<<" "<<senior;
        }
        else
        {
            cout << "Tidak ada data";
        }

    }
    else{
        cout << "Tidak Memiliki Data Jurusan";
    }



    return 0;
}
