#include <iostream>
using namespace std;

int main(){
	string nama;
	
	float NT1, NT2, NT3, NT4, NT5, average;
	
	cout<<"Nama Mahasiswa: ";
	getline(cin, nama);
	cout<<"Nilai Tugas 1: ";
	cin>>NT1;
	cout<<"Nilai Tugas 2: ";
	cin>>NT2;
	cout<<"Nilai Tugas 3: ";
	cin>>NT3;
	cout<<"Nilai Tugas 4: ";
	cin>>NT4;
	cout<<"Nilai Tugas 5: ";
	cin>>NT5;
	
	average = (NT1 + NT2 + NT3 + NT4 + NT5) / 5;
	
	cout<<"Mahasiswa yang bernama "<<nama<<" Memperoleh nilai rata-rata tugas "<<average;
	
}
