#include <iostream>
using namespace std;

main(){
int angka = 2, b = 1, n;    
   
cout<<"Masukkan Nilai N : ";  
cin>>n;
 
cout<<"Menggunakan While : \n";
while (b < n){ 
 angka = angka * 2;                              
b++;        
}
cout<<angka;
    
return 0;    
}




