#include <iostream>
using namespace std;

float t , n ;

int main(){
    int t, n, m;
    cout<<"Masukkan n :";
    cin >> n;
    cout<<"Masukkan t :";
    cin >> t;
    cout<<"Siklus musim tinggi"<<endl;
    for(int i = 0; i <= n; i++){
        if(i>=1){
            m = i % 4;
            if(m == 1){
                t = t * 2;
                cout<<i<<" semi "<<t<<endl;
            } else if(m == 2){
                t = t + 1;
                cout<<i<<" panas "<<t<<endl;
            } else if( m == 3){
                t = t + 1;
                cout<<i<<" gugur "<<t<<endl;
            } else if( m == 0){
                t = t + (t * 0.5);
                cout<<i<<" dingin "<<t<<endl;
            }
        } else{
            cout<< i << " - "<<t<<endl;
        }
    }
    cout<<"Jawaban : "<<t;
} 

