#include <iostream>
using namespace std;

main(){
  
int a = 0,b = 1;

do{
	cout<< a << " ";
	if (a >= 1){
		b = b * 2;
	}
	cout << b;
	cout << endl;
	a++;
}while(a <= 6);
return 0;


}





