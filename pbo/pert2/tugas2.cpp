//membuat program menghitung umur
#include <iostream>
using namespace std ;
 int main (){
     
     //mendeklarasikan dan memasukkan tahun lahir (tahunL) dan tahun sekarang (tahunS) menggunakan integer
     int tahunL = 2000;
     int tahunS = 2021;
     
     //mendeklarasikan dan menghitung usia dengan cara membuat perhitungan tahun sekarang - tahun lahir
     int umur   = tahunS-tahunL;
     //setelah mendeklarasikan umur melakukan cetak jumlah umur menggunakan cout
     cout << "Berarti Usia Kalian Sekarang Adalah "<<umur<<" Tahun";

     return 0; }