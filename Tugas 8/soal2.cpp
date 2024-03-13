#include <iostream>
using namespace std;


//tipedata
int n, r;

//prototype
int faktorial(int x);
int permutasi(int n, int r);
int kombinasi(int n, int r);

//method
int main ()
{              
        printf("--MENCARI PERMUTASI DAN KOMBINASI--\n\n");
        
        printf("Masukkan nilai n = ");
        cin>>n;
        printf("Masukkan nilai r = ");
        cin>>r;
		
		while(n<r){
			
		printf("\nNilai r Tidak Boleh Lebih Besar Dari Nilai n ! \n");
        cin>>n;
        printf("Masukkan nilai r = ");
        cin>>r;
		}
		
		printf("\nRUMUS Permutasi : P(n, r) = n! / (n-r)! \n");
        printf("%d data dipermutasikan %d = %d\n", n, r, permutasi(n,r));
        printf("\nRUMUS Kombinasi : C(n, r)=n!/r!(n-r)! \n");
        printf("%d data dikombinasikan %d = %d\n", n, r, kombinasi(n,r));
}

//faktorial (!)
int faktorial(int x){  
            int fak, i;
            fak = 1;
            for(i = 1; i<=x; i++)
            fak = fak * i;
            return(fak);
}

//permutasi(P)
int permutasi(int n, int r){
            int per, hasil ;
            hasil = n - r;
            per = faktorial(n) / faktorial(hasil);
            return(per);
}

//Kombinasi(C)
int kombinasi(int n, int r){  
            int kom, hasil;
            hasil = n - r;
            kom = faktorial(n) / faktorial(r) * faktorial(hasil);
            return(kom);
}

