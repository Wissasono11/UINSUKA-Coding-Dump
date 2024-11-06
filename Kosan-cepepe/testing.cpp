#include <iostream>
#include <string>

using namespace std;

struct Penghuni {
    string nama;
};

struct Kamar {
    Penghuni* penghuni; // pointer ke penghuni kos
    int nomorKamar;
    
    Kamar() {
        penghuni = nullptr; // inisialisasi pointer kosong (kamar belum ada penghuni)
    }

    void setPenghuni(string namaPenghuni) {
        if (penghuni != nullptr) {
            delete penghuni; // jika sudah ada penghuni, hapus sebelumnya
        }
        penghuni = new Penghuni; // alokasikan memori baru untuk penghuni baru
        penghuni->nama = namaPenghuni;
    }

    void kosongkanKamar() {
        if (penghuni != nullptr) {
            delete penghuni;
            penghuni = nullptr;
        }
    }

    void tampilkanInfo() {
        if (penghuni != nullptr) {
            cout << "Kamar " << nomorKamar << " dihuni oleh " << penghuni->nama << endl;
        } else {
            cout << "Kamar " << nomorKamar << " kosong" << endl;
        }
    }
};

int main() {
    const int jumlahKamar = 5;
    Kamar kos[jumlahKamar];

    // Inisialisasi nomor kamar
    for (int i = 0; i < jumlahKamar; i++) {
        kos[i].nomorKamar = i + 1;
    }

    // Set penghuni untuk beberapa kamar
    kos[0].setPenghuni("Andi");
    kos[1].setPenghuni("Budi");
    kos[2].setPenghuni("Citra");

    // Tampilkan info kamar dan penghuninya
    for (int i = 0; i < jumlahKamar; i++) {
        kos[i].tampilkanInfo();
    }

    cout << "\nPenghuni kamar 1 pindah, digantikan oleh Dian." << endl;
    kos[0].setPenghuni("Dian");

    cout << "\nPenghuni kamar 2 pindah, kamar sekarang kosong." << endl;
    kos[1].kosongkanKamar();

    // Tampilkan info setelah perubahan
    for (int i = 0; i < jumlahKamar; i++) {
        kos[i].tampilkanInfo();
    }

    return 0;
}
