#include<iostream>
using namespace std;
int main()
{
	int n;
	int data[n];
	cout<<"->Program memasukkan data pada array <-\n";
	cout<<"----------------------------------------------\n\n";
	cout<<"Masukkan jumlah data yang akan di inputkan : ";
	cin>>n;
	for(int i=0; i<n; i++)
	{ cout<<i+1<<". "<<"Masukkan Data :";
		cin>>data[i];
	}
	cout<<"----------------------------------------------\n";
	cout<<"-> Hasil data yang di inputkan adalah :\n";
	for(int i=0; i<n; i++)
	{
		cout<<"Angka Ke-"<<i+1<<" : "<<data[i]<<" "<<endl;
	}
	
	}
