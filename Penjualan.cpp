#include <iostream>
#include <stdlib.h>
using namespace std;

main(){
	float total;
	int pilihan,jumlah;
	char nama[30];
	
	cout<<"-----Nasi Padang-----"<<endl;
	cout<<"Harap masukkan nama anda : ";
	cin>>nama;
	system("cls");
	
	cout<<"-----Nasi Padang-----"<<endl;
	printf("- Halo %s, Selamat datang di toko kami -\n",nama);
	cout<<"--------------------------------------------\n"<<endl;
	
	string produk[10]= {"Rendang","Soto Ayam","Ayam Krispy","Gurame"};
	cout<<"Berikut daftar barang yang kami jual"<<endl;
	for (int i = 0;i < 4;i++){
		cout<<i + 1 <<":"<<produk[i]<<"\n";
	}
	
	cout<<"Masukkan Pilihan Barang yang anda ingin beli (format 1 - 4): ";
	cin>>pilihan;
		switch(pilihan){
			case 1 :
				cout<<"Anda ingin membeli Rendang, Masukkan jumlah barang yang ingin dibeli : ";
				cin>>jumlah;
				total = 20000 * jumlah;
				cout<<"Total Pembelian anda adalah Rp."<<total<<endl;
				cout<<"Total keuntungan Warung adalah Rp."<<30 * total /100<<endl;
				break;
			case 2 :
				cout<<"Anda ingin membeli Soto Ayam, Masukkan jumlah barang yang ingin dibeli : ";
				cin>>jumlah;
				total = 15000 * jumlah;
				cout<<"Total Pembelian anda adalah Rp."<<total<<endl;
				cout<<"Total keuntungan Warung adalah Rp."<<30 * total / 100<<endl;
				break;
			case 3 :
				cout<<"Anda ingin membeli Ayam Krispy, Masukkan jumlah barang yang ingin dibeli : ";
				cin>>jumlah;
				total = 12000 * jumlah;
				cout<<"Total Pembelian anda adalah Rp"<<total<<endl;
				cout<<"Total keuntungan Warung adalah Rp."<<30 * total / 100<<endl;
				break;
			case 4 :
				cout<<"Anda ingin membeli Gurame, Masukkan jumlah barang yang ingin dibeli : ";
				cin>>jumlah;
				total = 15000 * jumlah;
				cout<<"Total Pembelian anda adalah Rp."<<total<<endl;
				cout<<"Total keuntungan Warung adalah Rp."<<30 * total / 100<<endl;
				break;
				
			Default:
				cout<<"Salah Masukkan Operator"<<endl;
		}
		
		cout<<"\n Jumlah Keseluruhan : ";
		jumlah = sum(total);
		cout<<jumlah;
		return 0;
}
