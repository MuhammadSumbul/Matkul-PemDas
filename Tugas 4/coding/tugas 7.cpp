#include <iostream>
using namespace std;

main(){
	int bilangan;
	
	printf("Masukkan Nilai Bilangan  : ");
	scanf("%d", &bilangan);
	
	switch(bilangan){
		case 1:
		cout<<"Ini Bilangan : Satu"<<endl;
		break;
		case 2:
		cout<<"Ini Bilangan : Dua"<<endl;
		break;
		case 3:
		cout<<"Ini Bilangan : Tiga"<<endl;
		break;
		case 4:
		cout<<"Ini Bilangan : Empat"<<endl;
		break;
		case 5:
		cout<<"Ini Bilangan : Lima"<<endl;
		break;
		case 6:
		cout<<"Ini Bilangan : Enam"<<endl;
		break;
		case 7:
		cout<<"Ini Bilangan : Tujuh"<<endl;
		break;
		case 8:
		cout<<"Ini Bilangan : Delapan"<<endl;
		break;
		case 9:
		cout<<"Ini Bilangan : Sembilan"<<endl;
		break;
		case 0:
		cout<<"Ini Bilangan : Nol"<<endl;
		break;
	default:
	cout<<"Bilangan Anda Tidak Ditemukan";
	break;	
	}
	
}
