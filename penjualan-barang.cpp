#include <iostream>
#include <iomanip>
using namespace std;

// Struktur untuk menyimpan data barang
struct Barang {
    string nama;
    int harga;
};

// Daftar barang
Barang daftarBarang[5] = {
    {"Baju", 100000},
    {"Celana", 75000},
    {"Sepatu", 150000},
    {"Tas", 200000},
    {"Jam Tangan", 250000}
};

// Menampilkan daftar barang
void tampilDaftarBarang() {
    cout << " Daftar Barang Tersedia:\n";
    cout << "-----------------------------\n";
    cout << left << setw(5) << "No" << setw(15) << "Nama" << "Harga\n";
    cout << "-----------------------------\n";
    for (int i = 0; i < 5; i++) {
        cout << left << setw(5) << i + 1
             << setw(15) << daftarBarang[i].nama
             << "Rp. " << daftarBarang[i].harga << endl;
    }
    cout << "-----------------------------\n";
}

// Menghitung total harga berdasarkan indeks barang dan jumlah
int hitungTotalHarga(int indexBarang, int jumlahBarang) {
    return daftarBarang[indexBarang].harga * jumlahBarang;
}

int main() {
    int pilihanBarang, jumlahBarang;

    tampilDaftarBarang();

    // Input pilihan barang
    cout << "\nMasukkan nomor barang yang ingin dibeli (1-5): ";
    cin >> pilihanBarang;

    // Validasi input
    if (pilihanBarang < 1 || pilihanBarang > 5) {
        cout << " Nomor barang tidak valid!" << endl;
        return 1;
    }

    // Input jumlah barang
    cout << "Masukkan jumlah barang yang ingin dibeli     : ";
    cin >> jumlahBarang;

    // Hitung total harga
    int totalHarga = hitungTotalHarga(pilihanBarang - 1, jumlahBarang);

    // Output ringkasan transaksi
    cout << "\n🧾 Detail Transaksi\n";
    cout << "Barang     : " << daftarBarang[pilihanBarang - 1].nama << endl;
    cout << "Jumlah     : " << jumlahBarang << endl;
    cout << "Harga Satuan : Rp. " << daftarBarang[pilihanBarang - 1].harga << endl;
    cout << "Total Bayar  : Rp. " << totalHarga << endl;

    return 0;
}
