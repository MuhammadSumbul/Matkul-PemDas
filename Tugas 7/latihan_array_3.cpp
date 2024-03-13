#include<iostream>
#include<string>

using namespace std;
int main()
{
	int n;
	string nama[10], status[10];
	int nilai [10];
	
	cout<<"-> Program Menghitung Nilai Mahasiswa Dengan Array <-"<<endl;
	cout<<"------------------------------------------------------"<<endl<<endl;
	
	cout<<"Masukkan Jumlah Data Mahasiswa Yang Ingin Diinput : ";
	cin>>n;
	cout<<endl;
	
	for (int i=0; i<n; i++)
	{
		cout<<endl;
		cout<<"Data ke-"<<i+1<<endl;
		cout<<"Masukkan Nama Mahasiswa : ";
		cin>>nama[i];
		cout<<"Masukkan Nilai Mahasiswa: ";
		cin>>nilai[i];
	
	if (nilai[i]<=50)
	{
		status[i]="Tidak lulus";
	}
	else {
		status[i]="lulus";
	} 
	}
	cout<<endl;
	cout<<"->DAFTAR KELULUSAN NILAI MAHASISWA<-"<<endl;
	cout<<"---------------------------------------------------"<<endl;
	
	for (int i=0; i<n; i++)
	{
		cout<<i+1<<" . "<<nama[i]<<" Mendapatkan Nilai : "<<nilai[i]<<" Dan Dinyatakan : "<<status[i]<<endl;	
	}
	
	cin.get();	
}
