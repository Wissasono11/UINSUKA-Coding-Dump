#include <iostream>
using namespace std; 

void polaSegitiga(int rows){
    for(int i = 0; i < rows; i++){
        for(int j = 0 ; j <= i; j++){
            cout <<"* ";
        }
        cout<<endl;
    }
}

int main(){
    int rows;
    rows = 5;

    polaSegitiga(5);

    return 0;
}