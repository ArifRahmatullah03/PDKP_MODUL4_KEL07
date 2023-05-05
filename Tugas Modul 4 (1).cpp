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
