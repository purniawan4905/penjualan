#include <iostream>
#include "OOP\penjualan\User.h"
#include "OOP\penjualan\Pembeli.h"
#include "OOP\penjualan\Penjual.h"
#include "OOP\penjualan\Accessoris.h"
#include "OOP\penjualan\Transaksi.h"
using namespace std;

int main (){

    Keyboard keyboard1("Vortex Series VX 7", 1000000, 97, "RGB", 87, "Outemu Blue");
    Keyboard keyboard2("Keychorn", 1200000, 27, "RGB", 84, "Gateron Brown");
    Keyboard keyboard3("Rexus Daxa M84 Pro", 1500000, 11, "RGB", 84, "Gateron Red");

    // keyboard1.tampilJenisBarang();
    keyboard1.cetakInfoBarang();
    keyboard2.cetakInfoBarang();
    keyboard3.cetakInfoBarang();

    Processor proc1("AMD Ryzen 5 3600", 3000000, 21, 3.6, 4.2);
    Processor proc2("Intel Core i5 10400", 2400000, 12, 2.9, 4.3);
    
    // proc1.tampilJenisBarang();
    proc1.cetakInfoBarang();
    proc2.cetakInfoBarang();

    //instansiasi object penjual
    Penjual penjual1("Udin", 21, "Laki-Laki", 2 );
    penjual1.cetakInfoUser();

    //instansiasi object Pembeli
    Pembeli pembeli1("Agus", 29, "Laki-Laki", "08122650582", "Pati\n" );
    pembeli1.cetakInfoUser();

    Transaksi trs1(&penjual1, &pembeli1, &keyboard1);
    Transaksi trs2(&penjual1, &pembeli1, &proc1);

    cout << "Sisa Stok Keyboard : " << keyboard1.getStokBarang() << endl;
    cout << "Sisa Stok Proccessor : " << proc1.getStokBarang() << endl
         << endl;

    cout << "Program Selesai" << endl;
}