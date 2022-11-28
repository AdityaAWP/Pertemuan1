#include <iostream>

using namespace std;

int main()
{

    int i,j,sum = 0,avg,angkaInputan,angkaTerkecil,angkaTerbesar,penampung;
    float f;
    /* Nomor 1 */

    cout << "Soal Nomor 1" << endl;

    for(i = 100, j = 1; i >= 1 && j <=100; i--, j++){
        cout << i << " " << j <<endl;
    }

    /* Nomor 2 */
    cout << "\n";
    cout << "Soal Nomor 2" << endl;

    for(i = 1; i <= 100; i++){
        if(i % 2 == 1){
            continue;
        }
        cout << i << endl;
    }

    /* Nomor 3 */
    cout << "\n";
    cout << "Soal Nomor 3" << endl;

    for(i = 100; i >= 1; i--){
        if(i == 54){
            break;
        }
        cout << i << endl;
    }

    /* Nomor 4 */
    cout << "\n";
    cout << "Soal Nomor 4" << endl;


    for(i = 1; i <= 20; i++){
        cout << i <<endl;

        sum += i;
        avg = sum/i;

    }
    cout << "Jumlah : " << sum << endl;
    cout << "Rata Rata : " << avg <<endl;


    /* Nomor 5 */
    cout << "\n";
    cout << "Soal Nomor 5" << endl;


   for(i = 1; ; i++) {
    cout << "Masukan Nilai Anda = ";
    cin >> angkaInputan;
    if(angkaInputan == -99) {
        cout << "\nKeluar Karena Break " << endl;
        break;
    }
}


    /* Nomor 6 */
    cout << "\n";
    cout << "Soal Nomor 6" << endl;

    for(i = 1; ; i++) {
    cout << "Masukan Nilai Anda = ";
    cin >> angkaInputan;
    if(angkaInputan == -99) {
        break;
    }

    if(i == 1) {
        angkaTerkecil = angkaInputan;
        angkaTerbesar = angkaInputan;
    } else {
        if(angkaInputan > angkaTerbesar) {
            angkaTerbesar = angkaInputan;
        }if(angkaInputan < angkaTerkecil) {
            angkaTerkecil = angkaInputan;
        }
    }
}
    cout << "max = " << angkaTerbesar << endl;
    cout << "min = " << angkaTerkecil << endl;

     /* Nomor 7 */
    cout << "\n";
    cout << "Soal Nomor 7" << endl;

    cout << "Input bill : ";
    cin >> angkaInputan;
    while(angkaInputan!=9999){
        cout << angkaInputan <<endl;
        sum += angkaInputan;
        cout << "Input bill : ";
        cin >> angkaInputan;
    }
    cout << sum << endl;


     /* Nomor 8*/
    cout << "\n";
    cout << "Soal Nomor 8" << endl;

    cout << "Input bill : ";
    cin >> angkaInputan;
    while(angkaInputan!=9999){
        cout << angkaInputan << endl;
        penampung += 1;
        cout << "Input bill : ";
        cin >> angkaInputan;
    }
    cout << "Jumlah Angka" << penampung;


     /* Nomor 9*/
    cout << "\n";
    cout << "Soal Nomor 9" << endl;

    penampung = 1;

    cout << "Input bill : ";
    cin >> angkaInputan;

    while (angkaInputan != 9999){
        cout << angkaInputan << endl;
        sum += angkaInputan;
        penampung += 1;
        cout << "Input bill :";
        cin >> angkaInputan;
    }

    cout << "Jumlah :" << sum << endl;
    cout << "Banyaknya Bilangan : " << penampung - 1;


     /* Nomor 10*/
    cout << "\n";
    cout << "Soal Nomor 10" << endl;

    for(i = 1; i <= 7; i++) {
    cout << "Looping yang ke - " << i << endl;
        for(j = 1; j <= 10; j++) {
            cout << "-angka " << j << "-" << endl;
        }
    }


     /* Nomor 11*/
    cout << "\n";
    cout << "Soal Nomor 11" << endl;

    cout << "Input : ";
    cin >> angkaInputan;

    for(i = 1; i <= 10; i++) {
        sum = i*angkaInputan;
        cout << i << " x " << angkaInputan << " = " << sum << endl;
    }

    /* Nomor 12*/
    cout << "\n";
    cout << "Soal Nomor 12" << endl;

    cout << "-------------------------" << endl;
    cout << "Celcius  |  Fahremheit" << endl;
    cout << "-------------------------" << endl;
    for(i = 0; i <= 100; i++) {
      f = ((9.0/5)*i)+32;
      printf("%d \t|\t %.1f |\n",i, f);
    }

     /* Nomor 13*/
    cout << "\n";
    cout << "Soal Nomor 13" << endl;

    cout << "------------------------------------------------------------------------------" << endl;
    cout << "Celcius \t Fahremheit \t Keterangan" << endl;
    cout << "------------------------------------------------------------------------------" << endl;
    for(i = 100; i >= -45; i--) {
      f = ((9.0/5)*i)+32;
      if(i == 100) {
      printf("%d \t\t %.1f \t\t Air Mendidih \n",i, f);
      } else if(i == 40) {
      printf("%d \t\t %.1f \t\t Air Mandi Panas \n",i, f);
      } else if(i == 37) {
      printf("%d \t\t %.1f \t\t Temperatur Tubuh \n",i, f);
      } else if(i == 30) {
      printf("%d \t\t %.1f \t\t Cuaca Pantai \n",i, f);
      } else if(i == 21) {
      printf("%d \t\t %.1f \t\t Temperatur Ruangan \n",i, f);
    } else if(i == 10) {
      printf("%d \t\t %.1f \t\t Hari Yang Dingin \n",i, f);
    } else if(i == 0) {
      printf("%d \t\t %.1f \t\t Titik Beku Air \n",i, f);
    } else if(i == -18) {
      printf("%d \t\t %.1f \t\t Cuaca Dingin Bersalju \n",i, f);
    } else if(i == -40) {
      printf("%d \t\t %.1f \t\t Cuaca Sangat Dingin Bersalju \n",i, f);
      cout << "------------------------------------------------------------------------------" << endl;
    }
    }

    return 0;
}
