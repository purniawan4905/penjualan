#include <iostream>
using namespace std;

class Pembeli : public User {
  //Property
private:
    string noTelp;
    string alamat;
    
  //method
public:
  virtual string tampilJenisUser(){
    return "Ini Pembeli";
  };

  //method constructor
  Pembeli(string nama = "Tidak ada nama", int umur = 0, string jenisKelamin = "Tidak ada JK", 
  string noTelp = "08xx", string alamat = "Tidak ada alamat") : User (nama, umur, jenisKelamin)
  {
    Pembeli::noTelp = noTelp;
    Pembeli::alamat = alamat;
  }
    //method Wajib
    void cetakInfoUser(){
    User::cetakInfoUser();
    cout << ", No. Telepon : " << Pembeli::noTelp << ", Alamat : " << Pembeli::alamat << "\n"
         << endl;
  }

  //method setter
  void setNoTelp( string noTelp)
  {
    Pembeli::noTelp = noTelp;
 }
 void setAlamat( int alamat)
 {
  Pembeli::alamat = alamat;
 }

//method getter
 string getNoTelp()
 {
   return Pembeli::noTelp;
 }
string getAlamat()
 {
   return Pembeli::alamat;
 }
};

