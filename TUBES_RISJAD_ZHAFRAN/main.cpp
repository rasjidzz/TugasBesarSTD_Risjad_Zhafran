#include "tubes.h"

int main()
{
    // DEKLARASI VARIABEL
    int pilihan ;
    antrian antri;
    createantrian(antri);

    // Data yang digunakan
    string nama, tujuan;
    int nik, norek, nominal;
    infotype data_transfer;
    adr adrpelanggan;

    pilihan = printmenu();
    while(pilihan != 0){
        if (pilihan == 1){
            int pil2;
            cout<<"##### BANK RISPRAN #####"<<endl;
            cout<<"##### Pendaftaran #####"<<endl;
            cout<<"Nama \t: ";
            cin>>nama;
            cout<<"NIK \t: ";
            cin>>nik;
            pil2 = menu2();
            if (pil2 == 1){
                cout<<"##### Transfer Antar Bank #####"<<endl;
                cout<<"Bank Tujuan\t\t: ";
                cin>>tujuan;
                cout<<"No Rekening\t\t: ";
                cin>>norek;
                cout<<"Nominal Transfer\t: ";
                cin>>nominal;
                data_transfer.nama = nama;
                data_transfer.nik = nik;
                data_transfer.jenistransaksi = "Transfer Antar Bank";
                data_transfer.tujuan = tujuan;
                data_transfer.nomoryangdituju = norek;
                data_transfer.nominal = nominal;
                createelement(data_transfer, adrpelanggan);
                masukantrian(antri, adrpelanggan);
            }else if(pil2 == 2){
                cout<<"##### Tarik Tunai #####"<<endl;
                cout<<"Nominal\t: ";
                cin>>nominal;
                data_transfer.nama = nama;
                data_transfer.nik = nik;
                data_transfer.jenistransaksi = "Tarik Tunai";
                data_transfer.tujuan = "-";
                data_transfer.nomoryangdituju = nil;
                data_transfer.nominal = nominal;
                createelement(data_transfer, adrpelanggan);
                masukantrian(antri, adrpelanggan);
            }else if (pil2 == 3){
                cout<<"##### Top Up E-Wallet #####"<<endl;
                cout<<"E-Wallet Tujuan\t: ";
                cin>>tujuan;
                cout<<"Nomor E-Wallet\t: ";
                cin>>norek;
                cout<<"Nominal\t\t: ";
                cin>>nominal;
                data_transfer.nama = nama;
                data_transfer.nik = nik;
                data_transfer.jenistransaksi = "Top Up E-Wallet";
                data_transfer.tujuan = tujuan;
                data_transfer.nomoryangdituju = norek;
                data_transfer.nominal = nominal;
                createelement(data_transfer, adrpelanggan);
                masukantrian(antri, adrpelanggan);
            }
            cout<<endl;
        }else if (pilihan == 2){
            showpelanggan(antri);
        }else if (pilihan == 3){
            keluarantrian(antri, adrpelanggan);
            cout<<"Antrian pertama terhapus"<<endl;
            cout<<endl;
        }
        pilihan = printmenu();
    }
}
