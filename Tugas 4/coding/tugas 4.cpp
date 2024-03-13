#include <iostream>
using namespace std;

main(){
	int bil1, bil2, hasil;
	
	cout<<"Masukkan Bilangan 1 : "<<endl;
	cin>>bil1;

	cout<<"Masukkan Bilangan 2 : "<<endl;
	cin>>bil2;
	
	if(bil2 == 0){
		printf("Maaf, Pembagian menggunakan bilangan 0. Dilarang !!!!!");
	}else{
		hasil = bil1 / bil2;
		printf("Hasil Pembagian Adalah : %d",hasil);
	}
	
}
