#include<iostream>
using namespace std;

void kombinasiArray(string arr1[], string arr2[], string arr3[], string value[], int size){
    for(int i = 0; i < size; i++){
        value[i] = arr1[i];
        value[i + size] = arr2[i];
        value[i + size * 2] = arr3[i];
    }  
}

void setelahKombinasi(string arr[], int size){
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<endl;
    }
}

int main(){
    string Tanaman[3] = {"Kaktus", "Teratai", "Tulip"};
    string Hewan[3] = {"Anjing", "Kucing", "Harimau"};
    string Kendaraan[3] = {"Mobil", "Motor", "Becak"};
    string kombinasi[9];

    kombinasiArray(Tanaman, Hewan, Kendaraan, kombinasi, 3);

    cout<<"Isi array selelah dikombinasi: "<<endl;
    setelahKombinasi(kombinasi, 9);
}