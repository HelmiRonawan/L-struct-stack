#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

struct mahasiswa{
  string nama;
  string nim;
  int umur;
  string alamat;
};

void input(mahasiswa* namamhs){
  cout << "==========Silahkan isi informasi anda==========" << endl <<endl;
  cout << "Nama\t: ";
  getline(cin,namamhs->nama);
  cout << "NIM\t: ";
  cin >> namamhs ->nim;
  cout << "Umur\t: ";
  cin >> namamhs ->umur;
  cin.ignore();
  cout << "Alamat\t: ";
  getline(cin,namamhs->alamat);
}

void output(mahasiswa* namamhs){
  system("cls");
  cout << "============Informasi Anda============" <<endl;
  cout << "Nama\t: " << namamhs -> nama << endl;
  cout << "Nim\t: " << namamhs -> nim << endl;
  cout << "Umur\t: " << namamhs -> umur << endl;
  cout << "Alamat\t: " << namamhs -> alamat << endl;
}

int main(){
  mahasiswa helmi;
  input (&helmi);
  output(&helmi);
}
