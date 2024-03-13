#include <iostream>
using namespace std;

main(){
	int bil1, bil2, terbesar, terkecil;
	
	printf("Masukkan Nilai Bilangan 1 : \n");
	scanf("%d", &bil1);
	
	printf("Masukkan Nilai Bilangan 2 : \n");
	scanf("%d", &bil2);
	
	if(bil1>bil2){
		terbesar = bil1;
		terkecil = bil2;
	}else{
		terbesar = bil2;
		terkecil = bil1;
	}
	
	printf("Nilai Terkecil Adalah : %d \n", terkecil);
	printf("Nilai Terbesar Adalah : %d \n", terbesar);
}
