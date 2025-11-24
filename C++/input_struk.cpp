#include <iostream>
using namespace std;

int main() {
    string nama = "x";
    float harga = 0.0;
    int jumlah = 0;
    float diskon = 0.0;

    cout << "Masukkan nama barang: ";
    cin >> nama;
    cout << "Masukkan harga barang: ";
    cin >> harga;
    cout << "Masukkan jumlah beli: ";
    cin >> jumlah;
    

    float total = harga * jumlah;

    if (total > 15200) {
        diskon = total * 0.02;
    }
    else {
        diskon = 0;
    }

    float total_bayar = total - diskon;

    cout << "===== STRUK PEMBELIAN =====" << endl;
    cout << "Nama Barang   : " << nama << endl;
    cout << "Harga satuan  : Rp " << harga << endl;
    cout << "Jumlah Beli   : " << jumlah << " pcs" << endl;
    cout << "Total Harga   : Rp " << total << endl;
    cout << "Diskon        : Rp " << diskon << endl;
    cout << "Total Bayar   : Rp " << total_bayar << endl;
    cout << "===========================" << endl;
    return 0;
}