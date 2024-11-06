#include <iostream>
using namespace std;

int main (){
    int angka;
    cout<<" Masukkan sebuah angka: ";
    cin>>angka; 

    if(angka > 0){
        cout<<" Angka positif. " <<endl;
    }
    else{
        cout<<" Angka negatif.";
    }
    return 0;
}