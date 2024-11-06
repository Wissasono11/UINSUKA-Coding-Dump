#include <iostream>
using namespace std;

int hitung(int a, int b){
        return a + b; 
}

int main(){
    int angka1, angka2, hasil;

    cout<<" Masukkan angka pertama: ";
    cin>>angka1;
    cout<<" Masukkan angka kedua: ";
    cin>>angka2;

    hasil = hitung(angka1, angka2);

    cout<<" Hasil penjumlahan "<<hasil<<endl;  
}
