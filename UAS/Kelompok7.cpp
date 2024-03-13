#include <iostream>
#include <string>
using namespace std;

//deklarasi variabel
int pilih_menu[100],jumlah[100],sub_total[100],harga[100];
string menu[100];
int total_bayar,bayar,kembali,i=0;
bool selesai=false;

//prototype
void pesanan();
 
int main(){
	
	pesanan();

    while(selesai==false){
    	
    	cout<<"pilih_menu Menu : ";
    	cin>>pilih_menu[i];
    	
    	if (pilih_menu[i]<=4){
    		
    		if (pilih_menu[i]==0){
    			selesai=true;
			}else {
				switch (pilih_menu[i]){
		    		case 1 : menu[i]="Bakso Biasa     "; harga[i]=12000; break;
		    		case 2 : menu[i]="Bakso Jumbo     "; harga[i]=15000; break;
		    		case 3 : menu[i]="Tea (es/panas)  "; harga[i]=2000; break;
		    		case 4 : menu[i]="Jeruk (es/panas)"; harga[i]=3000; break;
		    		default : menu[i]="";harga[i]=0;
				}
				
				cout<<"Jumlah Porsi "<<menu[i]<<" : ";
		    	cin>>jumlah[i];
		    	cout<<endl;
		    	
		    	sub_total[i]=jumlah[i]*harga[i];
		    	
		    	total_bayar+=sub_total[i];
		    	i++;
	    		
			}
		} else {
			cout<<"Menu yang dipilih tidak sesuai"<<endl;
			cout<<endl;
		}
    
	}
	
	system("cls");

	cout<<"                 INVOICE PEMBELIAN BAKSO SUKSES"<<endl;
	cout<<"----------------------------------------------------------------------"<<endl;
	cout<<"No	Nama Menu    	  	Harga		Jumlah        Sub Total "<<endl;
	cout<<"----------------------------------------------------------------------"<<endl;
	for (int a=0; a < i; a++){
		  cout<<a<<"	"<<menu[a]<<"	"<<harga[a]<<"		"<<jumlah[a]<<"		"<<sub_total[a]<<endl;
	}
	
	cout<<"----------------------------------------------------------------------"<<endl;
	cout<<"Total Keseluruhan = Rp."<<total_bayar<<endl;
	cout<<"Bayar 	= Rp.";
	cin>>bayar;
	kembali = bayar - total_bayar ;
	cout<<"Total Kembalian = Rp."<<kembali<<endl;
	
}

//fungsi

void pesanan(){
	cout<<"Selamat Datang Di Restoran Kami "<<endl;
	cout<<"****DAFTAR MENU MAKANAN & MINUMAN BAKSO SUKSES****"<<endl;
    cout<<"1. Bakso Biasa				Rp. 12000"<<endl;
    cout<<"2. Bakso Jumbo				Rp. 15000"<<endl;
    cout<<"3. Tea (Es/panas)			Rp. 2000"<<endl;
    cout<<"4. Jeruk (Es/panas)			Rp. 3000"<<endl;
    cout<<"--------------------------------------------------------------"<<endl;
    
	cout<<"Tekan 0 jika selesai melakukan pemesanan"<<endl<<endl;
}
