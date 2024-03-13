#include <iostream>
#include <conio.h>
 
using namespace std;
int permutasi(int n,int r){

    int nfak=1, nrfak=1; 
    for(int i=n; i>0; i--){       // n faktorial
        nfak=nfak*i;
    }
     
    for(int i=n-r; i>0; i--){     // n-r faktorial
        nrfak=nrfak*i;
    }
	return nfak/nrfak;
}

int kombinasi(int n,int r){
	int nfak=1, rfak=1, nrfak=1;
	
    for(int i=n; i>0; i--){       // n faktorial
            nfak=nfak*i;
    }
     
    for(int i=n-r; i>0; i--){     // n-r faktorial
            nrfak=nrfak*i;
    }
         
    for(int i=r; i>0; i--){           // r faktorial
            rfak=rfak*i;
    }
	return nfak/(rfak*nrfak);
}
 
int main(){
    int n, r;
    int nfak=1, nrfak=1;
     
    cout<<"MENCARI PERMUTASI dan KOMBINASI"<<endl;
    cout<<"----------------------------------"<<endl;
    cout<<"Masukkan n : ";
    cin>>n;
     
    cout<<"Masukkan r : ";
    cin>>r;
     
    //cek apabila r > n
    while (n<r){
          cout<<"\nr tidak boleh lebih besar dari n";
          cout<<"\nMasukkan n : ";
          cin>>n;
     
          cout<<"Masukkan r : ";
          cin>>r;
    }
  	
  	int hasilPermutasi = permutasi(n,r);
  	int hasilKombinasi = kombinasi(n,r);
 
    cout<<"\nPermutasi r dari n unsur : "<<hasilPermutasi;     
	cout<<"\nKombinasi r dari n unsur : "<<hasilKombinasi;
    getch();
    return 0;
}
