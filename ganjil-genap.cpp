#include <iostream>
using namespace std;

int main(){
    int angka;
    
    cout<<" Masukkan sebuah angka: ";
    cin>>angka;

    if(angka % 2 == 0){
        cout<<" Angka genap. "<<endl;
    }
    else{
        cout<<" Angka ganjil."<<endl;
    }
    return 0;
}