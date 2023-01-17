#include <iostream>
#include "Barang.h"
using namespace std;

class Keyboard : public Barang
{
    // property dari Keyboard
private:
    string backlight;
    int banyakKey;
    string tipeSwitch;

public:
    // method

        virtual string tampilJenisBarang(){
            return "Ini keyboard";
    }
    // constructor
    Keyboard(string namaBarang = "Tidak ada nama", int hargaBarang = 0, int stokBarang = 0,
           string backlight = "Tidak ada backlight", int banyakKey = 0, string tipeSwitch = "Linear") : Barang(namaBarang, hargaBarang, stokBarang)
    {
        Keyboard::backlight = backlight;
        Keyboard::banyakKey = banyakKey;
        Keyboard::tipeSwitch = tipeSwitch;
    }

    // setter & getter
    void setBacklight(string backlight)
    {
        Keyboard::backlight = backlight;
    }
    string getBacklight()
    {
        return Keyboard::backlight;
    }
    void setBanyakKey(int banyakKey)
    {
        Keyboard::banyakKey = banyakKey;
    }
    int getBanyakKey()
    {
        return Keyboard::banyakKey;
    }
    void setTipeSwitch(string tipeSwitch)
    {
        Keyboard::tipeSwitch = tipeSwitch;
    }
    string getTipeSwicth()
    {
        return Keyboard::tipeSwitch;
    }
//overriding
    void cetakInfoBarang()
    {
        Barang::cetakInfoBarang();
        cout << "Backlight : " << Keyboard::backlight << ", Banyak key : " << 
        Keyboard::banyakKey << ", Tipe Switch : " << 
        Keyboard::tipeSwitch << "\n" << endl; 
    }
      

};

class Processor : public Barang
{
    // property dari Processor
private:
    float frekuensiDasar;
    float turboBoost;

public:
    // method

     virtual string tampilJenisBarang(){
        return "Ini processor";
    }
    // constructor
    Processor(string namaBarang = "Tidak ada nama", int hargaBarang = 0, int stokBarang = 0,
           float frekuensiDasar = 0, float turboBoost = 0) : Barang(namaBarang, hargaBarang, stokBarang)
    {
        Processor::frekuensiDasar = frekuensiDasar;
        Processor::turboBoost = turboBoost;
    }

    // setter & getter
    void setFrekuensiDasar(float frekuensiDasar)
    {
        Processor::frekuensiDasar = frekuensiDasar;
    }
    float getFrekuensiDasar()
    {
        return Processor::frekuensiDasar;
    }
    void setTurboBoost(float turboBoost)
    {
        Processor::turboBoost = turboBoost;
    }
    float getTurboBoost()
    {
        return Processor::turboBoost;
    }
    //overriding
        void cetakInfoBarang()
    {
        Barang::cetakInfoBarang();
        cout << "Frekuensi Dasar : " << Processor::frekuensiDasar << ", Turbo Boost : " << 
        Processor::turboBoost << "\n" << endl; 
    }
};
