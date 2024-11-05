#include<iostream>
#include<sstream>
using namespace std;

//function untuk membalikkan kata
string reverseWords(string word){
    int n = word.length();
    for(int i = 0; i < n /2 ; i++){
        swap(word[i], word[n - i - 1 ]);
    }
    return word;
}

// function untuk membalikkan kalimat
void reverseSetence(string kalimat){
    stringstream ss(kalimat);
    string word; 
    bool firstWord = true;

    // split atau membagi setiap kata menjadi kalimat 
    while(ss >> word){
        if(!firstWord){
            cout<<" ";
        }
        cout<<reverseWords(word);
        firstWord = false;
    }
    cout<<endl;
}

// program utama
int main(){
    string sentence;

    cout<<"====================="<<endl;
    cout<<"NIM: 23106050002"<<endl;
    cout<<"Nama: Bayu Wicaksono"<<endl;
    cout<<"====================="<<endl;

    cout<<"Masukkan kalimat: ";
    getline(cin, sentence);

    reverseWords(sentence);    

    cout<<"Kalimat setelah dibalik: "<<reverseWords(sentence)<<endl; 
}