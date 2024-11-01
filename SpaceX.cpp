#include <iostream>
#include <iomanip> // Untuk std::setprecision
using namespace std;

void jualPulsa(int pilihan, double bayar) {
    double harga;
    const double PPN = 0.1; // PPN 10%

    // Menentukan harga berdasarkan pilihan pulsa
    switch (pilihan) {
        case 1:
            cout << "Anda memilih pulsa 10.000" << endl;
            harga = 10000;
            break;
        case 2:
            cout << "Anda memilih pulsa 20.000" << endl;
            harga = 20000;
            break;
        case 3:
            cout << "Anda memilih pulsa 50.000" << endl;
            harga = 50000;
            break;
        case 4:
            cout << "Anda memilih pulsa 100.000" << endl;
            harga = 100000;
            break;
        default:
            cout << "Pilihan tidak valid!" << endl;
            return;
    }

    // Menghitung total harga termasuk PPN
    double totalHarga = harga + (harga * PPN);
    cout << fixed << setprecision(2);
    cout << "Total harga (termasuk PPN): " << totalHarga << " IDR" << endl;

    // Menghitung kembalian
    if (bayar < totalHarga) {
        cout << "Uang tidak cukup!" << endl;
    } else {
        double kembalian = bayar - totalHarga;
        cout << "Kembalian: " << kembalian << " IDR" << endl;
    }
}

int main() {
    int pilihan;
    double bayar;

    // Menampilkan menu pilihan pulsa
    cout << "Pilih jenis pulsa:" << endl;
    cout << "1. Pulsa 10.000" << endl;
    cout << "2. Pulsa 20.000" << endl;
    cout << "3. Pulsa 50.000" << endl;
    cout << "4. Pulsa 100.000" << endl;
    cout << "Masukkan pilihan Anda (1-4): ";
    cin >> pilihan;

    // Meminta jumlah uang yang dibayar
    cout << "Masukkan jumlah uang yang dibayar: ";
    cin >> bayar;

    // Memproses transaksi
    jualPulsa(pilihan, bayar);

    return 0;
}
