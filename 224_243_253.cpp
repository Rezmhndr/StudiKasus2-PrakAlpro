#include <iostream>
#include <conio.h>
using namespace std;

void menu(){
	cout << "============================================" << endl;
	cout << "= = = = = = =   Menu Makanan  = = = = = = = " << endl;
	cout << endl;
	cout << " 1. Ayam Geprek:  Rp. 21.000" << endl;
	cout << " 2. Ayam Goreng:  Rp. 17.000" << endl;
	cout << " 3. Udang Goreng: Rp. 19.000" << endl;
	cout << " 4. Cumi Goreng:  Rp. 20.000" << endl;
	cout << " 5. Ayam Bakar:   Rp. 25.000" << endl;
	cout << endl;
	cout << "============================================" << endl;
}

int main(){
	int agp, ag, ug, cg, ab, total, jarak;					// menu
	int harga_1, harga_2, harga_3, harga_4, harga_5;		// harga
	int ongkir, totalakhir, totalpembelian, money, potongan, angsul;
	int ongkitpot = 0;
	
	menu();
	cout<<"Jumlah Pesan Ayam Geprek = ";cin>>agp;
    harga_1=21000*agp;
    cout<<"Jumlah Pesan Ayam goreng = ";cin>>ag;
    harga_2=17000*ag;
    cout<<"Jumlah Pesan Udang goreng = ";cin>>ug;
    harga_3=19000*ug;
    cout<<"Jumlah Pesan Cumi goreng = ";cin>>cg;
    harga_4=20000*cg;
    cout<<"Jumlah Pesan Ayam Bakar = ";cin>>ab;
    harga_5=25000*ab;
  
    
    cout << "Masukkan jarak estimasi rumah anda (km) : "; cin >> jarak;
    
    //kondisi inout jarak
    if (jarak <= 3){
    	ongkir=15000;
    }
    else{
    	ongkir=25000;
	}
	
	totalpembelian = harga_1 + harga_2 + harga_3 + harga_4 + harga_5;
		
	if (totalpembelian >= 25000 && totalpembelian <= 49999){
		ongkitpot = 3000;
		totalakhir = totalpembelian + (ongkir - ongkitpot);	
	}
	else if (totalpembelian >= 50000 && totalpembelian <= 149999){
		ongkitpot = 5000;
		potongan = 0.15 * totalpembelian;
		totalakhir = (totalpembelian - potongan) + (ongkir - ongkitpot);
	}
	else if (totalpembelian >= 150000 ){
		ongkitpot = 8000;
		potongan = 0.35 * totalpembelian;
		totalakhir = (totalpembelian - potongan) + (ongkir - ongkitpot);
	}
	else{
		totalakhir = totalpembelian + ongkir;
	}
	
	system("cls");
	
	cout << endl;
	cout << "============= Tagihan Pembayaran ==============" << endl;
	cout << endl;
	cout << " 1. Ayam Geprek    :   Rp. 21.000 = " << agp << endl;
	cout << " 2. Ayam Goreng    :   Rp. 17.000 = " << ag << endl;
	cout << " 3. Udang Goreng   :   Rp. 19.000 = " << ug << endl;
	cout << " 4. Cumi Goreng    :   Rp. 20.000 = " << cg << endl;
	cout << " 5. Ayam Bakar     :   Rp. 25.000 = " << ab <<endl;
	cout << endl;
	cout << "Total Pesanan      : Rp. " << totalpembelian << endl;
	cout << "Total Ongkir       : Rp. " << ongkir << endl;
	cout << "Potongan Ongkir    : Rp. " << ongkitpot << endl;
	cout << "Diskon             : Rp. " << potongan << endl;
	cout << endl;
	cout << "Total Pembayaran   : Rp. " << totalakhir << endl;
	cout << endl;
	cout << "Masukkan Uang Anda : Rp. "; cin >> money;
	angsul = money - totalakhir;
	cout << "Kembalian anda     : Rp. " << angsul << endl; 
	cout << endl;
	cout << "================ Terima Kasih! =================" << endl;
	getch();
	return 0;

}
