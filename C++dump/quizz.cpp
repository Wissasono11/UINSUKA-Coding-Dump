#include <iostream>
using namespace std;

int main(){
    string Tanaman[3] = {"Kaktus", "Teratai", "Tulip"};
    string Hewan[3] = {"Anjing", "Kucing", "Harimau"};
    string Kendaraan[3] = {"Mobil", "Motor", "Becak"};
    
    string kombinasi[9];

    for(int i = 0; i < 3; i++){
        kombinasi[i] = Tanaman[i];
        kombinasi[i + 3] = Hewan[i];
        kombinasi[i + 3] = Kendaraan[i];
    } 
    cout<<" Isi array setelah dikombinasi: "<<endl;
    for(int i = 0; i < 9; i++){
        cout<<kombinasi[i]<<endl;
    }
    return 0;
}