#include <iostream>
using namespace std;

class Barang{
    //property//atribut
	private:
		string namaBarang;
		int hargaBarang;
		int stokBarang;

    	//method//behavior
	public:
		virtual string tampilJenisBarang() = 0;

		// constructor
		Barang(string namaBarang = "Tidak ada nama", int hargaBarang = 0, int stokBarang = 0)
		{
			Barang::namaBarang = namaBarang;
			Barang::hargaBarang = hargaBarang;
			Barang::stokBarang = stokBarang;
	}
	/**/
void tambahStok (){
	stokBarang += 1;
	cout<<"Stok Berhasil Ditambahkan menjadi : "<< stokBarang<<endl;
	}
void tambahStok (int jmlTambah){
	stokBarang += jmlTambah;
	cout<<"Stok Berhasil Ditambahkan menjadi : "<< stokBarang<<endl;
	}
void kurangStok (){
	stokBarang -= 1;
	cout<<"Stok Berhasil Dikuangkan menjadi : "<< stokBarang<<endl;
}
void kurangStok (int jmlKurang){
	stokBarang -= jmlKurang;
	cout<<"Stok Berhasil Dikuangkan menjadi : "<< stokBarang<<endl;
}
//method cek stok barang
//cek dong stok barangnya!!!
bool cekStok(){
	if (stokBarang >0){
		return true;
	}
	else {
		return false;
	}
}
//bisa cek stok masih ada kan?? stok sudah nggak ada kan??
bool cekStok( bool status )
{
	if( status ){
		//stok masih ada kan??
		if(stokBarang > 0)
		{
			return true;
		}else{
			return false;
		}
	}else{
		//stok sudah habis kan??
			if(stokBarang > 0)
		{
			return false;
		}else{
			return true;
		}
	}
}

void cetakInfoBarang(){
	cout<< "Nama Barang : "<< Barang::namaBarang <<", Harga Barang : Rp. "<< Barang::hargaBarang << ", Stok Barang : "<< Barang::stokBarang << " pcs," << endl;
	}

//method setter
void setNamaBarang( string namaBarang)
{
	Barang::namaBarang = namaBarang;
}
void setHargaBarang( int hargaBarang)
{
	Barang::hargaBarang = hargaBarang;
}
void setStokBarang( int stokBarang)
{
	Barang::stokBarang = stokBarang;
}

//method getter
string getNamaBarang()
{
	return Barang::namaBarang;
}
int getHargaBarang()
{
	return Barang::hargaBarang;
}
int getStokBarang()
{
	return Barang::stokBarang;
}

};






