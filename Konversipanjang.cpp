#include <iostream>
using namespace std;

int main(){
	int km, cm, meter;
	
	cout<<"Program pengubah Meter menjadi KM dan CM"<<endl;
	cout<<"Masukkan M : ";
	cin>>meter;
	
	km = meter*1000;
	cm = meter/100;
	
	cout<<"Hasil konversinya adalah "<<km<<" KM / "<<cm<<" CM";
}
