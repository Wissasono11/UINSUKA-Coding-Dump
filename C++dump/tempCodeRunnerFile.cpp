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