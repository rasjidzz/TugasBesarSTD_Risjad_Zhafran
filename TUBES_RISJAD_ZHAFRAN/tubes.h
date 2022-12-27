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

struct Stack {
    string kode;
    int jumlah;
};

struct element {
    infotype info;
    Stack deposit[10];
    adr next;
    int top;
};


struct antrian {
    adr head;
    adr tail;
};

// MENU
int printmenu();
int menu2();

// QUEUE
void createantrian(antrian &a);
void createelement(infotype pelanggan, adr &adrpel);
void masukantrian(antrian &a, adr adrpel);
void keluarantrian(antrian &a, adr adrpel);
void showpelanggan(antrian a);

// STACK
void createstack(Stack s);
bool isfull(Stack s);
void printinfo(Stack s);
void push(Stack &s, int x);
int pop(Stack &s);


#endif // TUBES_H_INCLUDED
