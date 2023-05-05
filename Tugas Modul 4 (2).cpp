
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
