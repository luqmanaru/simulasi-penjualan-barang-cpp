# simulasi-penjualan-barang-cpp
Program C++ simulasi transaksi penjualan barang menggunakan struct dan fungsi

---

Program C++ sederhana untuk mensimulasikan transaksi penjualan barang menggunakan `struct`, array, dan fungsi. Program ini memungkinkan pengguna memilih jenis barang dari daftar, memasukkan jumlah barang yang ingin dibeli, dan menghitung total harga yang harus dibayar.

---

## 📌 Fitur
- Daftar barang otomatis ditampilkan di awal
- Menggunakan `struct` untuk menyimpan nama barang dan harga
- Fungsi untuk menampilkan daftar barang
- Fungsi untuk menghitung total harga
- Output berupa ringkasan transaksi

---

## 💻 Struktur Data

```cpp
struct Barang {
    string nama;
    int harga;
};
```

## 🔧 Fungsi

```cpp
void tampilDaftarBarang();
int hitungTotalHarga(string namaBarang, int jumlahBarang);
```

---

## 💡 Contoh Output

Daftar Barang :
1. Baju          -> Rp. 100000
2. Celana        -> Rp. 75000
3. Sepatu        -> Rp. 150000
4. Tas           -> Rp. 200000
5. Jam Tangan    -> Rp. 250000

Masukkan nama barang yang akan dibeli      : Baju
Masukkan jumlah barang yang akan dibeli    : 2

Total harga yang harus dibayar : Rp. 200000

---

**luqmanaru**

Program ini ditulis sebagai studi kasus simulasi transaksi penjualan sederhana menggunakan bahasa C++.
