#include <iostream>
using namespace std;

int pilih;
float phi = 3.14159;
float vk, ll, vs, t, s, j;

main(){
	cout<<"Program Menghitung"<<endl;
	cout<<"1. Volume Kubus"<<endl;
	cout<<"2. Luas Lingkaran"<<endl;
	cout<<"3. Volume Silinder"<<endl;
	cout<<"Masukkan Pilihan Anda :";
	cin>>pilih;
	
	switch(pilih){
		case 1 :
			cout<<"Masukkan Panjang Sisi Kubus :";
			cin>>s;
			vk = s*s*s;
			cout<<"Volume Kubus Adalah "<<vk;
			break;
		case 2 :
			cout<<"Masukkan Jari - jari Lingkaran :";
			cin>>j;
			ll = phi*j*j;
			cout<<"Luas Lingkaran Adalah "<<ll;
			break;
		case 3 :
			cout<<"Masukkan Jari - jari Silinder :";
			cin>>j;
			cout<<"Masukkan Tinggi Silinder :";
			cin>>t;
			vs = phi*j*t;
			cout<<"Luas Lingkaran Adalah "<<vs;
			break;
		default :
			cout<<"Pilihan Anda Tidak Ada";
			break;
	}
}
