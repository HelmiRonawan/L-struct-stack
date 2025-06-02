#include <iostream>
#include <conio.h>
using namespace std;

struct mahasiswa{
  string nama;
  string nim;
  int umur;
  string alamat;
};

int main(){
 mahasiswa helmi;
 
 helmi.nama = "Ahmad Helmi Ronawan";
 helmi.nim = "C030324002";
 helmi.umur = 19;
 helmi.alamat = "Jl. Lingkar Selatan gg. Makmur Basirih 3";
 
 system ("cls");
 cout << "=====Informasi Saya=====" << endl;
 cout <<"Nama  : "<<helmi.nama << "\n";
 cout <<"Nim   : "<<helmi.nim << "\n";
 cout <<"Umur  : "<<helmi.umur << "\n";
 cout <<"Alamat: "<<helmi.alamat << "\n";
}
