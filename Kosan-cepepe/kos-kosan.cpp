/*
membuat program kos kosan. terdiri beberapa kamar. 
setiap kamar memiliki nama (alamat). 
setiap kamar memiliki penghuni. 
setiap penghuni kamar punya nama. 
dalam beberapa waktu sering berganti penghuni. 
silahkan disusun coding menurut rekayasa skenario masing masing.
*/

// kumpulan library
#include <iostream> 
#include <iomanip> //  untuk merapikan tanda titik dua
#include <cstdlib> // untuk menyediakan fungsi utilitas termasuk random atau rand()
#include <ctime> // untuk memanggil fungsi time()
using namespace std;

// fungsi untuk mengacak elemen penghuni kos
void shuffle (string resident[], int length){
    srand(static_cast<unsigned>(time(0))); // inisiasi untuk mengacak angka

    int randIndex = 0;
    for(int i = 0; i < length; i++){
        randIndex = rand() % length;
        swap(resident[i], resident[randIndex]);
    }
}
int main(){
    string nama = "Bayu Wicaksono";
    string nim = "23106050002";
    cout << left;
    cout<< setw(5) << "Nama" << ": " <<nama << endl;
    cout<< setw(5) << "NIM" << ": " <<nim << endl;
    cout<< "============================================================================================\n";

    string room[] = {"A", "B", "C", "D", "E"};
    string resident[] = {"Bayu", "Rizki", "Angga", "Syarif", "Dollare"};
    string* pRoom[5];  
    
    // menambahkan alamat pointer ke dalam masing-masing elemen variabel array room
    for (int i = 0; i < 5; i++){
        pRoom[i] = &room[i];
    }
    
    // versi awal
    cout<<"\nVersi awal: "<<endl;
    for(int i = 0; i < 5; i++){
        cout<<" Kamar yang tersedia adalah "<<room[i]
        <<" yang ber-alamat "<<pRoom[i]
        <<" dengan penghuni bernama "<<resident[i]
        <<endl;
    }

    // kondisi ketika Bayu dan Rizki berada di kamar yang bersebelahan
    if(resident[0] == "Bayu" && resident[1] == "Rizki"){
        cout<<"\nBayu tidak dapat tidur di kamar A,"
        <<" karena Rizki berada di kamar B" 
        <<" sering mengorok ketika tidur maka mereka berdua tidak akan bersebelahan.\n"<<endl;
    }

    // bertukar kamar dimana Bayu dan Rizki tidak bersebelahan
    swap(resident[0], resident[3]);

    cout<<"Setelah perubahan:"<<endl;
    for(int i = 0; i < 5; i++){
        cout<<" Kamar yang tersedia adalah "<<room[i]
        <<" yang ber-alamat "<<pRoom[i]
        <<" dengan penghuni bernama "<<resident[i]
        <<endl;
    }
 
    // tukeran kamar lagi
    shuffle (resident, 5);
    cout<<" \nMereka penasaran dengan kamar tetangga " 
        <<" mereka sehingga mereka berlima memilih " 
        <<" untuk bertukar kamar satu sama lain "<<endl;

    cout<<" \nKamar diacak lagi: "<<endl;
    for(int i = 0; i < 5; i++){
         cout<<" Kamar yang tersedia adalah "<<room[i]
        <<" yang ber-alamat "<<pRoom[i]
        <<" dengan penghuni bernama "<<resident[i]
        <<endl;
    }
    cout<<" \nProgram selesai ";
    return 0;
}