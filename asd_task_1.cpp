/**
    NAMA  : ALAN MAULANA IBRAHIM
    NIM   : 1301154175
    KELAS : IF-39-01
**/


#include <iostream>

using namespace std;

/**
    - daftarkan seluruh variable global yang dibutuhkan di sini
**/
int prouts = 0,prouas = 0,protubes = 0,A =0,B =0,C =0,D = 0,E =0;
double hasil = 0;

void main_menu();
void set_standar();
void set_proporsi_nilai();
char hitung_index(double uts, double uas, double tubes);
void input_nilai();
void thank_you();

int main()
{
    main_menu();
    return 0;
}

void main_menu()
{
    /**
    - fungsi berisi pilihan menu di dalam aplikasi:
      daftar menu:
      1. set standar index nilai
      2. set proporsi nilai
      3. input nilai
      4. keluar
    - fungsi meminta input pilihan menu dari user
      dan memanggil fungsi menu yang dipilih
    **/

    int pilihan;
    do
    {
        cout << "Daftar Menu : " << endl;
        cout << "1. Set Standar Index Nilai" << endl;
        cout << "2. Set Proporsi Nilai" << endl;
        cout << "3. Input Nilai" << endl;
        cout << "4. Keluar " << endl << endl;
        cout << "Masukkan Pilihan : ";
        cin >> pilihan;
        switch (pilihan)
        {
        case 1 :
            set_standar();
            break;
        case 2 :
            set_proporsi_nilai();
            break;
        case 3 :
            input_nilai();
            break;
        }
    }
    while (pilihan !=4);
    thank_you();
}


void set_proporsi_nilai()
{
    /**
    - fungsi mengubah prosentase nilai UTS, UAS, dan TUBES
    - fungsi akan menerima 3 input prosentase dari user untuk UTS, UAS, dan TUBES
    - fungsi akan mengulang menerima input dari user jika hasil prosentase != 100
    **/
    do
    {
        cout << "Masukkan prosentase UTS = ";
        cin >> prouts;
        cout << "Masukkan prosentase UAS = ";
        cin >> prouas;
        cout << "Masukkan prosentase TUBES = ";
        cin >> protubes;
        if (prouts + prouas + protubes != 100)
        {
            cout << "Prosentase yang di input harus berjumlah 100,input ulang"<< endl<< endl;
        }
    }
    while (prouts + prouas + protubes != 100);
}

void set_standar()
{
    /**
    - fungsi mengubah standar index A, B, C, D, dan E
    - fungsi akan menerima input rentang nilai untuk masing-masing index nilai
    - fungsi akan mengulang menerima input dari user jika terdapat nilai yang overlap
    **/
    do
    {
        cout << "Masukkan indeks minimal nilai A = ";
        cin >> A;
        cout << "Masukkan indeks minimal nilai B = ";
        cin >> B;
        cout << "Masukkan indeks minimal nilai C = ";
        cin >> C;
        cout << "Masukkan indeks minimal nilai D = ";
        cin >> D;

        if ((A<=B)||(B<=C)||(C<=D)||(D<=E))
        {
            cout << "Indeks Salah , Ulangi Lagi";
        }
        cout <<endl;
    }
    while ((A<=B)||(B<=C)||(C<=D)||(D<=E));
}

char hitung_index(double uts, double uas, double tubes)
{
    /**
    - fungsi menghitung hasil nilai berdasarkan input parameter dan proporsi nilai
    - fungsi menentukan index nilai berdasarkan standar nilai
    - fungsi mengembalikan karakter index nilai
    **/

    char index;
    cout << "Nilai Indeks Anda = ";
    hasil = (uts*prouts/100)+(uas*prouas/100)+(tubes*protubes/100);
    if (hasil >= A)
    {
        cout <<"A";
    }
    else if (hasil >= B)
    {
        cout << "B";
    }
    else if (hasil >= C)
    {
        cout << "C";
    }
    else if (hasil >= D)
    {
        cout << "D";
    }
    else
    {
        cout << "E";
    }
    cout<< endl<<endl;
    return index;
}


void input_nilai()
{
    /**
    - fungsi menerima input nilai UTS, UAS, dan TUBES
    - fungsi menampilkan index yang didapat berdasarkan input nilai UTS, UAS, dan TUBES
    **/
    double uas, uts, tubes;
    cout<< "Masukan nilai UTS = ";
    cin >> uts;
    cout<< "Masukan nilai UAS = ";
    cin >> uas;
    cout<< "Masukan nilai TUBES = ";
    cin >> tubes;
    hitung_index(uts,uas,tubes);
}

void thank_you()
{
    /**
    - fungsi menampilkan pesan singkat untuk mengakhiri program
    - tampilkan nim dan nama kalian
    **/
    cout << "          THANK YOU      "<<endl;
    cout << "   ALAN MAULANA IBRAHIM " << endl;
    cout << "  ()1301154175) (IF 39 01)";
}
