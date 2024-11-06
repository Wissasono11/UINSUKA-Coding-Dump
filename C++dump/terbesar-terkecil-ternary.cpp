//mencari nilai terbesar dan terkecil dari inputan nilai tugas 

#include <iostream>
using namespace std;

int main(){
    float t1, t2, t3, t4, t5;
    
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

     // Mencari nilai terbesar menggunakan ternary operator
    int terbesar = (t1 > t2) ? ((t1 > t3) ? ((t1 > t4) ? ((t1 > t5) ? t1 : t5) : (t4 > t5 ? t4 : t5)) 
                                          : ((t3 > t4) ? (t3 > t5 ? t3 : t5) : (t4 > t5 ? t4 : t5)))
                            : ((t2 > t3) ? ((t2 > t4) ? (t2 > t5 ? t2 : t5) : (t4 > t5 ? t4 : t5)) 
                                          : ((t3 > t4) ? (t3 > t5 ? t3 : t5) : (t4 > t5 ? t4 : t5)));

    // Mencari nilai terkecil menggunakan ternary operator
    int terkecil = (t1 < t2) ? ((t1 < t3) ? ((t1 < t4) ? ((t1 < t5) ? t1 : t5) : (t4 < t5 ? t4 : t5)) 
                                          : ((t3 < t4) ? (t3 < t5 ? t3 : t5) : (t4 < t5 ? t4 : t5)))
                            : ((t2 < t3) ? ((t2 < t4) ? (t2 < t5 ? t2 : t5) : (t4 < t5 ? t4 : t5)) 
                                          : ((t3 < t4) ? (t3 < t5 ? t3 : t5) : (t4 < t5 ? t4 : t5)));

    float total = (t1 + t2 + t3 + t4 + t5) / 5; 
    cout << "\nNilai terbesar adalah: " << terbesar;
    cout << "\nNilai terkecil adalah: " << terkecil;
    cout << "\nRata-rata nilai keseluruhan adalah: " <<total;

    

    return 0;
}