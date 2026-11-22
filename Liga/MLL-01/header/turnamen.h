#ifndef TURNAMEN_H_INCLUDED
#define TURNAMEN_H_INCLUDED
#include "partisipasi.h"
#include <string>
#include <iostream>

using namespace std;

struct infoTurnamen
{
   string idTurnamen;
   string nama;
   string game;
   string tanggal;
   string lokasi;
};

typedef struct elmTurnamen *adrTurnamen;  // variabel alias untuk pointer

// kerangka dari elemen list
struct elmTurnamen
{
   infotypeTurnamen info;
   adrTurnamen next;
   adrTurnamen prev;
   listPartisipasi daftarPartisipasi;
};

// kerangka dari list
struct listTurnamen
{
   adrTurnamen first;
   adrTurnamen last;
};

// pengecekan apakah list kosong
bool isEmptyTurnamen(listTurnamen l);
/* I.S. list LM terdefinisi
   F.S. true jika list kosong dan false jika tidak kosong */

void createListTurnamen(listTurnamen &l);
/* I.S. ~
   F.S. terbentuk list kosong */

// manajemen memori
adrTurnamen alokasiTurnamen(infotypeTurnamen x);
/* I.S. info mahasiswa x terdefinisi
   F.S. mengembalikan alamat elemen berisi x dengan prev/next NULL
        dan daftar KRS dalam keadaan kosong */

void dealokasiTurnamen(adrTurnamen &p);
/* I.S. pointer p terdefinisi
   F.S. elemen mahasiswa dan seluruh elemen KRS relasinya di-dealokasi;
        elemen mata kuliah yang dirujuk tidak ikut dihapus */

// pencarian sebuah elemen list
adrTurnamen findTurnamen(listTurnamen l, string idTurnamen);
/* I.S. list LM dan NIM terdefinisi
   F.S. mengembalikan alamat elemen mahasiswa yang cocok atau NULL jika tidak ditemukan
*/

// penambahan elemen *
void insertFirstTurnamen(listTurnamen &l, adrTurnamen p);
/* I.S. terdefinisi list LM yang mungkin kosong dan elemen list p
   F.S. menempatkan elemen beralamat p pada awal list */

void insertAfterTurnamen(listTurnamen &l, adrTurnamen prec, adrTurnamen p);
/* I.S. terdefinisi list LM yang mungkin kosong, elemen list p dan elemn list prec
   F.S. menempatkan elemen beralamat p sesudah elemen beralamat prec */

void insertLastTurnamen(listTurnamen &l, adrTurnamen p);
/* I.S. terdefinisi list LM yang mungkin kosong dan elemen list p
   F.S. menempatkan elemen beralamat p pada akhir list */

// penghapusan sebuah elemen
void deleteFirstTurnamen(listTurnamen &l, adrTurnamen &p);
/* I.S. terdefinisi list LM yang mungkin kosong dan elemen list p
   F.S. p adalah alamat dari alamat elemen pertama list
        yang akan dihapus dan elemen list selanjutnya akan menjadi
        elemenlist pertama atau tidak ada elemen list pertama*/

void deleteLastTurnamen(listTurnamen &l, adrTurnamen &p);
/* I.S. terdefinisi list LM yang mungkin kosong dan elemen list p
   F.S. p adalah alamat dari alamat elemen terakhir list
        yang akan dihapus dan elemen list sebelumnya akan menjadi
        elemenlist terakhir atau tidak ada elemen list terakhir */

void deleteAfterTurnamen(listTurnamen &l, adrTurnamen prec, adrTurnamen &p);
/* I.S. terdefinisi list LM yang mungkin kosong, elemen list p dan elemn list prec
   F.S. p adalah alamat dari alamat elemen list setelah prec
        yang akan dihapus dan elemen list setelah p akan terhubung
        langsung dengan prec atau tidak ada elemen list setelahnya */

void showAllurnamen(listTurnamen l);
/* I.S. terdefinisi list LM yang mungkin kosong
   F.S. jika list tidak kosong menampilkan semua info yang ada pada list */

bool isTimReferenced(listTurnamen l, adrTim q);
/* I.S. terdefinisi list mahasiswa dan alamat mata kuliah
        F.S. true jika mata kuliah masih direferensikan oleh KRS mahasiswa */

infotypeTurnamen inputDataTurnamen();
/* I.S. ~
   F.S. meminta data mahasisswa dari user */

#endif // TURNAMEN_H_INCLUDED
