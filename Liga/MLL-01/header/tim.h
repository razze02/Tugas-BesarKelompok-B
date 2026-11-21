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

typedef infoTim infotypeTim;         // variabel alias untuk infor
typedef  struct elmTim *addressTim   // variabel alias untuk pointer

// kerangka dari elemen list
struct elmTim
{
    infotypeTim info;
    addressTim next;
};

// kerangka dari list
struct ListTim
{
    addressTim first;
};

// pengecekan apakah list kosong
bool isEmpty(ListTim L);
/* I.S. list LMK terdefinisi
   F.S. true jika list kosong dan false jika tidak kosong */

// pembuatan list kosong
void createListTim(ListTim &L);
/* I.S. ~
   F.S. terbentuk list kosong */

// manajemen memori
addressTim createElmTim(infotypeTim x);
/* I.S. info mata kuliah x terdefinisi
   F.S. mengembalikan alamat elemen berisi x dengan next NULL */

void deleteElmTim(addressTim &P);
/* I.S. pointer P terdefinisi
   F.S. memori yang digunakan P dikembalikan ke sistem */

// pencarian sebuah elemen list
addressTim findTim(ListTim L, string idTim);
/* I.S. list LMK dan kode mata kuliah terdefinisi
   F.S. mengembalikan alamat elemen mata kuliah yang cocok atau NULL jika tidak ditemukan
*/

// penambahan elemen *
void insertFirstTim(ListTim &L, addressTim P);
/* I.S. terdefinisi list LMK yang mungkin kosong dan elemen list P
   F.S. menempatkan elemen beralamat P pada awal list */

void insertAfterTim(ListTim &L, addressTim Prec, addressTim P);
/* I.S. terdefinisi list LMK yang mungkin kosong, elemen list P dan elemn list prec
   F.S. menempatkan elemen beralamat P sesudah elemen beralamat Prec */

void insertLastTim(ListTim &L, addressTim P);
/* I.S. terdefinisi list LMK yang mungkin kosong dan elemen list P
   F.S. menempatkan elemen beralamat P pada akhir list */

// penghapusan sebuah elemen
void deleteFirstTim(ListTim &L, addressTim &P);
/* I.S. terdefinisi list LMK yang mungkin kosong dan elemen list P
   F.S. P adalah alamat dari alamat elemen pertama list
        yang akan dihapus dan elemen list selanjutnya akan menjadi
        elemenlist pertama atau tidak ada elemen list pertama*/

void deleteLastTim(ListTim &L, addressTim &P);

/* I.S. terdefinisi list LMK yang mungkin kosong dan elemen list P
   F.S. P adalah alamat dari alamat elemen terakhir list
        yang akan dihapus dan elemen list sebelumnya akan menjadi
        elemenlist terakhir atau tidak ada elemen list terakhir */

void deleteAfterTim(ListTim &L, addressTim Prec, addressTim &P);
/* I.S. terdefinisi list LMK yang mungkin kosong, elemen list P dan elemn list prec
   F.S. P adalah alamat dari alamat elemen list setelah prec
        yang akan dihapus dan elemen list setelah p akan terhubung
        langsung dengan prec atau tidak ada elemen list setelahnya */

void showTim(ListTim L);
/* I.S. terdefinisi list LMK yang mungkin kosong
   F.S. jika list tidak kosong menampilkan semua info yang ada pada list */

infotypeTim inputTim();
/* I.S. ~
   F.S. meminta data mahasisswa dari user */

#endif // MATAKULIAH_H_INCLUDED
