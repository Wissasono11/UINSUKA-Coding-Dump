#include <iostream>
using namespace std;

int main(){
    string gope = "II";
    int gaji = 5000000;
    float tunjanak = 0.10;
    float tunjasu = 0.15;

    int total = gaji + (gaji * tunjanak) + (gaji * tunjasu);
    
    cout <<" Golongan Pegawai: "<< gope <<endl;
    cout <<" Gaji Pokok: "<< gaji <<endl;
    cout <<" Tunjangan Anak: "<< tunjanak <<endl;
    cout <<" Tunjangan Suami: "<< tunjasu <<endl;
    cout <<" Total Gaji: "<< total <<endl;

    return 0;
}