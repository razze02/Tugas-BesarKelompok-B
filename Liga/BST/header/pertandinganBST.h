#ifndef PERTANDINGANBST_H_INCLUDED
#define PERTANDINGANBST_H_INCLUDED
#include <string>
#include <iostream>

using namespace std;

struct pertandingan
{
   string idPertandingan;
   string idTurnamen;
   string babak;
   string idTim1;
   string idTim2;
   int skorTim1;
   int skorTim2;
   string pemenang;
};

typedef struct nodePertandingan *adrPertandingan;   // variabel alias untuk pointer

// kerangka dari elemen node
struct nodePertandingan
{
   pertandingan info;
   adrPertandingan left;
   adrPertandingan right;
};

// kerangka dari BST
struct BST
{
   adrPertandingan root;
};

void tentukanPemenang(pertandingan &x);
/* I.S. grade terdefinisi
   F.S. mengembalikan urutan grade q < E < D < C < BC < B < AB < A,
        atau -1 jika grade tidak dikenal */

bool isBeforePertandingan(pertandingan left, pertandingan right);
/* I.S. record left dan right terdefinisi dengan grade yang dikenal
   F.S. true jika record left berada sebelum record right sesuai urutan BST */

------------;
/* I.S. komponen tugas, kuis, UTS, dan UAS terdefinisi
   F.S. nilai akhir dibulatkan dari 15% tugas + 15% kuis + 35% UTS + 35% UAS;
        grade q digunakan jika hasil berbobot di luar 0 sampai 100 */

// pengecekan apakah BST kosong
bool isEmptyBST(BST q);
/* I.S. BST q terdefinisi
   F.S. true jika BST kosong dan false jika tidak kosong */

// pembuatan BST kosong
void createBST(BST &q);
/* I.S. ~
   F.S. terbentuk BST kosong */

// manajemen memori
adrPertandingan alokasiPertandingan(pertandingan x);
/* I.S. info x terdefinisi
   F.S. mengembalikan alamat node berisi x dengan anak kiri dan kanan NULL */

void dealokasiPertandingan(adrPertandingan &p);
/* I.S. pointer p terdefinisi
   F.S. memori yang digunakan p dikembalikan ke sistem */

// pencarian sebuah elemen node
adrPertandingan findPertandingan(BST q, string idPertandingan);
/* I.S. BST q dan identitas mahasiswa, mata kuliah, serta periode terdefinisi
   F.S. mengembalikan alamat node yang cocok atau NULL jika tidak ditemukan
*/

// penambahan elemen *
void insertPertandingan(BST &q, adrPertandingan p);
/* I.S. terdefinisi BST q yang mungkin kosong dan elemen node p
   F.S. menempatkan elemen beralamat p menurut q < E < D < C < BC < B < AB < A,
        lalu NIM, kode MK, semester, dan tahun akademik sebagai tie-breaker */

// penghapusan node yang sudah diketahui alamatnya
void deleteNodePertandingan(BST &q, adrPertandingan &p);
/* I.S. terdefinisi BST q yang mungkin kosong dan elemen node p
   F.S. p adalah alamat dari alamat elemen yang akan dihapus.
        elemen lain menggantikan posisi elemen p yang dihapus
        sesuai aturan BST*/

void deletePertandinganById(BST &q, string idPertandingan);
/* I.S. terdefinisi BST q dan identitas record nilai
   F.S. record yang cocok dihapus jika ditemukan */

void printInOrder(BST q);
/* I.S. terdefinisi BST q
   F.S. seluruh record ditampilkan dengan traversal in-order */

void printPreOrder(BST q);
/* I.S. terdefinisi BST q
   F.S. seluruh record ditampilkan dengan traversal pre-order */

void printPostOrder(BST q);
/* I.S. terdefinisi BST q
   F.S. seluruh record ditampilkan dengan traversal post-order */

adrPertandingan findMinPertandingan(BST q);
/* I.S. terdefinisi BST q
   F.S. mengembalikan node dengan grade minimum atau NULL jika BST kosong */

adrPertandingan findMaxPertandingan(BST q);
/* I.S. terdefinisi BST q
   F.S. mengembalikan node dengan grade maksimum atau NULL jika BST kosong */

int heightBST(BST q);
/* I.S. terdefinisi BST q
   F.S. mengembalikan tinggi BST; tinggi pohon kosong adalah 0 */

int countNodeBST(BST q);
/* I.S. terdefinisi BST q
   F.S. mengembalikan jumlah node dalam BST */

pertandingan inputDataPertandingan();
/* I.S. ~
   F.S. meminta data nilai akademik dari user */


#endif // PERTANDINGANBST_H_INCLUDED
