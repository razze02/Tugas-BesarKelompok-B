#ifndef TIM_H_INCLUDED
#define TIM_H_INCLUDED
#include <string>
#include <iostream>

//Mutya Hazna(103012500046)


using namespace std;

struct infoTim
{
    string idTim;
    string namaTim;
    string namaKapten;
    int jumlahAnggota;
    int poin;
    int jumlahMenang;
};

typedef  struct elmTim *addressTim   // variabel alias untuk pointer

// kerangka dari elemen list
struct elmTim
{
    infoTim info;
    addressTim next;
};

// kerangka dari list
struct listTim
{
    addressTim first;
};

// pengecekan apakah list kosong
bool isEmpty(listTim l);
/* I.S. list LMK terdefinisi
   F.S. true jika list kosong dan false jika tidak kosong */

// pembuatan list kosong
void createlistTim(listTim &l);
/* I.S. ~
   F.S. terbentuk list kosong */

// manajemen memori
addressTim createElmTim(infoTim x);
/* I.S. info mata kuliah x terdefinisi
   F.S. mengembalikan alamat elemen berisi x dengan next NULL */

void deleteElmTim(addressTim &p);
/* I.S. pointer p terdefinisi
   F.S. memori yang digunakan p dikembalikan ke sistem */

// pencarian sebuah elemen list
addressTim findTim(listTim l, string idTim);
/* I.S. list LMK dan kode mata kuliah terdefinisi
   F.S. mengembalikan alamat elemen mata kuliah yang cocok atau NULL jika tidak ditemukan
*/

// penambahan elemen *
void insertFirstTim(listTim &l, addressTim p);
/* I.S. terdefinisi list LMK yang mungkin kosong dan elemen list p
   F.S. menempatkan elemen beralamat p pada awal list */

void insertAfterTim(listTim &l, addressTim prec, addressTim p);
/* I.S. terdefinisi list LMK yang mungkin kosong, elemen list p dan elemn list prec
   F.S. menempatkan elemen beralamat p sesudah elemen beralamat prec */

void insertLastTim(listTim &l, addressTim p);
/* I.S. terdefinisi list LMK yang mungkin kosong dan elemen list p
   F.S. menempatkan elemen beralamat p pada akhir list */

// penghapusan sebuah elemen
void deleteFirstTim(listTim &l, addressTim &p);
/* I.S. terdefinisi list LMK yang mungkin kosong dan elemen list p
   F.S. p adalah alamat dari alamat elemen pertama list
        yang akan dihapus dan elemen list selanjutnya akan menjadi
        elemenlist pertama atau tidak ada elemen list pertama*/

void deleteLastTim(listTim &l, addressTim &p);

/* I.S. terdefinisi list LMK yang mungkin kosong dan elemen list p
   F.S. p adalah alamat dari alamat elemen terakhir list
        yang akan dihapus dan elemen list sebelumnya akan menjadi
        elemenlist terakhir atau tidak ada elemen list terakhir */

void deleteAfterTim(listTim &l, addressTim prec, addressTim &p);
/* I.S. terdefinisi list LMK yang mungkin kosong, elemen list p dan elemn list prec
   F.S. p adalah alamat dari alamat elemen list setelah prec
        yang akan dihapus dan elemen list setelah p akan terhubung
        langsung dengan prec atau tidak ada elemen list setelahnya */

void showTim(listTim l);
/* I.S. terdefinisi list LMK yang mungkin kosong
   F.S. jika list tidak kosong menampilkan semua info yang ada pada list */

infoTim inputTim();
/* I.S. ~
   F.S. meminta data mahasisswa dari user */

#endif // TIM_H_INCLUDED
