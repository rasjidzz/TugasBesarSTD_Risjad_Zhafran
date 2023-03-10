#ifndef TUBES_H_INCLUDED
#define TUBES_H_INCLUDED

#include <iostream>
using namespace std;


#define nil NULL

// Queue
#define head(p) (p).head
#define tail(p) (p).tail
#define info(p) (p)->info
#define next(p) (p)->next

// Stack
#define top(s) (s).top
#define infos(s) (s).infos
//#define nom(s) (s).nom

typedef struct element *adr;

// INFOTYPE QUEUE
struct infotype {
    string nama;
    string jenistransaksi;
    string tujuan;
    int nik;
    int nominal;
    int nomoryangdituju;
};

struct tabungemas{
    string nama;
    int jumlah;
    //int urutan;
};

typedef tabungemas infotype2;

struct Stack{
    infotype2 infos[5];
    int top;
};

struct element{
    // QUEUE
    infotype info;
    adr next;
};


struct antrian {
    adr head;
    adr tail;
};

// MENU
int printmenu();
int menu2();
int menu3();

// QUEUE
void createantrian(antrian &a);
void createelement(infotype pelanggan, adr &adrpel);
void masukantrian(antrian &a, adr adrpel);
void keluarantrian(antrian &a, adr adrpel);
void showpelanggan(antrian a);

// STACK
void createstack(Stack &s);
bool isempty(Stack s);
bool isfull(Stack s);
infotype2 createinfo(string namax, int jumlahx);
void push(Stack &s, infotype2 infox);
void pop(Stack &s);
void printStack(Stack s);

#endif // TUBES_H_INCLUDED
