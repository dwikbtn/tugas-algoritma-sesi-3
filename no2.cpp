#include <iostream>
#include <string>

using namespace std;
int main() {
    int coding_score;
    string interview_score;
    string coding_result;
    string interview_result;

    // Meminta input dari user untuk nilai coding dan interview
    cout << "Masukkan nilai coding (0-100): ";
    cin >> coding_score;
    cout << "Masukkan nilai interview (A/B/C/D): ";
    cin >> interview_score;


    if (coding_score > 80) {
        coding_result = "LOLOS";
    } else if (coding_score >= 60) {
        coding_result = "DIPERTIMBANGKAN";
    } else {
        coding_result = "GAGAL";
    }

    // Menentukan hasil tes interview
    if (interview_score == "A" || interview_score == "B") {
        interview_result = "LOLOS";
    } else {
        interview_result = "GAGAL";
    }

    // Menampilkan hasil penerimaan calon programmer
    if ((coding_result == "LOLOS" || coding_result == "DIPERTIMBANGKAN") && interview_result == "LOLOS") {
        cout << "Selamat Kamu Berhasil Menjadi Calon Programmer" << endl;
    } else {
        cout << "Maaf Kamu Belum Berhasil Menjadi Calon Programmer" << endl;
    }

    return 0;
}