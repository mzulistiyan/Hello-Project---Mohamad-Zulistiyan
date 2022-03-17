#ifndef CLO_H_INCLUDED
#define CLO_H_INCLUDED

#include <iostream>
using namespace std;

#define info(P) (P)->info
#define next(P) (P)->next
#define first(N) ((N).first)
#define nil NULL

struct pegawai{
    string nama;
    int umur;
    float gaji;

};

typedef pegawai infotype;
typedef struct element *adr;

struct element_1301204037{
    infotype info;
    adr next;
};

struct List{
  adr first;
};

void createList(List &N);
adr newElement(infotype x);
void insertFirst(List &L, adr P);
void insertLast(List &N, adr p);
void dataPerbandingan(List N);
void show(List N);
int selectMenu();
#endif // MENU_H_INCLUDED

