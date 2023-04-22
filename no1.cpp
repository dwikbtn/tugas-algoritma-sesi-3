#include <iostream>
#include <string>

using namespace std;
int main() {
    // Input data dari user
    string nama, tempat_tinggal, pangkat;
    int umur;
    double tabungan;

    cout << "Masukkan nama: ";
    getline(cin, nama); // getline() untuk mengambil input string (dengan spasi)

    cout << "Masukkan umur mafia: ";
    cin >> umur;
    cin.ignore(); // cin.ignore() untuk mengabaikan karakter newline

    cout << "Masukkan tempat tinggal Mafia (Nevada, New York, Havana, New Jersey, Manhattan, California, Detroit, Boston): ";
    getline(cin, tempat_tinggal); // getline() untuk mengambil input string (dengan spasi)

    cout << "Masukkan jumlah tabungan Anda dalam dollar: ";
    cin >> tabungan;

     // Analisa data untuk menentukan pangkat
    if (umur > 40 && (tempat_tinggal == "Nevada" || tempat_tinggal == "New York" || tempat_tinggal == "Havana") && tabungan > 10000000) {
        pangkat = "Don";
    } else if (umur >= 25 && umur <= 40 && (tempat_tinggal == "New Jersey" || tempat_tinggal == "Manhattan" || tempat_tinggal == "Nevada") && tabungan >= 1000000 && tabungan <= 2000000) {
        pangkat = "Underboss";
    } else if (umur >= 18 && umur <= 24 && (tempat_tinggal == "California" || tempat_tinggal == "Detroit" || tempat_tinggal == "Boston") && tabungan < 1000000) {
        pangkat = "Capo";
    } else {
        cout << nama << " tidak mencurigakan." << endl;
        return 0;
    }

     // Output hasil analisa
    cout << nama << " kemungkinan adalah seorang anggota mafia dengan pangkat " << pangkat << "." << endl;

    return 0;
}