#include <iostream>
using namespace std;

char nama[20];

int main(){
//menggunakan Gets
//printf("Masukkan Nama Anda : ");
//gets(nama);

// menggunakan Scanf
//printf("Masukkan Nama : ");
//scanf("%s",nama);

// menggunakan Fgets
printf("Masukkan Nama : ");
fgets(nama,sizeof(nama),stdin);

printf("Nama Anda Adalah : %s",nama);

return 0;
}

