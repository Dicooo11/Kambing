#include <iostream>
#include <string>

using namespace std;

struct Kambing {
    string nama;
    double berat;
    double tinggi;
    double panjang;
};

void tampilkanInformasi(const Kambing& kambing) {
    cout << "Kambing Pak Slamet " << endl;
    cout << "Nama: " << kambing.nama << endl;
    cout << "Berat: " << kambing.berat << " kg" << endl;
    cout << "Tinggi: " << kambing.tinggi << " cm" << endl;
    cout << "Panjang: " << kambing.panjang << " cm" << endl;
    cout << "------------------------" << endl;
}

int main() {
    
    Kambing kambingAwal = {"budi", 20.5, 80.0, 100.0};

    cout << "Informasi Kambing Awal:" << endl;
    tampilkanInformasi(kambingAwal);

    for (int bulan = 1; bulan <= 12; ++bulan) {
        
        kambingAwal.berat += 1.5;
        kambingAwal.tinggi += 0.5;
        kambingAwal.panjang += 1.0;

        cout << "Informasi Setelah Bulan ke-" << bulan << ":" << endl;
        tampilkanInformasi(kambingAwal);
    }

    cout << "Kambing terjual atau mati setelah 1 tahun." << endl;

    return 0;
}