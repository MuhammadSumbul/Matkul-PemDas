#include <iostream>
using namespace std;

main(){
	int ipk;
	
	cout<<"Masukkan Nilai Ipk :"<<endl;
	cin>>ipk;
	
	if(ipk >= 0.0 && ipk <= 0.99){
		printf("Tidak Lulus");
	}else if(ipk >= 1.0 && ipk <= 1.99){
		printf("Mengulang");
	}else if(ipk >= 2.0 && ipk <= 2.99){
		printf("Baik");
	}else if(ipk >= 3.0 && ipk <= 3.49){
		printf("Sangat Baik");
	}else if(ipk >= 3.5 && ipk <= 4.0){
		printf("Tidak Lulus");
	}
}

