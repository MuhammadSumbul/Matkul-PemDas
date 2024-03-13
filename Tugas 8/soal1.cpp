#include <iostream>
using namespace std;

int banding(int a,int b);

int main(){
	
	int a,b;
	
	cout<<"Masukkan Bilangan Pertama : ";
	cin>>a;
	cout<<"Masukkan Bilangan Kedua : ";
	cin>>b;
	
	cout<<endl;
	cout<<"Bilang Terbesar Adalah : "<<banding(a,b);

}

int banding(int a,int b){
	return (a < b) ? b : a;
}

