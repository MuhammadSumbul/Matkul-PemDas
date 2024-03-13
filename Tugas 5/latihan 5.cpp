#include <iostream>
using namespace std;

main(){
int input [100], array, n, terbesar;    
   
cout<<"Masukkan Nilai Yang Akan Dihitung: ";  
cin>>array;
 
cout<<"Masukkan Nilai "<<array<<" Angka (Dipisah Dengan Enter)"<<endl;  
for (n = 0;n < array;n++){ 
cin>>input[n];                           
}

terbesar = input[0];

for (n = 0;n < array;n++){ 
	if(input[n] > terbesar){
		terbesar = input[n];
	}             
}
    
cout<<"Bilangan Terbesar Adalah : "<<terbesar;
return 0;    
}




