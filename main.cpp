#include <iostream>

using namespace std;

int main() {

    // variabel 5 tpdata=2 const=1 oprator=3 assigment=2
    // tipe data 2
    // konstanta 1
    // operator 3
    // operator assigment

    string nama;
    string kondisi;
    int jumlah;
    int uang;
    int bulan;
    const int hari = 7;

    cout << "perhitungan duit \n \n";
    cout << "Masukan nama anda : ";
    cin >> nama;
    cout << "Masukan uang : ";
    cin >> uang;
    cout << "Masukan bulan : ";
    cin >> bulan;

    jumlah = hari + bulan;
    jumlah *= uang;
    jumlah += uang;

    cout << "selamat uang anda " << jumlah; 

    return 0;
}

/* 
Program menghitung uang jajan secara mudah dan tepat tanpa harus menghitung

string untuk memasukan nama dan kondisi
int untuk memasukan jumlah, uang, dan bulan
const untuk konstanta (hari = 7)

cout untuk menampilkan isi
cin untuk memasukan input

operasi perhitungan
jumlah = (hari + bulan) * uang - uang


*/ 