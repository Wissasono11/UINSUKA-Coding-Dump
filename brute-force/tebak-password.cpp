#include <iostream>
#include <string>

using namespace std;

string tebakPassword(const string& benar) {
    // Mencoba semua kemungkinan kombinasi 3 digit -> dari 0 - 9
    for (int digit1 = 0; digit1 < 10; ++digit1) {
        for (int digit2 = 0; digit2 < 10; ++digit2) {
            for (int digit3 = 0; digit3 < 10; ++digit3) {
                // Membuat kombinasi password
                string tebakan = to_string(digit1) + to_string(digit2) + to_string(digit3);
                
                cout << "Mencoba: " << tebakan << endl;
                
                // Memeriksa apakah password cocok
                if (tebakan == benar) {
                    return "Password ditemukan: " + tebakan;
                }
            }
        }
    }
    
    return "Password tidak ditemukan";
}

int main() {
    string password = "123";
    string hasil = tebakPassword(password);
    cout << hasil << endl;
    return 0;
}
