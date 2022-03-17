
#include "CLO.h"

void createList(List &L){
    first(L)= nil;
}

infotype newPegawai(string nama, int umur, float gaji){
    infotype Peg;
    Peg.nama = nama;
    Peg.umur = umur;
    Peg.gaji = gaji;
    return Peg;
}

adr newElement(infotype dataBaru){
    adr P = new element_1301204037;
    info(P) = dataBaru;
    next(P) = nil;
    return P;
}


void insertFirst(List &L, adr P){
    if (first(L) == nil){
        first(L) = P;
    } else{
        next(P) = first(L);
        first(L) = P;
    }
}

void insertLast(List &L, adr P){
    adr q;

    if(first(L) == nil ){
        first(L) = P;
    }else{
        q = first(L);
        while (next(q) != nil){
            q = next(q);
        }
        next(q) = P;
    }
}

void deleteFirst(List &L, adr &P){
    P = first(L);
    if (next (first(L)) == nil){
        first(L) = nil;
    } else{
        first(L) = next(first(L));
        next(P) = nil;
    }
}

void deleteLast(List &L, adr &P){
    adr q;
    if (first(L) == nil){
        P = nil;
        cout<<"List Kosong"<<endl;
    }else if (next(first(L)) == nil){
        P = first(L);
        first(L) = nil;
    }else{
        q = first(L);
        P = first(L);
        while (next(P) != nil){
            q = P;
            P = next(P);
        }
        next(q) = nil;
    }
}

void perbandingan(List &L, adr p){
    adr q = first(L);
    float min,
    if(first(L) == nil || info(p).gaji < first(L).gaji ){
        insertFirst(L, p);
    }else(
      while (next(q) != null) {
            q = next(q);
        }
        if(info(p).gaji > info(q).gaji){
            insertLast(L, P);
        }
    }
}

void printList(List L){
    int i;
    adr P;
    if (first(L) == nil){
        cout<<"List kosong!"<<endl;
        cout<<endl;
    } else{
        i = 1;
        P = first(L);

        while (P != nil){
            cout<<"["<<i<<"]"<<endl;
            cout<<"Nama: "<<info(P).nama<<endl;
            cout<<"NIM: "<<info(P).umur<<endl;
            cout<<"IPK: "<<info(P).gaji<<endl;
            P = next(P);
            i++;
        }
        cout<<"List selesai ditampilkan!"<<endl;
        cout<<endl;
    }
}

void DataFIF(List &L) {
    address P;
    int jum = 0;

    if (first(L) != nil) {
        P = first(L);
        while (P != nil) {
            if (info(P).fakultas == “FIF”) {
                cout << "Nama : " << info(P).nama << endl;
                cout << "Prodi : " << info(P).prodi << endl;
                cout << "Fakultas : " << info(P).fakultas << endl;
                cout << endl;
            }
            jum++
            P = next(P);
    } else {
        cout << “ListKosong” << endl;
    }
    cout << “Jumlah data didalam list :  ” << jum << endl;
}

}
address search_by_name(List &L,string name){
    address P;
    bool found = false;
    P = first(L);
    while( found == false && P != nil){
         if (name != info(P).name) {
                P = next(P);
            } else {
                found = true;
            }
    }
    if(found == false){
        P = nil;

    }
    return P;
}

void delete_Data(List &L,string &nama){
    address prec,Q,P;
    P = search_by_nama(L,nama);
    if(P == nil){
        cout<<"Data nama Tidak Ditemukan"<<endl;
    }else{
        if(P == first(L)){
            deleteFirst(L,Q);
        }else if(next(P) == nil){
            deleteLast(L,Q);
        }else{
            prec = first(L);
            while(next(prec) != P){
                prec = next(prec);
            }
            deleteAfter(L,prec,Q);
        }
    }
}

