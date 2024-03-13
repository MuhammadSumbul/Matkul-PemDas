#include <iostream>
using namespace std;

main(){
int angka, a, b;    
   
cout<<"Masukkan Angka : ";  
cin>>angka;
 
cout<<endl;

for (a = angka;a >= 1;a--){ 
	for(b=1;b<=a;b++){
		cout<<a<<" ";
	}       
	cout<<endl;                 
}
return 0;    
}




