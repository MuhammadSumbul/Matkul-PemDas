#include <iostream>
using namespace std;

string user="rizal", pass="123";
string username, password;
main(){
 cout<<"Masukkan Username : "<<endl;
 cin>>username;	
 cout<<"Masukkan Password : "<<endl;
 cin>>password;
 
 if(username==user && password==pass){
 	printf("Selamat Datang");
 }else{
 	printf("Maaf username atau password anda salah");
 }

return 0;
 
}
