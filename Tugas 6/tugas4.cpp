#include <iostream>
using namespace std;

string kata1[10];
string kata2[10];	

int main(){
	
	kata1[0] = "Kelas";
	kata1[1] = "TIC";
	kata1[2] = "2022";
	
	copy(kata1, kata1 + 10, kata2);
	
	cout<<"Array kata 1 : "<<endl;
	cout<<kata1[0]<<" "<<kata1[1]<<" "<<kata1[2]<<endl<<endl;
	cout<<"Array kata 2 : "<<endl;
	cout<<kata2[0]<<" "<<kata2[1]<<" "<<kata2[2];
	
	return 0;
}
