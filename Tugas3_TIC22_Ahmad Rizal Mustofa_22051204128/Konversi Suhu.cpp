#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
	float cel, far, kel, ream;
	
	cout<<"Program Konversi Suhu "<<endl;
	printf("Masukkan Suhu Celcius : \n");
	scanf("%g", &cel);
	
	far = (9.0/5.0*cel)+32;
	
	kel = cel+273.15;
	
	ream= cel*(4.0/5.0);
	
	
	printf("%g Celcius Dikonversi Menjadi : \n", cel);
	printf("%g Fahrenheit \n", far);
	printf("%g Kelvin \n", kel);
	printf("%g Reamur \n", ream);
	
	return 0;
	
}
