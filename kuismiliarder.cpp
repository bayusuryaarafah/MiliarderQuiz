#include <iostream>
#include <string>
#include <conio.h>
#include <windows.h>

using namespace std;

char jawaban;
string nama, berlanjut;
int p_no = 1;
int t_aman = 1000000;
int t_aman2 = 32000000;
int t_aman3 = 1000000000;

void klikEnter(const char* suruhan);
void Memuat();
int penilaianProgram();

// Class merupakan bagian dari pemrograman yang berorientasi pada objek (OOP)
class Pertanyaan
{
    // Ada 3 tipe kelas yang umum yaitu private,protected,dan public
    // Dalam program ini saya hanya menggunakan kelas public
public:
    string pertanyaan, a, b, c, d;
    char jaw_benar;
    int hadiah;
    void nilaiHasil(string, string, string, string, string, char, int);
    void tanyaKuis();
    void tanyaPertanyaan();
};

int main() {

    int umur;
    string kesudahan;
    Pertanyaan tampil;

    // Sambutan untuk pemakai program
    system("cls");
    cout << "              ______________________________________________________ \n";
    cout << "             |       ________________|      |________________       |\n";
    cout << "             |      |                                        |      |\n";
    cout << "             |      |          S..E..L..A..M..A..T           |      |\n";
    cout << "             |      |           D..A..T...A..N..G            |      |\n";
    cout << "             |      |________________________________________|      |\n";
    cout << "             |___________________CALON__MILIARDER___________________|\n";
    cout << "\n";

    klikEnter("Tekan 'enter' kak untuk melanjutkan\n");

    // Pendaftaran nama, umur, beserta kondisi umur
    cout << "Daftarkan Nama Kakak   : ";
    cin >> nama;
    cout << "(X)huruf/tanda!!!\n";
    cout << "Umur Kakak Berapa tahun: ";
    cin >> umur;

    if (umur < 17) {
        cout << "\nMaaf kakak " << nama << " tidak bisa memainkan program ini karena kakak masih dibawah umur (||)\n";
        return 0;
    }
    else {
        cout << "\nBaiklah karena kakak " << nama << " berumur lebih dari 17 tahun kakak bisa melanjutkan untuk bermain\n";
    }

    // Pertanyaan apakah pengguna program sudah familiar dengan game ini termasuk kondisinya
    while (1) {
        cout << "Namun sebelumnya apakah kakak sudah familiar dengan game ini (sudah/belum): ";
        cin >> kesudahan;

        if (kesudahan == "sudah") {
            cout << "\nBaik karena kakak sudah familiar, kakak bisa langsung menuju ke Kuis Utama\n";
            klikEnter("Tekan 'enter' kak untuk melanjutkan ke Kuis Utama");
            Memuat();
            tampil.tanyaKuis();
            return 0;
        }
        else if (kesudahan == "belum") {
            cout << "\nKarena kakak belum familiar silahkan baca Petunjuk Game terlebih dahulu\n";
            klikEnter("Tekan 'enter' kak untuk melanjutkan ke Petunjuk Game");
            break;
        }
        else
            cout << "\nMasukan sesuai instruksi kak!!!\n";
    }

    string masukUtama;

    // Petunjuk game
    system("cls");
    cout << "              ______________________________________________________ \n";
    cout << "             |       ________________|      |________________       |\n";
    cout << "             |      |                                        |      |\n";
    cout << "             |      |        P..E..T..U..N..J..U..K          |      |\n";
    cout << "             |      |              G..A..M..E                |      |\n";
    cout << "             |      |________________________________________|      |\n";
    cout << "             |______________________________________________________|\n";
    cout << "\n";

    cout << "|> Ada 15 pertanyaan yang harus dijawab dengan benar untuk memenangi 1.000.000.000 rupiah.\n";
    cout << "|> Kakak akan melewati 3 titik aman yaitu di hadiah 1.000.000, 32.000.000, dan 1.000.000.000 rupiah.\n";
    cout << "|> Jika kakak salah sebelum melewati titik aman pertama kakak tidak akan mendapatkan hadiah apapun.\n";
    cout << "|> Jika kakak salah setelah melewati titik aman tertentu kakak hanya akan mendapatkan hadiah titik aman tertentu.\n";
    cout << "|> Kakak bisa pilih lanjut atau cukup dengan hadiah itu setiap menjawab benar 1 pertanyaan.\n";
    cout << "|> Permainan akan berakhir jika kakak menjawab salah atau kakak telah menjawab 15 pertanyaan dengan benar.\n";

    // Pertanyaan dan kondisi kesiapan untuk bermain di kuis utama
    while (1) {
        cout << "\nApakah kakak sudah siap menuju ke Kuis Utama (sudah/belum): ";
        cin >> masukUtama;

        if (masukUtama == "sudah") {
            cout << "\nBaiklah sekarang kakak " << nama << " bisa melanjutkan ke Kuis Utama\nSemoga beruntung (||)\n";
            klikEnter("Tekan 'enter' kak untuk melanjutkan ke Kuis Utama");
            Memuat();
            tampil.tanyaKuis();
            return 0;
        }
        else if (masukUtama == "belum") {
            cout << "\nSilahkan kembali lagi setelah kakak siap\nSemoga lekas siap (||)\n";
            return 0;
        }
        else
            cout << "\nMasukan sesuai instruksi kak!!!";
    }

    return 0;
}

void Memuat() {

    // Proses memuat menuju ke Kuis Utama
    for (int i = 1; i <= 100; i++) {

        if (i < 50) {
            Sleep(100);
        }
        else if (i == 51 || i == 71) {
            Sleep(5000);
        }
        else if (i > 50 && i < 70) {
            Sleep(300);
        }
        else
            Sleep(50);

        cout << "\rMemuat..." << i << "%";

    }

}

void klikEnter(const char* suruhan) {

    // Hanya klik enter di keyboard untuk melanjutkan
    int klik;
    while (_kbhit())
        _getch();

    cout << suruhan << '\n';
    while ((klik = _getch()) != '\r');

}

void Pertanyaan::nilaiHasil(string pe, string ja, string jb, string jc, string jd, char jB, int ha) {

    // Pemanggilan data variabel dari class public dengan mengumpamakan variabel lain 
    pertanyaan = pe;
    a = ja;
    b = jb;
    c = jc;
    d = jd;
    jaw_benar = jB;
    hadiah = ha;
}

void Pertanyaan::tanyaPertanyaan() {

    string centang = " ";
    string centang2 = " ";
    string centang3 = " ";

    // Kondisi untuk memunculkan peringatan telah sukses melewati titik aman tertentu
    if (hadiah > t_aman) {
        centang = "(sukses)";
    }
    if (hadiah > t_aman2) {
        centang = "(sukses)";
        centang2 = "(sukses)";
    }
    if (hadiah == t_aman3) {
        centang = "(sukses)";
        centang2 = "(sukses)";
        centang3 = "(sukses)";
    }

    // Tampilan Kuis utama yang berisi no pertanyaan, nilai hadiah, dan yang pasti pertanyaan beserta jawaban
    system("cls");
    cout << "              ______________________________________________________ \n";
    cout << "             |       ________________|      |________________       |\n";
    cout << "             |      |                                        |      |\n";
    cout << "             |      |               K..U..I..S               |      |\n";
    cout << "             |      |            U...T...A...M...A           |      |\n";
    cout << "             |      |________________________________________|      |\n";
    cout << "             |______________________________________________________|\n";
    cout << "\n";
    cout << "Pertanyaan ke: " << p_no << "\tHadiah: " << hadiah << "\n\n";
    cout << "Titik aman 1 : " << t_aman << " " << centang;
    cout << "\nTitik aman 2 : " << t_aman2 << " " << centang2;
    cout << "\nTitik aman 3 : " << t_aman3 << " " << centang3;

    cout << "\n\n";
    cout << pertanyaan << endl;
    cout << "A.\t" << a << endl;
    cout << "B.\t" << b << endl;
    cout << "C.\t" << c << endl;
    cout << "D.\t" << d << endl;
    cout << endl;
    cout << "Jawab dengan huruf kecil kak\n";
    cout << "Silahkan pilih jawabannya kak: ";
    cin >> jawaban;

    // Kondisi jika jawaban sama dengan jawaban benar
    if (jawaban == jaw_benar) {

        if (hadiah == 1000000000) {
            cout << "\nSungguh hebat kakak bisa mendapatkan hadiah utama sebesar " << hadiah << " rupiah\n";
            cout << "Selamat kepada kakak " << nama << ", semoga keluarga kakak senang\n";
            penilaianProgram();
            exit(0);
        }

        cout << endl;
        cout << "Hebat! jawaban kakak benar.\n";
        cout << "Kakak " << nama << " saat ini mengantongi hadiah " << hadiah << " rupiah.\n";

        // Perulangan jika masukan tidak valid 
        while (1) {
            cout << "Apakah kakak ingin lanjut atau cukup sampai hadiah ini (lanjut/cukup): ";
            cin >> berlanjut;

            // Kondisi jika ingin berlanjut atau tidak berlanjut ke pertanyaan berikutnya
            if (berlanjut == "lanjut") {
                cout << "\nBaik karena kakak pilih lanjut silahkan jawab kuis selanjutnya\n";
                klikEnter("Tekan 'enter' kak untuk melanjutkan");
                p_no++;
                break;
            }
            else if (berlanjut == "cukup") {
                cout << "\nBaik karena kakak pilih cukup kakak berhak mendapatkan hadiah sebesar " << hadiah << " rupiah\n";
                penilaianProgram();
                exit(0);
            }
            else {
                cout << "\nMasukan sesuai intruksi kak!!!\n";
            }
        }
    }

    // Kondisi jika jawaban tidak sama dengan jawaban benar
    else if (jawaban != jaw_benar) {

        cout << endl;

        // Kondisi untuk menghentikan kuis saat salah menjawab di hadiah tertentu
        if (hadiah < 1000000) {

            cout << "Oh tidak! jawaban kakak salah\n";
            cout << "Karena jawaban kakak salah sebelum melewati titik aman pertama\n";
            cout << "maka kakak tidak mendapatkan hadiah apapun\n";
            cout << "Semoga di lain kesempatan kakak lebih beruntung lagi, semangat!!!\n";
            penilaianProgram();
            exit(0);
        }
        else if (hadiah >= 1000000 && hadiah < 32000000) {

            hadiah = 1000000;
            cout << "Oh tidak! jawaban kakak salah\n";
            cout << "Karena jawaban kakak salah setelah melewati titik aman pertama dan sebelum melewati titik aman kedua, \n";
            cout << "Maka hadiah yang kakak dapatkan adalah hadiah titik aman pertama sebesar " << hadiah << " rupiah.\n";
            cout << "Semoga di lain kesempatan kakak lebih beruntung lagi, semangat!!!\n";
            penilaianProgram();
            exit(0);
        }
        else if (hadiah >= 32000000 && hadiah < 1000000000) {

            hadiah = 32000000;
            cout << "Oh tidak! jawaban kakak salah\n";
            cout << "Karena jawaban kakak salah setelah melewati titik aman kedua dan sebelum melewati titik aman terakhir, \n";
            cout << "Maka hadiah yang kakak dapatkan adalah hadiah titik aman kedua sebesar " << hadiah << " rupiah.\n";
            cout << "Semoga di lain kesempatan kakak lebih beruntung lagi, semangat!!!\n";
            penilaianProgram();
            exit(0);
        }
    }
}


void Pertanyaan::tanyaKuis() {

    Pertanyaan p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15;

    /* Pembuatan pertanyaan jawaban dan hadiah dengan mengkaitkan data variabel class Pertanyaan
       dengan data variabel di fungsi class nilaiHasil*/
    p1.nilaiHasil("Siapakah penemu bola lampu?",
        "Thomas alva edison", "Michael faraday",
        "Bartolomeuz diaz", "Amerigo vespuci",
        'a', 100000);

    p2.nilaiHasil("Negara yang menjadi pusat industri dan politik?",
        "Australia", "Singapura",
        "Amerika Serikat", "Malaysia",
        'c', 200000);

    p3.nilaiHasil("Gunung supervolcano yang terletak di negara amerika serikat?",
        "Krakatau", "Yellowstone",
        "Tambora", "Everest",
        'b', 300000);

    p4.nilaiHasil("Palung samudra terdalam di bumi?",
        "Puerto rico", "Tonga",
        "Romanche", "Mariana",
        'd', 500000);

    p5.nilaiHasil("Gunung Tertinggi di bumi?",
        "Himalaya", "Everest",
        "Semeru", "Batur",
        'b', 1000000);

    p6.nilaiHasil("Guru dari legenda kung fu Bruce Lee?",
        "Jet li", "Jackie Chan",
        "Ip Man", "Chuck Norris",
        'c', 2000000);

    p7.nilaiHasil("Penyanyi legenda solo pencipta lagu berjudul Beat it?",
        "Michael Jackson", "A-ha",
        "Akon", "Snoop dog",
        'a', 4000000);

    p8.nilaiHasil("Pegulat terkenal dari WWE?",
        "Rey Antonio", "Mayweather",
        "Brock hamilton", "John Cena",
        'd', 8000000);

    p9.nilaiHasil("Pebalap MotoGP terkenal?",
        "Jonathan Rea", "Lewis Hamilton",
        "Antonio Cairoli", "Valentino Rossi",
        'd', 16000000);

    p10.nilaiHasil("DJ terkenal dari amerika serikat?",
        "David Guetta", "Justin Timberlake",
        "Chris Brown", "Pitbull",
        'a', 32000000);

    p11.nilaiHasil("Handphone touchscreen pertama?",
        "Sony Ericson", "Iphone",
        "Nokia", "Huawei",
        'b', 64000000);

    p12.nilaiHasil("Pendiri perusahaan Microsoft?",
        "Mark Zuckerberg", "Bill Gates",
        "Kevin Systrom", "Jeff Bezos",
        'b', 125000000);

    p13.nilaiHasil("Dalang dari gerakan G30S/PKI?",
        "Ahmad yani", "Chaerul Saleh",
        "D.N Aidit", "Soeharto",
        'd', 250000000);

    p14.nilaiHasil("Game Terkenal Supercell?",
        "Mobile Legend Bang Bang", "Crisi Action",
        "PlayerUnknownBattleGround", "Clash of Clans",
        'd', 500000000);

    p15.nilaiHasil("Tokoh Pemeran Mr.Bean?",
        "Rowan Atkinson", "Max Charles",
        "Tom Holland", "Jake Johnson",
        'a', 1000000000);

    /* Mengkaitkan semua bagian variabel anggota kelas pertanyaan yang sudah terintegrasi dengan fungsi class nilaiHasil
       dengan semua yang ada di fungsi class tanyaPertanyaan*/
    p1.tanyaPertanyaan();  p2.tanyaPertanyaan();  p3.tanyaPertanyaan();  p4.tanyaPertanyaan();  p5.tanyaPertanyaan();

    p6.tanyaPertanyaan();  p7.tanyaPertanyaan();  p8.tanyaPertanyaan();  p9.tanyaPertanyaan();  p10.tanyaPertanyaan();

    p11.tanyaPertanyaan(); p12.tanyaPertanyaan(); p13.tanyaPertanyaan(); p14.tanyaPertanyaan(); p15.tanyaPertanyaan();


}

int penilaianProgram() {

    int nilai;

    klikEnter("\nTekan 'enter' kak untuk melanjutkan ke sesi penilaian\n");
    system("cls");
    system("cls");
    cout << "              ______________________________________________________ \n";
    cout << "             |       ________________|      |________________       |\n";
    cout << "             |      |                                        |      |\n";
    cout << "             |      |       P..E..N..I..L..A..I..A..N        |      |\n";
    cout << "             |      |          P..R..O..G..R..A..M           |      |\n";
    cout << "             |      |________________________________________|      |\n";
    cout << "             |______________________________________________________|\n";
    cout << "\n";
    cout << "Kami sangat senang jika proram kami dinilai.\n";
    cout << "Kakak bisa menilai program kami dengan nilai 1-5.\n";

    //Kondisi jika mendapat nilai tertentu
    while (1) {
        cout << "Nilainya berapa kak: ";
        cin >> nilai;
        while (nilai) {
            if (nilai == 1 || nilai == 2) {
                cout << "\nDengan nilai '" << nilai << "' kami akan meningkatkan program ini lagi.\n";
                return 0;
            }
            else if (nilai == 3) {
                cout << "\nDengan nilai '" << nilai << "' kami akan meningkatkan program ini sedikit lagi.\n";
                return 0;
            }
            else if (nilai == 4 || nilai == 5) {
                cout << "\nWah dengan nilai '" << nilai << "' dipastikan kakak tertarik dengan program kami ini.\n";
                return 0;
            }
            else if (nilai < 1 || nilai > 5) {
                cout << "Beri kami nilai 1-5 kak.\n";
                break;
            }
        }
    }
}