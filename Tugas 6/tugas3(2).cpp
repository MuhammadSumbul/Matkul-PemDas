#include <iostream>
#include<bits/stdc++.h> 
using namespace std;

string nama;

int main(){
	
cout<<"Masukkan String Anda : ";cin>>nama;
cout<<"Panjang String Adalah : "<<nama.length()<<endl;

reverse(nama.begin(),nama.end());
cout<<"Hasil Kebalikan String : ";
cout<<nama<<endl;
	
return 0;
}

