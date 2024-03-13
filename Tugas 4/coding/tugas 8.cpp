#include <iostream>
using namespace std;

float tugas, partisipasi, uas, uts, nilai;
int bt, bp, buas, buts, nilai_bobot;
main(){
 cout<<"Masukkan Nilai Tugas : "<<endl;
 cin>>tugas;	
 cout<<"Masukkan Bobot Tugas : "<<endl;
 cin>>bt;
 
 cout<<"Masukkan Nilai Partisipasi : "<<endl;
 cin>>partisipasi;	
 cout<<"Masukkan Bobot Partisipasi : "<<endl;
 cin>>bp;
 
 cout<<"Masukkan Nilai UTS : "<<endl;
 cin>>uts;	
 cout<<"Masukkan Bobot UTS : "<<endl;
 cin>>buts;
 
 cout<<"Masukkan Nilai UAS : "<<endl;
 cin>>uas;	
 cout<<"Masukkan Bobot UAS : "<<endl;
 cin>>buas;

 
nilai = (tugas*(bt/100))+(partisipasi*(bp/100))+(uas*(buas/100))+(uts*(buas/100));
nilai_bobot = bt+bp+buas+buts;



if(nilai_bobot == 100){
	if(nilai >=0 && nilai <= 40){
		cout<<"Grade Nilai Anda : E"<<endl;
	}else if(nilai >=41 && nilai <= 50){
		cout<<"Grade Nilai Anda : D"<<endl;
	}else if(nilai >=51 && nilai <= 70){
		cout<<"Grade Nilai Anda : C"<<endl;
	}else if(nilai >=71 && nilai <= 87){
		cout<<"Grade Nilai Anda : B"<<endl;
	}else if(nilai >=88 && nilai <= 100){
		cout<<"Grade Nilai Anda : A"<<endl;
	}
}else{
	printf("Maaf Nilai Bobot keseluruhan Anda Kurang/Lebih Dari 100 persen");
}

return 0;
 
}
