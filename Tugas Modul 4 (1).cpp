#include <iostream>
using namespace std;

class Buku {
    public:
        string jenis_buku;
        int harga_buku;
};

void print_menu() {
    cout << "Menu Pembelian Buku" << endl;
    cout << "1. Buku Novel" << endl;
    cout << "2. Buku Pelajaran" << endl;
    cout << "3. Buku Agama" << endl;
    cout << "4. Buku Komik" << endl;
    cout << "5. Keluar Program" << endl;
}

void print_invoice(int jumlah_buku, int total_harga) {
    cout << "================================" << endl;
    cout << "           INVOICE              " << endl;
    cout << "================================" << endl;
    cout << "Jumlah buku: " << jumlah_buku << endl;
    cout << "Total harga: Rp " << total_harga << endl;
    cout << "Terima kasih telah berbelanja!" << endl;
    cout << "================================" << endl;
}
int hitung_diskon(int total_harga) {
    int diskon = 0;
    if (total_harga >= 500000) {
        diskon = total_harga * 0.1;
    }
    return diskon;
}

int hitung_total_harga(int harga_buku, int jumlah_buku) {
    int total_harga = harga_buku * jumlah_buku;
    return total_harga;
}

void beli_buku(Buku buku) {
    int jumlah_buku;
    cout << "Harga " << buku.jenis_buku << ": Rp " << buku.harga_buku << endl;
    cout << "Jumlah " << buku.jenis_buku << " yang ingin dibeli: ";
    cin >> jumlah_buku;
    int total_harga = hitung_total_harga(buku.harga_buku, jumlah_buku);
    int diskon = hitung_diskon(total_harga);
    int total_harga_setelah_diskon = total_harga - diskon;
    print_invoice(jumlah_buku, total_harga_setelah_diskon);
}
