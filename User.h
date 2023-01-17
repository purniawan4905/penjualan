#include <iostream>
using namespace std;

class User{
    
    private:
    string nama;
    int umur;
    string jenisKelamin;

    public :
        virtual string tampilJenisUser() = 0;

  User(string nama = "Tidak ada nama", int umur = 0, string jenisKelamin = "Tidak ada JK")
  {
    User::nama = nama;
    User::umur = umur;
    User::jenisKelamin = jenisKelamin;
  }
    //method
    void cetakInfoUser(){
        cout<< "Nama User : " << User::nama <<", Umur User : "<< User::umur << " tahun, jenis kelamin : "<< 
        User::jenisKelamin;
}

  //method setter
  void setNama( string nama)
  {
    User::nama = nama;
 }
 void setUmur( int umur)
 {
  User::umur = umur;
 }
 void setJenisKelamin( string jenisKelamin)
 {
  User::jenisKelamin = jenisKelamin;
 }
        //method getter
 string getNama()
 {
   return User::nama;
 }
 int getUmur()
 {
  return User::umur;
 }
 string getJenisKelamin()
 {
  return User::jenisKelamin;
 }
};


