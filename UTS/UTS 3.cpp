#include <iostream>
using namespace std;

int main (){
    int t;
     cin >> t;
    while(t--){
        int n;
        float per;
        cin >> n >> per;
        int batas;
        cin >> batas;
        int penentu = 0;
        for(int i=0;i<n;i++){
            int x;
            cin >> x;
            if(x>= batas){
                penentu++;
            }
        }
        int a = n*per;
        cout << penentu << endl;
        cout << a << endl;


        if(penentu>=a){
            cout << "Kelas dilanjutkan" << endl;
    }   else{
            cout << "Kelas dihentikan" << endl;
        }
    }
}
