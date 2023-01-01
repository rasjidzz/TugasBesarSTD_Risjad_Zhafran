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

struct infotype2{
    int urut;
    int nominal;
};

struct Stack{
    infotype2 infos[10];
    int top;
};

struct element{
    // QUEUE
    infotype info;
    adr next;
    // STACK
    Stack deposit[10];
    //int top;
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
void createstack(Stack s);
bool isempty(Stack s);
bool isfull(Stack s);
void printinfo(Stack s);
void push(Stack &s, infotype2 x);
infotype2 pop(Stack &s);


#endif // TUBES_H_INCLUDED
