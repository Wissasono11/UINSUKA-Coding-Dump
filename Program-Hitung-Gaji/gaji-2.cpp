#include <iostream>
using namespace std;

int main(){
    string gope;
    int gaji;
    float tunjanak;
    float tunjasu;

    
    cout <<" Golongan Pegawai: ";
    cin >> gope;
    cout <<" Gaji Pokok: ";
    cin >> gaji;
    cout <<" Tunjangan Anak: ";
    cin >> tunjanak;
    cout <<" Tunjangan Suami: ";
    cin >> tunjasu;
    
    int total = gaji + (gaji * tunjanak) + (gaji * tunjasu);
    cout <<" Total Gaji: "<< total <<endl;

    return 0;
}