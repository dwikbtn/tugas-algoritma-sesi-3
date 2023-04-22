#include <iostream>

using namespace std;

int main() {
    int number;

    // Meminta input nomor punggung dari user
    cout << "Masukkan nomor punggung pemain: ";
    cin >> number;

    // Menentukan posisi berdasarkan nomor punggung
    if (number % 2 == 0) {
        if (number >= 50 && number <= 100) {
            cout << "Nomor punggung ini bisa digunakan untuk posisi \"capten team\" dan \"target attacker\"" << endl;
        } else {
            cout << "Nomor punggung ini bisa digunakan untuk posisi \"target attacker\"" << endl;
        }
    } else {
        if (number % 3 == 0 && number % 5 == 0) {
            cout << "Nomor punggung ini bisa digunakan untuk posisi \"keeper\"" << endl;
        } else if (number > 90) {
            cout << "Nomor punggung ini bisa digunakan untuk posisi \"Playmaker\"" << endl;
        } else {
            cout << "Nomor punggung ini bisa digunakan untuk posisi \"defender\"" << endl;
        }
    }

    return 0;
}