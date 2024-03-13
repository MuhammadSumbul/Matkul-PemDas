#include<iostream>

using namespace std;

float t;

int main(){
    int n, m;
    int x = 0;
    int y = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        if(i>=1){
            m = i % 4;
            if(m == 1){
            	x = m;
                cout<<i<<" "<<x<<" "<<y<<endl;
            } else if(m == 2){
            	x = m - 1;
				y = m - 1;   
                cout<<i<<" "<<x<<" "<<y<<endl;
            } else if( m == 3){
            	x = m - 2;
				y = m - 1;
                cout<<i<<" "<<x<<" "<<y<<endl;
            } else if( m == 0){
            	x = m;
				y = m + 2;
                cout<<i<<" "<<x<<" "<<y<<endl;
            }
        } else{
            cout<< i <<" "<< x <<" "<< y <<endl;
        }
    }
}


