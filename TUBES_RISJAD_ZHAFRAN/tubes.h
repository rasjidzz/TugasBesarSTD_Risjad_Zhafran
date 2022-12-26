#ifndef TUBES_H_INCLUDED
#define TUBES_H_INCLUDED

#include <iostream>
using namespace std;

#define nil NULL
#define head(p) (p).head
#define tail(p) (p).tail
#define info(p) (p)->info
#define next(p) (p)->next

typedef struct element *adr;

struct infotype {
    string nama;
    string jenistransaksi;
    string tujuan;
    int nik;
    int nominal;
    int nomoryangdituju;
};

struct element {
    infotype info;
    adr next;
};

struct antrian {
    adr head;
    adr tail;
};

int printmenu();
int menu2();
void createantrian(antrian &a);
void createelement(infotype pelanggan, adr &adrpel);
void masukantrian(antrian &a, adr adrpel);
void keluarantrian(antrian &a, adr adrpel);
void showpelanggan(antrian a);


#endif // TUBES_H_INCLUDED
