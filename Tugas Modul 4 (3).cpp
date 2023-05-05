
int main() {
    int pilihan;
    while (true) {
        print_menu();
        cout << "Pilih jenis buku yang ingin dibeli: ";
        cin >> pilihan;
        if (pilihan == 1) {
            Buku novel;
            novel.jenis_buku = "Novel";
            novel.harga_buku = 75000;
            beli_buku(novel);
        } else if (pilihan == 2) {
            Buku pelajaran;
            pelajaran.jenis_buku = "Buku Pelajaran";
            pelajaran.harga_buku = 100000;
            beli_buku(pelajaran);
        } else if (pilihan == 3) {
            Buku agama;
            agama.jenis_buku = "Buku Agama";
            agama.harga_buku = 50000;
            beli_buku(agama);
        } else if (pilihan == 4) {
            Buku komik;
            komik.jenis_buku = "Buku Komik";
            komik.harga_buku = 90000;
            beli_buku(komik);
        } else if (pilihan == 5) {
            cout << "Terima kasih telah menggunakan program ini!" << endl;
            break;
        } else {
            cout << "Pilihan tidak valid, silakan coba lagi." << endl;
        }
    }
return 0; }
