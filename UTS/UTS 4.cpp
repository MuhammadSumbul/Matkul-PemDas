#include<iostream>
using namespace std;

int a,pa,nilaiA, nilaiPa,harga,totalA, totalPa,i = 1;
float diskon;

int main(){

cout<<"Masukkan a : "; 
cin>>a;
cout<<"Masukkan pa : "; 
cin>>pa;
cout<<"Masukkan harga :"; 
cin>>harga;
cout<<"Masukkan d: "; 
cin>>diskon;

while(i > 0) {
	if((nilaiA>= harga) && (nilaiPa >= harga)){
	break;
	} if (nilaiA < harga){
		nilaiA= a*i; 
		if (nilaiA >= harga ) {
		totalA = i;
	  	}
	} if (nilaiPa < harga){ 
		nilaiPa = pa* i; 
		if (nilaiPa >= harga) {
		totalPa = i;
		}
	}	
  i++;
  
  }
diskon = harga * diskon;

cout<<endl;
cout<<"Jumlah Pembelian a = "<<totalA<<endl;
cout<<"Jumlah Pembelian pa = "<<totalPa<<endl; 
cout<<"diskon a = "<<diskon<<endl;

//printf("diskon = %d", (int)diskon);

return 0;
}
