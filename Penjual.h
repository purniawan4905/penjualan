#include <iostream>
using namespace std;

class Penjual : public User{
    //Property
private:
    int lamaKerjaPertahun;

    //method
    public:

     virtual string tampilJenisUser(){
    return "Ini Penjual";
  };

            //method constructor
        Penjual(string nama = "Tidak ada nama", int umur = 0, string jenisKelamin = "Tidak ada JK", 
        int lamaKerjaPertahun = 0 ) : User(nama, umur, jenisKelamin)
        {
            Penjual::lamaKerjaPertahun = lamaKerjaPertahun;
        }
    //method
    void cetakInfoUser(){
            User::cetakInfoUser();
            cout << ", Lama Kerja : " << Penjual::lamaKerjaPertahun << " tahun"
                 << endl;
            }

     //method setter
    void setLamaKerjaPerTahun(int lamaKerjaPertahun)
    {
        Penjual::lamaKerjaPertahun = lamaKerjaPertahun;
    }

    //method getter
    int getLamaKerjaPerTahun()
    {
        return Penjual::lamaKerjaPertahun;
    }
};