#include<iostream>

using namespace std;

int main(){
	int h, t, hasil;
	int hari[h];
	cout<<"Masukkan Batas Hari : ";
	cin>>h;
	int a1, a2;
	
	for(int i = 1; i <= h; i++){
		cin>>hari[i];
	}
	
	if(h == 7){
		a1 = hari[4] - hari[2];
		a2 = hari[6] - hari[5];
		hasil = a1 + a2;
	}else if(h == 6){
		a1 = hari[2] - hari[1];
		hasil == 0;
	}
	
	
	cout<<"Hasil Untung adalah : "<<hasil;
	
	
}
