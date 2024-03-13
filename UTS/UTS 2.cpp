#include <iostream>
using namespace std;

int main(){
    double h = 20000;
    double d = 0.3;
    double m = 10000;
    double u = 50000;
    int i = 0;
    while(u >= h){
        // Batas harga minimum
        if(h < m){
            h = m;
        }

        u = u-h;

        // jika harga masih melebihi batas minimum
        if(h >= m){
            h = h-(h * d);
        }

        i++;
    }
    cout<<"Jumlah Barang Yang dapat dibeli: "<<i;
}
