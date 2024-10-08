#include <iostream>
#include <ctime>
#include <string>
#include <iomanip>

using namespace std;

void cetakJudul(string judul){
    int lebarLayar = 80;
    cout << setw((lebarLayar + judul.length()) / 2) << setfill(' ') << judul << endl;
    }
    

int main() {
    srand(time(0));
    string hadiah[4] = {"(jam tangan)", "(emas 10g)", "(sprei)","(zonk)"};
    
    int jawaban, konfirmasi;
    
   

    cetakJudul("============================================================");
    cetakJudul("Selamat Datang di Game Berhadiah");
    cetakJudul("============================================================");
    cout << endl;
    string nama;
    cout << "OWO: Perkenalkan saya OWO, Saya akan membimbing anda pada game kali ini\n";
    cout << "OWO: Halo peserta siapkah namamu? "; cin >> nama;
    cout << "OWO: Halo tuan " << nama << ", terimakasih telah hadir untuk mengikuti game kali ini.\n";
    cout << "OWO: Untuk mempersingkat waktu mari kita MULAI......!!!\n";

    cout << "OWO: Oke " << nama <<", di antara tangan saya dan sebuah box mana yang akan kamu pilih?\n";
    string pilihan1;
    cout << nama << ": "; cin >> pilihan1;
    while (pilihan1 != "tangan" && pilihan1 != "box") {
        cout << "OWO: sekali lagi tangan saya atau sebuah box mana yang akan kamu pilih?\n";
        cout << nama << ": "; cin >> pilihan1;
    }
    cout << "OWO : Apakah kamu yakin? ";
    string opsi1;
    cin >> opsi1;
    
    while (opsi1 == "tidak") {
        cout << "OWO: sekali lagi tangan saya atau sebuah box mana yang akan kamu pilih?\n";
        cout << nama << ": "; cin >> pilihan1;
        cout << "OWO : Apakah kamu yakin? ";
        cin >> opsi1;
    }
    cout << endl;
    cout << "OWO: Selanjutnya di antara " << pilihan1 << " dan kertas di kantong saya mana yang akan kamu pilih?\n";
    string pilihan2;
    cout << nama << ": "; cin >> pilihan2;
    while (pilihan2 != "kantong" && pilihan2 != pilihan1) {
        cout << "OWO: sekali lagi sesuatu di kantong saya atau " << pilihan1 << " mana yang akan kamu pilih?\n";
        cout << nama << ": "; cin >> pilihan2;
    }
    cout << "OWO : Apakah kamu yakin? ";
    string opsi2;
    cin >> opsi2;
    
    while (opsi2 == "tidak") {
        cout << "OWO: sekali lagi sesuatu di kantong saya atau " << pilihan1 << " mana yang akan kamu pilih?\n";
        cout << nama << ": "; cin >> pilihan2;
        cout << "Apakah kamu yakin? ";
        cin >> opsi2;
    }
    cout << endl;
    cout << "OWO: Terakhir di antara " << pilihan2 << " dan sebuah amplop mana yang akan kamu pilih?\n";
    string pilihan3;
    cout << nama << ": "; cin >> pilihan3;
    while (pilihan3 != "amplop" && pilihan3 != pilihan2) {
        cout << "OWO: sekali lagi " << pilihan2 << " dan sebuah amplop mana yang akan kamu pilih?\n";
        cin >> pilihan3;
    }
    cout << "OWO : Apakah kamu yakin? ";
    string opsi3;
    cin >> opsi3;
    
    while (opsi3 == "tidak") {
        cout << "OWO: sekali lagi amplop atau " << pilihan2 << " mana yang akan kamu pilih?\n";
        cout << nama << ": "; cin >> pilihan3;
        cout << "Apakah kamu yakin? ";
        cin >> opsi3;
    }
    cout << endl;
    int indeksHadiah = rand() % 3;
    cout << "OWO: Kita kunci pilihan anda, mari kita buka sama-sama apa isi dari " << pilihan3 << "\n";
    cout << "OWO: Selamat kamu mendapatkan " << hadiah[indeksHadiah] << endl;
    
    cetakJudul("============================================================");
    cetakJudul("Game Selesai");
    cetakJudul("============================================================");
    return 0;
}
