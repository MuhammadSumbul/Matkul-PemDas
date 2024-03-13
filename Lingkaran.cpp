#include <iostream>
using namespace std;

int main(){
	float keliling, r, diameter;
	const float phi = 3.14159;
	
	cout<<"Program menghitung keliling lingkaran"<<endl;
	cout<<"Masukkan panjang diameter lingkaran : ";
	cin>>diameter;
	
	r = diameter/2;
	keliling = 2 * phi * r;
	cout<<"Keliling lingkaran adalah "<<keliling;
	
	return 0;
}
