#include <iostream>
#include <string>

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
    
    BarangFaktur* daftarBarang[10];
    int jumlahBarang;
    
    double hitungTotal() const {
        double total = 0;
        for (int i = 0; i < jumlahBarang; i++) {
            total += daftarBarang[i]->getSubtotal();
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
          kasir(k), tanggal(tgl), noFaktur(nf), pembayaran(p), jumlahBarang(0) {}
    
    void tambahBarang(BarangFaktur* barang) {
        daftarBarang[jumlahBarang++] = barang;
    }
    
    void cetakFaktur() const {
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
        cout << "No  Nama Barang               Qty  Satuan     Batch & ED           Harga  Disc  Subtotal" << endl;
        
        for (int i = 0; i < jumlahBarang; i++) {
            const BarangFaktur* barang = daftarBarang[i];
            cout << i + 1 << "   " << barang->nama << "      " << barang->qty << "    "
                 << barang->satuan << "      " << barang->batch_ed << "    "
                 << barang->harga << "  " << barang->disc << "  " << barang->getSubtotal() << endl;
        }
        
        cout << "=======================================" << endl;
        cout << "Total        : " << hitungTotal() << endl;
        cout << "Pajak (10%)  : " << hitungPajak() << endl;
        cout << "Grand Total  : " << hitungTotal() + hitungPajak() << endl;
        
        cout << endl << "Catatan: Terimakasih Telah berkunjung semoga sehat selalu" << endl;
        cout << "         Maaf, barang yang sudah dibeli tidak dapat ditukar atau dikembalikan" << endl;
    }
};

int main() {
    Faktur faktur("503/00686/DPM-PTSP/kes/XII/2018", "Tangerang, Kab. Tangerang", 
                  "08125457845", "support@vmedis.com", "vmedis.com",
                  "Firman Syah", "082121344570", "Jl. Tambak Medokan Ayu 3C No.23",
                  "Afif (Taufiq Rohman)", "07 October 2021 10:55:02", "PJ2110070001", "TUNAI");
    
    faktur.tambahBarang(new BarangFaktur("Bodrex Flu", 2, "Ampul", "(ED 2021-05-10)", 1000, 0));
    faktur.tambahBarang(new BarangFaktur("VITAMIN C 50 MG KF 10 TABLET", 3, "Strip", "JB0163B1 (ED 2021-09-30)", 2500, 0));
    faktur.tambahBarang(new BarangFaktur("Paracetamol Ekstra 20mg", 5, "Pcs", "A1 (ED 2022-04-07)", 12000, 0));
    
    faktur.cetakFaktur();
    
    return 0;
}
