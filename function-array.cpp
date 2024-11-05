#include <iostream>
using namespace std;

int cariElemen(int arr[], int ukuran, int elemenDicari){
    for(int i =0; i < ukuran; i++){
        if(arr[i] == elemenDicari){
            return 1;
        }
    }
    return -1;
}

int main(){
    int angka[] = {5, 10, 15, 20, 25, 30};
    int ukuran = sizeof(angka) / sizeof(angka[0]);

    int elemenDicari;
    cout<<"Masukkan elemen yang ingin dicari: ";
    cin>>elemenDicari;

    int indeks = cariElemen(angka, ukuran, elemenDicari);

    if(indeks != -1){
        cout<<" Elemen "<<elemenDicari << " ditemukan di indeks: "<<indeks<<endl;
    } else{
        cout<<" Elemen "<<elemenDicari << " tidak ditemukan dalam array. "<<endl;
    }
    return 0;
}