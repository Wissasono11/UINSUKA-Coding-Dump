#include <iostream>
using namespace std;

bool cariNama(int jumlahOrang, string namaDiCari){
    string nama;

    for(int i = 0; i < jumlahOrang; i++){
        cout<<" Masukkan nama orang ke- "<<(i + 1)<<": ";
        cin>>nama;

        if(nama == namaDiCari){
            return true;
        }
    }
    return false;
}

int main(){
    int jumlahOrang;
    string namaDiCari;

    cout<<" Masukkan jumlah orang: ";
    cin>>jumlahOrang;

    cout<<" Masukkan nama yang ingin dicari: ";
    cin>>namaDiCari;

    bool ditemukan = cariNama(jumlahOrang, namaDiCari);

    if(ditemukan){
        cout<<" Nama "<<namaDiCari<<" ditemukan dalam daftar! "<<endl;
    }
    else{
        cout<<" Nama "<<namaDiCari<<" tidak ditemukan dalam daftar. "<<endl;
    }
    return 0;
}