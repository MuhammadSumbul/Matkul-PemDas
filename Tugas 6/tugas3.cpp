#include <iostream>
#include <string.h> 
using namespace std;

int main(){
 char nama[20];
 int jumlah;

 cout<<"Masukkan String Anda : ";cin>>nama;
 
 printf("Panjang String : %d \n\n ", strlen(nama));  
 printf("Hasil Kebalikan String : %s ", strrev(nama));  
 
 return 0;
}
