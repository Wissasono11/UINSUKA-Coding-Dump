#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;

class BarangFaktur {
public:
    string nama;
    int qty;
    string satuan;
    string batch_ed;
    double harga;
    double disc;
    
    BarangFaktur(string n, int q, string s, string b, double h, double d)
        : nama(n), qty(q), satuan(s), batch_ed(b), harga(h), disc(d) {}
    
    double getSubtotal() const {
        return qty * harga * (1 - disc/100);
    }
};

class Faktur {
private:
    string noSuratIzin;
    string alamatApotek;
    string telp;
    string email;
    string website;
    
    string namaPelanggan;
    string noTelpPelanggan;
    string alamatPelanggan;
    
    string kasir;
    string tanggal;
    string noFaktur;
    string pembayaran;
    
    vector<BarangFaktur> daftarBarang;
    
    double hitungTotal() const {
        double total = 0;
        for (const auto& barang : daftarBarang) {
            total += barang.getSubtotal();
        }
        return total;
    }
    
    double hitungPajak() const {
        return hitungTotal() * 0.1; // Asumsi pajak 10%
    }

public:
    Faktur(string nsi, string aa, string t, string e, string w,
           string np, string ntp, string ap,
           string k, string tgl, string nf, string p)
        : noSuratIzin(nsi), alamatApotek(aa), telp(t), email(e), website(w),
          namaPelanggan(np), noTelpPelanggan(ntp), alamatPelanggan(ap),
          kasir(k), tanggal(tgl), noFaktur(nf), pembayaran(p) {}
    
    void tambahBarang(const BarangFaktur& barang) {
        daftarBarang.push_back(barang);
    }
    
    void cetakFaktur() const {
        cout << "Nama: Bayu Wicaksono"<<endl;
        cout << "NIM: 23106050002"<<endl;
        cout << "======================================="<<endl;
        
        cout << "APOTEK Demo" << endl;
        cout << "No. Surat Izin Apotek: " << noSuratIzin << endl;
        cout << alamatApotek << endl;
        cout << "Telp. " << telp << ", Email: " << email << ", Website: " << website << endl;
        cout << endl;
        cout << "FAKTUR" << endl;
        cout << "=======================================" << endl;
        cout << "Nama Pelanggan : " << namaPelanggan << endl;
        cout << "No. Telp       : " << noTelpPelanggan << endl;
        cout << "Alamat         : " << alamatPelanggan << endl;
        cout << "Kasir          : " << kasir << endl;
        cout << "Tanggal        : " << tanggal << endl;
        cout << "No. Faktur     : " << noFaktur << endl;
        cout << "Pembayaran     : " << pembayaran << endl;
        cout << "=======================================" << endl;
        cout << left << setw(5) << "No" 
             << setw(20) << "Nama Barang" 
             << setw(5) << "Qty" 
             << setw(10) << "Satuan"
             << setw(20) << "Batch & ED"
             << setw(10) << "Harga" 
             << setw(5) << "Disc" 
             << setw(10) << "Subtotal" << endl;
        
        int no = 1;
        for (const auto& barang : daftarBarang) {
            cout << left << setw(5) << no++
                 << setw(20) << barang.nama
                 << setw(5) << barang.qty
                 << setw(10) << barang.satuan
                 << setw(20) << barang.batch_ed
                 << setw(10) << barang.harga
                 << setw(5) << barang.disc
                 << setw(10) << barang.getSubtotal() << endl;
        }
        
        cout << "=======================================" << endl;
        cout << "Total    : " << hitungTotal() << endl;
        cout << "Diskon   : 0" << endl;
        cout << "Pajak    : " << hitungPajak() << endl;
        cout << "Grand Total : " << hitungTotal() + hitungPajak() << endl;
        
        cout << endl << "Catatan: Terimakasih Telah berkunjung semoga sehat selalu" << endl;
        cout << "         Maaf, barang yang sudah dibeli tidak dapat ditukar atau dikembalikan" << endl;
    }
};

int main() {
    Faktur faktur("503/00686/DPM-PTSP/kes/XII/2018", "tangerang , Kab. Tangerang", 
                  "08125457845", "support@vmedis.com", "vmedis.com",
                  "Firman Syah", "082121344570", "Jl. Tambak medokan ayu 3c No.23",
                  "afif (taufiq rohman)", "07 October 2021 10:55:02", "PJ2110070001", "TUNAI");
    
    faktur.tambahBarang(BarangFaktur("Bodrex Flu", 2, "Ampul", "(ED 2021-05-10)", 1000, 0));
    faktur.tambahBarang(BarangFaktur("VITAMIN C 50 MG KF 10 TABLET", 3, "Strip", "JB0163B1 (ED 2021-09-30)", 2500, 0));
    faktur.tambahBarang(BarangFaktur("Paracetamol Ekstra 20mg", 5, "Pcs", "A1 (ED 2022-04-07)", 12000, 0));
    
    faktur.cetakFaktur();
    
    return 0;
}