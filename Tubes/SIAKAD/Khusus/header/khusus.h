#ifndef KHUSUS_H_INCLUDED
#define KHUSUS_H_INCLUDED
#include "../../MLL-01/header/partisipasi.h"
#include "../../MLL-01/header/turnamen.h"
#include "../../BST/header/nilaiBST.h"

void khusus1(ListTurnamen &LM, ListTim &LMK, BST &T);
/* I.S. -
   F.S. Melakukan pengisian nilai mahasiswa dengan memilih mahasiswa dan mata kuliah tersedia.
*/

void khusus2(ListTurnamen &LM, ListTim &LMK, BST &T);
/* I.S. -
   F.S. Menyimpan nilai mahasiswake BST berdasarkan nomor resi (unik dan acak).
*/

void khusus3(ListTurnamen &LM, ListTim &LMK, BST &T);
/* I.S. -
   F.S. Menampilkan Kartu Hasil Studi (KHS) mahasiswa berdasarkan semester tertentu dengan menampilkan
        daftar mata kuliah beserta nilai yang diperoleh
*/

void khusus4(ListTurnamen &LM, ListTim &LMK, BST &T);
/* I.S. -
   F.S. Menghitung Indeks Prestasi Semester (IPS) mahasiswa berdasarkan nilai mata kuliah dan jumlah SKS yang
        diambil pada semester tersebut
*/

#endif // KHUSUS_H_INCLUDED
