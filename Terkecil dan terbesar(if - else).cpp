#include <iostream>
using namespace std;

main(){
	//Percabangan (IF - ELSE)
	int b1, b2, tb, tk;
	
	//Perintah memasukkan Bilangan1	
	printf("Masukkan Nilai Bilangan 1 : \n");
	scanf("%d", &b1);
	
	//Perintah memasukkan Bilangan2	
	printf("Masukkan Nilai Bilangan 2 : \n");
	scanf("%d", &b2);
	
	if(b1>b2){
		tb = b1;
		tk = b2;
	}else{
		tb = b2;
		tk = b1;
	}
	
	//Menampilan Hasil 
	printf("Nilai Terkecil Adalah : %d \n", tk);
	printf("Nilai Terbesar Adalah : %d \n", tb);
}
