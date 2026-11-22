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

typedef  struct elmPartisipasi *addressPartisipasi;   // variabel alias untuk pointer

// kerangka dari elemen list
struct elmPartisipasi
{
   infoPartisipasi info;
   addressTim child;
   addressPartisipasi next;
};

// kerangka dari list
struct listPartisipasi
{
   addressPartisipasi first;
};

// pengecekan apakah list kosong
bool isEmpty(listPartisipasi l);
/* I.S. list LK terdefinisi
   F.S. true jika list kosong dan false jika tidak kosong */

// pembuatan list kosong
void createlistPartisipasi(listPartisipasi &l);
/* I.S. ~
   F.S. terbentuk list kosong */

// manajemen memori
addressPartisipasi createElmPartisipasi(infoPartisipasi x, addressTim q);

/* I.S. info KRS x dan alamat mata kuliah terdefinisi
   F.S. mengembalikan alamat elemen KRS berisi x, next NULL, dan menunjuk pMatakuliah */

void deleteElmPartisipasi(addressPartisipasi &p);
/* I.S. pointer p terdefinisi
   F.S. elemen KRS di-dealokasi; elemen mata kuliah yang ditunjuk tidak ikut dihapus */

// pencarian sebuah elemen list
addressPartisipasi findPartisipasi(listPartisipasi l, string idTim);
/* I.S. list LK milik mahasiswa dan ID KRS terdefinisi
   F.S. mengembalikan alamat elemen KRS yang cocok atau NULL jika tidak ditemukan
*/

// penambahan elemen *
void insertFirstPartisipasi(listPartisipasi &l, addressPartisipasi p);
/* I.S. terdefinisi list LK yang mungkin kosong dan elemen list p
   F.S. menempatkan elemen beralamat p pada awal list */

void insertAfterPartisipasi(listPartisipasi &l, addressPartisipasi prec, addressPartisipasi p);
/* I.S. terdefinisi list LK yang mungkin kosong, elemen list p dan elemn list prec
   F.S. menempatkan elemen beralamat p sesudah elemen beralamat prec */

void insertLastPartisipasi(listPartisipasi &l, addressPartisipasi p);
/* I.S. terdefinisi list LK yang mungkin kosong dan elemen list p
   F.S. menempatkan elemen beralamat p pada akhir list */

// penghapusan sebuah elemen
void deleteFirstPartisipasi(listPartisipasi &l, addressPartisipasi &p);
/* I.S. terdefinisi list LK yang mungkin kosong dan elemen list p
   F.S. p adalah alamat dari alamat elemen pertama list
        yang akan dihapus dan elemen list selanjutnya akan menjadi
        elemenlist pertama atau tidak ada elemen list pertama*/

void deleteLastPartisipasi(listPartisipasi &l, addressPartisipasi &p);
/* I.S. terdefinisi list LK yang mungkin kosong dan elemen list p
   F.S. p adalah alamat dari alamat elemen terakhir list
        yang akan dihapus dan elemen list sebelumnya akan menjadi
        elemenlist terakhir atau tidak ada elemen list terakhir */

void deleteAfterPartisipasi(listPartisipasi &l, addressPartisipasi prec, addressPartisipasi &p);
/* I.S. terdefinisi list LK yang mungkin kosong, elemen list p dan elemn list prec
   F.S. p adalah alamat dari alamat elemen list setelah prec
        yang akan dihapus dan elemen list setelah p akan terhubung
        langsung dengan prec atau tidak ada elemen list setelahnya */

void showPartisipasi(listPartisipasi l);
/* I.S. terdefinisi list LK yang mungkin kosong
   F.S. jika list tidak kosong menampilkan semua info yang ada pada list */

infoPartisipasi inputPartisipasi();
/* I.S. ~
        F.S. meminta data KRS dari user */

#endif // PARTISIPASI_H_INCLUDED
