#include<iostream>
using namespace std;

int n;
int f_n1=0, f_n2=1, f_n3=0;

int main(){ 
//f_n3 = f_n1 + f_n2
cout<<"-> Program Deret Fibonacci ! <- \n  "<<endl;
cout<<"Masukkan Nilai Ke-n : ";
cin>>n;

f_n3 = f_n1 + f_n2;

cout<<f_n2<<" ";

	while (f_n3<=n){
		cout<<f_n3<<" ";
		f_n1 = f_n2;
		f_n2 = f_n3;
		f_n3 = f_n1 + f_n2;
	
		
	}
	return 0;
}
