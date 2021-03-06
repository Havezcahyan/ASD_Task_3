#include "list.h"

void createList(List &L) {
    /**
    * FS : first(L) diset Nil
    */
    //-------------your code here-------------
    // NIM : 1301154295
    first(L)=Nil; 
    

    //----------------------------------------
}

address alokasi(infotype x) {
    /**
    * FS : mengembalikan elemen list baru dengan info = x, next elemen = Nil
    */

    address P;
    //-------------your code here-------------
    // NIM : 1301154295
    address P = new ElmList;
    info(P) = x;
    next(P) = Nil; 

    //----------------------------------------
    return P;
}

void dealokasi(address &P) {
    /**
    * FS : menghapus elemen yang ditunjuk oleh P (delete)
    */
    //-------------your code here-------------
   // NIM : 1301154295
    delete P;
	
    //----------------------------------------
}

void insertFirst(List &L, address P) {
    /**
    * IS : List L mungkin kosong
    * FS : elemen yang ditunjuk P menjadi elemen pertama pada List L
    */
    //-------------your code here-------------
    // NIM : 1301154505
    if (first(L) == Nil){
        first(L) = P;
    }else {
        next (P) = first (L);
        first (L) P;
    }

    //----------------------------------------
}

void insertLast(List &L, address P) {
    /**
    * IS : List L mungkin kosong
    * FS : elemen yang ditunjuk P menjadi elemen terakhir pada List L
    */
    //-------------your code here-------------
   // NIM : 1301154505
    if (first(L) == Nil){
        first (L) = P;
    } else {
        address Q = first (L);
        while (Q->next !=Nil){
            Q = Q->next;
        }
        Q->next =P;
    }
    
    //----------------------------------------
}

address findElm(List L, infotype x) {
    /**
    * IS : List L mungkin kosong
    * FS : mengembalikan elemen dengan info.ID = x.ID,
           mengembalikan Nil jika tidak ditemukan
    */

    address P;
    //-------------your code here-------------
    // NIM : 1301154505
    address P = first (L);
    while (next(P) !=Nil){
        if (info(P) == x){
            cout<<info(P)<<endl;
            P = next(P);
        }else {
            P = next (P);
        }
    }
	
    //----------------------------------------
    return P;
}

void deleteFirst(List &L, address &P) {
    /**
    * IS : List L mungkin kosong
    * FS : elemen pertama di dalam List L dilepas dan disimpan/ditunjuk oleh P
    */
    //-------------your code here-------------
    // NIM : 1301154505
    if (first (L) != Nil){
        P= first (L);
        if (next(P) == Nil){
            first(L) = Nil;
        } else {
            first(L) = next (P);
            next (P) = Nil;
        }
    }

    //----------------------------------------
}

void deleteLast(List &L, address &P) {
    /**
    * IS : List L mungkin kosong
    * FS : elemen tarakhir di dalam List L dilepas dan disimpan/ditunjuk oleh P
    */
    //-------------your code here-------------
    // NIM : 130154505
    if (first (L) !=Nil){
        address Q = first (L);
        if (Q->next ==Nil){
            first (L)= Nil;
        } else {
            while ((Q->next)->next !=Nil){
                Q = Q->next;
            }
            P = Q -> next;
            Q->next = Nil;
        }
    }
    //----------------------------------------
}

void printInfo(List L) {
    /**
    * FS : menampilkan info seluruh elemen list L
    */
    //-------------your code here-------------
    // NIM : 1301154295
    address P = first (L);
    while (P !=Nil){
        cout<<info(P)<<endl;
        P = next(P);
    }
    //----------------------------------------
}


void insertAfter(address Prec, address P) {
    /**
    * IS : Prec dan P tidak NULL
    * FS : elemen yang ditunjuk P menjadi elemen di belakang elemen yang
    *      ditunjuk pointer Prec
    */
    //-------------your code here-------------
    // NIM : 1301154505
    if (next(Prec) !=Nil){
        next(P) = next (Prec);
        next(Prec) = P;
    } else {
        next(Prec) = P;
        next(P) = Nil;
    }

    //----------------------------------------

}
void deleteAfter(address Prec, address &P) {
    /**
    * IS : Prec tidak NULL
    * FS : elemen yang berada di belakang elemen Prec dilepas
    *      dan disimpan/ditunjuk oleh P
    */
    //-------------your code here-------------
    // NIM : 1301154505
    if (next(Prec) !=Nil){
        P = next (Prec);
        next(Prec) = next (P);
        dealokasi (P);
    }
    
    //----------------------------------------
}

