#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <limits> // Untuk std::numeric_limits
using namespace std;

float areaOfCircle(float radius) {
    if (radius < 0) {
        cout << "Error: Jari-jari tidak boleh negatif." << endl;
        return -1; // Mengembalikan nilai tidak valid
    }
    return M_PI * pow(radius, 2);
}

float circumFerenceOfCircle(float radius) {
    if (radius < 0) {
        cout << "Error: Jari-jari tidak boleh negatif." << endl;
        return -1; // Mengembalikan nilai tidak valid
    }
    return 2 * M_PI * radius;
}

int main() {
    float radius;
    char opsi;

    cout << "==============================================" << endl;
    cout << "NAMA: BAYU WICAKSONO" << endl;
    cout << "NIM: 23106050002" << endl;
    cout << "==============================================" << endl;
    cout << "Program Menghitung Luas dan Keliling Lingkaran" << endl;

    do {
        cout << "==============================================" << endl;
        cout << "Masukkan jari-jari lingkaran: ";
        cin >> radius;

        // Memeriksa apakah input valid
        if (cin.fail()) {
            cin.clear(); // Menghapus flag kesalahan
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Mengabaikan input yang salah
            cout << "Error: Input tidak valid. Silakan masukkan angka." << endl;
        } else if (radius < 0) {
            cout << "Error: Jari-jari tidak boleh negatif." << endl;
        } else {
            cout << "==============================================" << endl;
            cout << "Pilih opsi perhitungan: " << endl;
            cout << "1. Menghitung Luas Lingkaran" << endl;
            cout << "2. Menghitung Keliling Lingkaran" << endl;
            cout << "3. Menghitung Luas dan Keliling Lingkaran" << endl;
            cout << "==============================================" << endl;

            int pilihan;
            cout << "Silahkan Masukkan Pilihan: ";
            cin >> pilihan;

            // Memeriksa apakah input valid untuk pilihan
            if (cin.fail()) {   
                cin.clear(); // Menghapus flag kesalahan
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Mengabaikan input yang salah
                cout << "Error: Input tidak valid. Silakan masukkan angka." << endl;
            } else {
                // Menggunakan operator ternary untuk menentukan output
                (pilihan == 1) ? cout << "Luas lingkaran dengan jari-jari " << radius << " adalah " << areaOfCircle(radius) << endl :
                (pilihan == 2) ? cout << "Keliling lingkaran dengan jari-jari " << radius << " adalah " << circumFerenceOfCircle(radius) << endl :
                (pilihan == 3) ? (cout << "Luas lingkaran dengan jari-jari " << radius << " adalah " << areaOfCircle(radius) << endl :
                pilihan == 4
                                  cout << "Keliling lingkaran dengan jari-jari " << radius << " adalah " << circumFerenceOfCircle(radius) << endl) :
                cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
            }
        }

        cout << "Apakah ingin mengulangi hitungan lagi (Y/N): ";
        cin >> opsi;
    } while (opsi == 'Y' || opsi == 'y');

    cout << "Terima kasih telah menggunakan program ini" << endl;
    return 0;
}