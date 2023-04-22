#include <iostream>
using namespace std;

int main() {
   int lari, pushUp, plank;
   int totalKalori = 0;

   cout << "Masukkan berapa kali Anda berlari: ";
   cin >> lari;

   cout << "Masukkan berapa kali Anda melakukan push-up: ";
   cin >> pushUp;

   cout << "Masukkan berapa kali Anda melakukan plank: ";
   cin >> plank;

   // Menghitung kalori yang terbakar dari olahraga lari
   totalKalori += lari * (60/5);

   // Menghitung kalori yang terbakar dari olahraga push-up
   totalKalori += pushUp * (200/30);

   // Menghitung kalori yang terbakar dari olahraga plank
   totalKalori += plank * 5;

   cout << "Jumlah kalori yang terbakar adalah: " << totalKalori << " kalori";

   return 0;
}