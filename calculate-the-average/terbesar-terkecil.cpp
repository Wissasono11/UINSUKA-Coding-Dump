//mencari nilai terbesar dan terkecil dari inputan nilai tugas 

#include <iostream>
using namespace std;

int main(){
    int t1, t2, t3, t4, t5;
    
    cout<<" Masukkan nilai tugas-1: ";
    cin>>t1;
    cout<<" Masukkan nilai tugas-2: ";
    cin>>t2;
    cout<<" Masukkan nilai tugas-3: ";
    cin>>t3; 
    cout<<" Masukkan nilai tugas-4: ";
    cin>>t4;
    cout<<" Masukkan nilai tugas-5: ";
    cin>>t5;

    //mencari nilai terbesar
    if (t1 > t2 && t1 > t3 && t1 > t4 && t1 > t4 && t1 > t5){
        cout<<"\nNilai terbesar adalah tugas 1";
    }
    else if (t2 > t1 && t2 > t3 && t2 > t4 && t2 > t5){
        cout<<"Nilai terbesar adalah tugas 2";
    }
    else if (t3 > t1 && t3 > t2 && t3 > t4 && t3 > t5){
        cout<<"\nNilai terbesar adalah tugas 3";
    }
    else if(t4 > t1 && t4 > t2 && t4 > t3 && t4 > t5){
        cout<<"\nNilai terbesar adalah tugas 4";
    }
    else if (t5 > t1 && t5 > t2 && t5 > t3 && t5 > t4){
        cout<<"\nNilai terbesar adalah tugas 5";
    }
    else{
        cout<<"\nSalah satu nilai sama besar";
    }

   //mencari nilai terkecil
   if (t1 < t2 && t1 < t3 && t1 < t4 && t1 < t4 && t1 < t5){
        cout<<"\nNilai terkecil adalah tugas 1";
    }
    else if (t2 < t1 && t2 < t3 && t2 < t4 && t2 < t5){
        cout<<"\nNilai terkecil adalah tugas 2";
    }
    else if (t3 < t1 && t3 < t2 && t3 < t4 && t3 < t5){
        cout<<"\nNilai terkecil adalah tugas 3";
    }
    else if(t4 < t1 && t4 < t2 && t4 < t3 && t4 < t5){
        cout<<"\nNilai terkecil adalah tugas 4";
    }
    else if (t5 < t1 && t5 < t2 && t5 < t3 && t5 < t4){
        cout<<"\nNilai terkecil adalah tugas 5";
    }
    else{
        cout<<"\nSalah satu nilai sama kecil";
    } 
}