#include <iostream>
using namespace std;

main(){
int angka = 2, b, n;    
   
cout<<"Masukkan Nilai N : ";  
cin>>n;
 
cout<<"Menggunakan For : \n";
for (b = 1;b < n;b++){ 
angka *= 2;                               
}
cout<<angka;
    
return 0;    
}




