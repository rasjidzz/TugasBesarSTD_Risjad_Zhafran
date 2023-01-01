#include "tubes.h"

int printmenu(){
    int pilihan;
    cout<<"###### MENU BANK ######"<<endl;
    cout<<"1. Daftar Antrian"<<endl;
    cout<<"2. Cek Antrian"<<endl;
    cout<<"3. Hapus Antrian"<<endl;
    cout<<"0. Keluar Program"<<endl;
    cout<<endl;
    cout<<"Masukkan Pilihan : ";
    cin>>pilihan;
    cout<<endl;
    return pilihan;
}

void createantrian(antrian &a){
    head(a) = nil;
    tail(a) = nil;
}

void createelement(infotype pelanggan, adr &adrpel){
    adrpel = new element;
    info(adrpel) = pelanggan;
    next(adrpel) = nil;
}

void masukantrian(antrian &a, adr adrpel){
    // insert last
    if(head(a) == nil && tail(a) == nil){
        head(a) = adrpel;
        tail(a) = adrpel;
    }else{
        next(tail(a)) = adrpel;
        tail(a) = adrpel;
    }
}

void keluarantrian(antrian &a, adr adrpel){
    if (head(a) == nil && tail(a) == nil){
        cout<<"Antrian Kosong !!!"<<endl;
        cout<<endl;
    }else if (head(a) == tail(a)){
        adrpel = head(a);
        head(a) = nil;
        tail(a) = nil;
    }else{
        adrpel = head(a);
        head(a) = next(head(a));
        next(adrpel) = nil;
    }
}

void showpelanggan(antrian a){
    adr p;
    p = head(a);
    if (p == nil){
        cout<<"Tidak ada antrian !!!"<<endl;
        cout<<endl;
    }else{
        int i = 1;
        cout<<"###################"<<endl;
        while(p != nil){
            cout<<"Antrian ke-"<<i<<endl;
            cout<<"Nama Nasabah\t\t: "<<info(p).nama<<endl;
            cout<<"NIK\t\t\t: "<<info(p).nik<<endl;
            cout<<"Jenis Transaksi\t\t: "<<info(p).jenistransaksi<<endl;
            cout<<"Bank / E-Wallet Tujuan\t: "<<info(p).tujuan<<endl;
            cout<<"Nomor Tujuan\t\t: "<<info(p).nomoryangdituju<<endl;
            cout<<"Nominal Transaksi\t: Rp."<<info(p).nominal<<endl;
            cout<<endl;
            p = next(p);
            i++;
        }
        cout<<"###################"<<endl;
    }
}

int menu2(){
    int pilih;
    //cout<<endl;
    cout<<"###### MENU BANK ######"<<endl;
    cout<<"1. Transfer"<<endl;
    cout<<"2. Tarik Tunai"<<endl;
    cout<<"3. Top Up (Gopay/Shopee/Ovo/Dana)"<<endl;
    cout<<"4. Tabungan Emas"<<endl;
    cout<<"Pilihan \t: ";
    cin>>pilih;
    cout<<endl;
    return pilih;
}

int menu3(){
    int pilih2;
    cout<<"##### Tabungan Emas #####"<<endl;
    cout<<"1. Deposit Emas"<<endl;
    cout<<"2. Cair Emas"<<endl;
    cout<<"Pilihan \t:";
    cin>>pilih2;
    cout<<endl;
    return pilih2;
}

// STACK
void createstack(Stack s){
    top(s) =0;
}

bool isempty(Stack s){
    return top(s) == 0;
}

bool isfull(Stack s){
    return top(s) == 10;
}
void printinfo(Stack s){
    if (isempty(s)){
        cout<<"Tabungan Emas Kosong !!!"<<endl;
    }else{
        while(top(s) != -1){
            cout<<"Urutan ke-"<<infos(s)[top(s)].urut<<endl;
            cout<<"Nominal Emas : "<<infos(s)[top(s)].nominal<<endl;
            cout<<endl;
            top(s)--;
        }
    }
}

void push(Stack &s, infotype2 x){
    if(isfull(s)){
        cout<<"Tabungan Emas Penuh"<<endl;
    }else{
        top(s) = top(s) + 1;
        infos(s)[top(s)] = x;
    }
}
infotype2 pop(Stack &s){
    if(isempty(s)){
        cout<<"Tabungan Emas Kosong !!!"<<endl;
    }else{
        top(s)--;
    }
    return infos(s)[top(s)+1];
}
