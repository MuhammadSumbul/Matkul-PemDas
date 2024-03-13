#include <iostream>
using namespace std;

main(){
	int bil1, bil2, bil3, terbesar;
	
	cout<<"Masukkan Nilai Bilangan 1 : "<<endl;
	cin>>bil1;
	
	cout<<"Masukkan Nilai Bilangan 2 : "<<endl;
	cin>>bil2;
	 
	cout<<"Masukkan Nilai Bilangan 2 : "<<endl;
	cin>>bil3;
	
	if(bil1 > bil2){
		if(bil1 > bil3){
			terbesar = bil1;
		}else{
			terbesar = bil3;
		}
	}else{
			if(bil2 > bil3){
			terbesar = bil2;
		}else{
			terbesar = bil3;
		}
	}
	printf("Bilangan Terbesar adalah : %d ",terbesar);
}
