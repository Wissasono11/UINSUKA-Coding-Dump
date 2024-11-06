#include<iostream>
using namespace std;

int main(){
    for(int i = 1; i <= 10; i++){
        if(i == 6) break;
    cout<<" Angka: "<<i<<endl;
    }
    cout<<"Loop berhenti ketika i = 6."<<endl;
    return 0;
}