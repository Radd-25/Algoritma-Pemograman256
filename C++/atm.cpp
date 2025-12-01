#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main(){
    int saldo = 0;
    string nama;
    bool check = false;
    int menu = 0;

do {
        cout << "Masukan Nama Anda : ";
        getline(cin, nama);
        system("cls");

        cout << "Apakah nama anda benar? " << nama << " (1 untuk benar, 0 untuk salah) : ";
        cin >> check;

        if (check == 1) {
            system("cls");
            cout << "Selamat datang " << nama << endl;
            cout << "Masukan Saldo awal anda (hanya angka): ";
            cin >> saldo;
        } else if (check == 0) {
            cout << "Baik, silakan coba lagi." << endl;
            system("cls");
        } else {
            cout << "Input tidak valid. Silakan masukan 1 atau 0." << endl;
            
        }
    } while (check != 1);
    
    system("cls");
    cout << endl;
    cout << "Menu ATM" << endl;
    cout << "1. Cek saldo" << endl;
    cout << "2. Tarik tunai" << endl;
    cout << "3. Setor tunai" << endl;
    cout << "4. transfer" << endl;
    cout << "5. Keluar" << endl;

    cout << endl;
    cout << "Pilih menu : ";
    cin >> menu;
    system("cls");
    switch (menu)
    {
    case 1:
       { cout << "Saldo anda saat ini adalah : Rp" << saldo << endl;
        break;}
    
    case 2:
        {int tarik;
        cout << "Masukan jumlah uang yang ingin ditarik : Rp ";
        cin >> tarik;

        system("cls");

        cout << "Anda akan menarik saldo sebesar Rp " << tarik << endl << "1 untuk benar, 0 untuk salah ";
        cin >> check;
        if (check == 1)
        {
            if (tarik > saldo)
            {
                system("cls");
                cout << "Maaf saldo anda tidak mencukupi" << endl;
            }
            else
            {
                saldo = saldo - tarik;
                system("cls");
                cout << "Transaksi berhasil." << endl;
                cout << "Saldo anda saat ini adalah Rp" << saldo << endl;
            }
        }
        else
        {
            system("cls");
            cout << "Transaksi dibatalkan" << endl;
        }
        break;}

    case 3:
        {int setor;
        cout << "Masukan jumlah uang yang ingin disetor : Rp ";
        cin >> setor;
        saldo = saldo + setor;
        system("cls");
        cout << "Transaksi berhasil." << endl;
        cout << "Saldo anda saat ini adalah Rp" << saldo << endl;
        break;}

    case 4:
        {int transfer;
        string rek;
        cout << "Masukan nomor rekening tujuan : ";
        cin >> rek;
        cout << "Masukan jumlah uang yang ingin ditransfer : Rp ";
        cin >> transfer;
        if (transfer > saldo)
        {
            system("cls");
            cout << "Maaf saldo anda tidak mencukupi" << endl;
        }
        else
        {
            system("cls");
            cout << "Anda akan mentransfer saldo sebesar Rp " << transfer << " ke rekening " << rek << endl;
            cout << "1 untuk benar, 0 untuk salah ";
            cin >> check;
            if (check == 1)
            {
                saldo = saldo - transfer;
                system("cls");
                cout << "Transaksi berhasil." << endl;
                cout << "Saldo anda saat ini adalah Rp" << saldo << endl;
            }
            else
            {
                system("cls");
                cout << "Transaksi dibatalkan" << endl;
            }
        }
        break;}

    case 5:
    
       { system("cls");
        cout << "Sampai jumpa lagi" << endl;
        break;}


    default:
       { system("cls");
        cout << "Menu tidak tersedia" << endl;
        break;}
    }

    return 0;
}