#ifndef PARTISIPASI_H_INCLUDED
#define PARTISIPASI_H_INCLUDED
#include "tim.h"
#include <string>
#include <iostream>

//Mutya Hazna(103012500046)

using namespace std;

struct infoPartisipasi
{
    string tanggalPendaftaran;
    string grup;
    string statusPeserta;
};

typedef infoPartisipasi infotypePartisipasi;         // variabel alias untuk infor
typedef  struct elmPartisipasi *addressPartisipasi;   // variabel alias untuk pointer

// kerangka dari elemen list
struct elmPartisipasi
{
    infoPartisipasi info;
    addressTim child;
    addressPartisipasi next;
};

// kerangka dari list
struct ListPartisipasi
{
    addressPartisipasi first;
};

// pengecekan apakah list kosong
bool isEmpty(ListPartisipasi L);
/* I.S. list LK terdefinisi
   F.S. true jika list kosong dan false jika tidak kosong */

// pembuatan list kosong
void createListPartisipasi(ListPartisipasi &L);
/* I.S. ~
   F.S. terbentuk list kosong */

// manajemen memori
addressPartisipasi createElmPartisipasi(infotypePartisipasi x, addressTim T);

/* I.S. info KRS x dan alamat mata kuliah terdefinisi
   F.S. mengembalikan alamat elemen KRS berisi x, next NULL, dan menunjuk pMatakuliah */

void deleteElmPartisipasi(addressPartisipasi &P);
/* I.S. pointer P terdefinisi
   F.S. elemen KRS di-dealokasi; elemen mata kuliah yang ditunjuk tidak ikut dihapus */

// pencarian sebuah elemen list
addressPartisipasi findPartisipasi(ListPartisipasi L, string idTim);
/* I.S. list LK milik mahasiswa dan ID KRS terdefinisi
   F.S. mengembalikan alamat elemen KRS yang cocok atau NULL jika tidak ditemukan
*/

// penambahan elemen *
void insertFirstPartisipasi(ListPartisipasi &L, addressPartisipasi P);
/* I.S. terdefinisi list LK yang mungkin kosong dan elemen list P
   F.S. menempatkan elemen beralamat P pada awal list */

void insertAfterPartisipasi(ListPartisipasi &L, addressPartisipasi Prec,addressPartisipasi P);
/* I.S. terdefinisi list LK yang mungkin kosong, elemen list P dan elemn list prec
   F.S. menempatkan elemen beralamat P sesudah elemen beralamat Prec */

void insertLastPartisipasi(ListPartisipasi &L, addressPartisipasi P);
/* I.S. terdefinisi list LK yang mungkin kosong dan elemen list P
   F.S. menempatkan elemen beralamat P pada akhir list */

// penghapusan sebuah elemen
void deleteFirstPartisipasi(ListPartisipasi &L, addressPartisipasi &P);
/* I.S. terdefinisi list LK yang mungkin kosong dan elemen list P
   F.S. P adalah alamat dari alamat elemen pertama list
        yang akan dihapus dan elemen list selanjutnya akan menjadi
        elemenlist pertama atau tidak ada elemen list pertama*/

void deleteLastPartisipasi(ListPartisipasi &L, addressPartisipasi &P);
/* I.S. terdefinisi list LK yang mungkin kosong dan elemen list P
   F.S. P adalah alamat dari alamat elemen terakhir list
        yang akan dihapus dan elemen list sebelumnya akan menjadi
        elemenlist terakhir atau tidak ada elemen list terakhir */

void deleteAfterPartisipasi(ListPartisipasi &L, addressPartisipasi Prec, addressPartisipasi &P);
/* I.S. terdefinisi list LK yang mungkin kosong, elemen list P dan elemn list prec
   F.S. P adalah alamat dari alamat elemen list setelah prec
        yang akan dihapus dan elemen list setelah p akan terhubung
        langsung dengan prec atau tidak ada elemen list setelahnya */

void showPartisipasi(ListPartisipasi L);
/* I.S. terdefinisi list LK yang mungkin kosong
   F.S. jika list tidak kosong menampilkan semua info yang ada pada list */

infotypePartisipasi inputPartisipasi();
/* I.S. ~
        F.S. meminta data KRS dari user */

#endif // KRS_H_INCLUDED
