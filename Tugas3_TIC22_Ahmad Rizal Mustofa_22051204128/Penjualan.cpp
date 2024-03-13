#include <iostream>
#include <stdio.h>
using namespace std;

main(){
	int harga,jumlah,total ;
	
	printf("----- Baby Complement -----\n");
	printf("Masukkan Harga Barang : \n");
	scanf("%d", &harga);
	printf("Masukkan Jumlah Barang : \n");
	scanf("%d", &jumlah);
	
	total=harga*jumlah;
	printf("Total Keseluruhan : %d", total);
	
}
