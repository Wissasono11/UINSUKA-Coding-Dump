#include <iostream>
using namespace std;

void countSentence(string kalimat){
    int hitungKata[100] = {0};
    string kata[100][100];
    int maxLength = 0;

    string kataSementara = "";

    for(int i = 0; i < kalimat.length(); i++){
        if(kalimat[i] == ' '){
            if(!kataSementara.empty()){
                int panjang = kataSementara.length();

                kata[panjang][hitungKata[panjang]] = kataSementara;

                hitungKata[panjang]++;
                maxLength = (maxLength < panjang) ? panjang : maxLength;

                kataSementara = "";
            }
        }
        else{
            kataSementara += kalimat[i];
        }
    }

    // untuk mencetak hasil pengelompokkan kata
    if(!kataSementara.empty()){
        int panjang = kataSementara.length();

        kata[panjang][hitungKata[panjang]] = kataSementara;
        hitungKata[panjang]++;
        maxLength = (maxLength < panjang) ? panjang : maxLength;
    }
    // untuk mengelompokkan kata
    for (int i = 1; i <= maxLength; ++i){
        if(hitungKata[i] > 0){
            cout<<"Panjang Kata: "<<i<<" -> ";
            for (int j = 0; j < hitungKata[i]; ++j){
                cout<<kata[i][j]<<" ";
            }
            cout<<"\nJumlah kata: "<<hitungKata[i]<<endl;
        }
    }
}

int main(){
    string kalimat;

    cout<<"Masukkan kalimat: ";
    getline(cin, kalimat);

    countSentence(kalimat);

    return 0;
}