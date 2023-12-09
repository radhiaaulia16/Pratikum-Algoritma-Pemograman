# Pratikum-Algoritma-Pemograman

Repositori ini berisi penjelasan mengenai materi yang ada di dalam jobsheet beserta tugas dan latihan yang dikerjakan oleh mahasiswa. Penjelasan beserta link jobsheet telah tertera di bawah.

Dosen : Randi Proska Sandra, M.Sc<br>
Kode Kelas : INF1.62.1008<br>
Seksi : 202313430012<br>
Mahasiswa : Radhia Aulia Nisa (23343049)<br><br>


# Jobsheets #
***
[Jobsheet 1 - Pengantar Algoritma dan Pemrograman](https://github.com/radhiaaulia16/Pratikum-Algoritma-Pemograman/tree/main/Jobsheet%201-%20Algoritma%2C%20Pemograman%20IDE)<br>

**Algoritma** <br>
Algoritma adalah urutan langkah-langkah yang disusun secara sistematis dan logis untuk menyelesaikan masalah atau mencapai tujuan tertentu.
Memiliki awal dan akhir.

**Pemrograman**<br>
Pemrograman adalah tindakan atau aktivitas penulisan, pengujian, perbaikan, dan pemeliharaan kode komputer.
Pemrograman melibatkan algoritma dan bahasa pemrograman. Pemrograman adalah seni menggunakan algoritma dengan menggunakan bahasa pemrograman tertentu.

**IDE**<br>
IDE dalah software atau perangkat lunak yang digunakan oleh programmer untuk membuat sebuah program komputer atau sebagai tempat pengembangan aplikasi. IDE memiliki banyak fitur yang mendukung proses pemrograman. Contohnya adalah DevC++, Microsoft Visual Studio, CodeBlocks, NetBeans, Eclips, dll.<br><br>

***

[Jobsheet 2 - Pemrograman Dasar C](https://github.com/radhiaaulia16/Pratikum-Algoritma-Pemograman/tree/main/Jobsheet%202-%20Pemograman%20Dasar%20C)<br>

**Sintaks**<br>
Dalam bahasa pemrograman C, sintaks merupakan aturan penulisan kode yang harus diikuti.<br>
Struktur dasar program C terbagi atas : 
- Header Files 
Menggunakan #include untuk memasukkan file khusus (header file) yang berisi definisi fungsi-fungsi.
Header file berisi deklarasi fungsi-fungsi dasar yang digunakan dalam program.<br>
Contoh: #include <stdio.h> untuk mengimpor file stdio.h.
- Main Function 
Program C harus memiliki fungsi main(), fungsi ini dieksekusi pertama kali saat program dijalankan.
Isi fungsi main() diawali dan diakhiri dengan tanda kurung kurawal { dan }.
Fungsi main() harus mengembalikan nilai, biasanya return 0 atau void.<br>
- Statement 
Statement adalah perintah atau fungsi untuk melakukan sesuatu.
Setiap statement diakhiri dengan titik koma (;).
- Identifier 
Nama yang digunakan untuk mengidentifikasi variabel, fungsi, atau item lain yang didefinisikan.<br>
Aturan penulisan: diawali huruf atau underscore, tidak boleh menggunakan karakter khusus, case sensitive, unik.
- Comments 
Komentar diabaikan oleh kompiler, digunakan untuk deskripsi atau dokumentasi.<br>
- Whitespaces 
Blank, tab, spasi, atau baris baru digunakan untuk memisahkan bagian dalam sebuah statement.<br>

**Proses Input & Output**<br>
- Input adalah sesuatu data yang kita masukan ke dalam program. Fungsi dasar untuk mengambil input : scanf(), gets(), dan fgets().
- Output adalah informasi yang dihasilkan setelah dilakukan proses. Output biasanya ditampilkan ke layar komputer. Fungsi dasar untuk menampilkan output : printf() dan puts().<br><br>

***

[Jobsheet 3 - Variabel, Konstanta dan Tipe Data](https://github.com/radhiaaulia16/Pratikum-Algoritma-Pemograman/tree/main/Jobsheet%203-%20Variabel%2C%20Konstanta%2C%20Tipe%20Data)<br>

**Variabel**<br>
Variabel adalah sebuah tempat menyimpan sebuah nilai. Berikut beberapa aturan penulisan variabel : 
1.	Nama variabel tidak boleh didahului dengan simbol dan angka.
2.	Nama variabel tidak boleh menggunakan kata kunci yang sudah ada pada bahasa C, contoh: if, int, void, dll.
3.	Nama variabel bersifat case sensitive, artinya huruf besar dan kecil dibedakan, contoh: nama dan Nama adalah dua variabel yang berbeda.
4.	Disarankan menggunakan underscore untuk nama variabel yang terdiri dari dua suku kata, contoh: nama_lengkap.

**Tipe Data**<br>
Tipe data adalah jenis nilai yang akan tersimpan dalam variabel. 
Terdapat 8 jenis tipe data : 
- char (tipe data yang berisi 1 huruf atau karakter)
- int (tipe data berupa angka)
- float (tipe data bilangan pecahan)
- double (sama seperti float, namun double memiliki ukuran penyimpanan yang lebih besar dibandingkan float)
- array
- struct
- pointer
- enum
- void<br>

**Konstanta**<br>
Konstanta merupakan sebuah nilai tetapan atau variabel yang tidak dapat diubah nilainya. Terdapat dua cara pembuatan konstanta, yaitu : menggunakan #define, atau menggunakan const. Perbedaan pembuatan konstanta yang menggunakan #define dan const terletak pada format penulisannya. Pada #define kita tidak perlu menuliskan tipe data, sedangkan const harus. Pada #define kita tidak membutuhkan titik koma di akhir, sedangkan pada const kita harus menuliskan titik koma. Posisi penulisan untuk #define dan const bisa ditulis di dalam main() maupun di luar.<br><br>

***

[Jobsheet 4 - Operator](https://github.com/radhiaaulia16/Pratikum-Algoritma-Pemograman/tree/main/Jobsheet%204-%20Operator)<br>

**Definisi Operator**<br>
Operator adalah simbol untuk melakukan operasi. Terbagi menjadi unary, binary, dan ternary tergantung jumlah operand. Operand adalah nilai yang dioperasikan.<br>

**1. Operator Aritmatika** <br>
Operator aritmatika digunakan untuk operasi matematika.
- Penjumlahan (+)
- Pengurangan (-)
- Perkalian (*)
- Pembagian (/)
- Sisa Bagi (%) <br>

**2. Operator Penugasan** <br>
Operator penugasan digunakan untuk memberikan nilai pada variabel.
- Pengisian Nilai (=)
- Pengisian dan Penambahan (+=)
- Pengisian dan Pengurangan (-=)
- Pengisian dan Perkalian (*=)
- Pengisian dan Pembagian (/=)
- Pengisian dan Sisa bagi (%=) <br>

**3. Operator Pembanding** <br>
Operator pembanding digunakan untuk membandingkan dua nilai dan menghasilkan nilai boolean (true/false). 
- Lebih Besar (>)
- Lebih Kecil (<)
- Sama Dengan (==)
- Tidak Sama dengan (!=)
- Lebih Besar Sama dengan (>=)
- Lebih Kecil Sama dengan (<=)<br>
Dalam bahasa C, true direpresentasikan sebagai 1, false sebagai 0.<br>

**4. Operator Logika** <br>
Operator logika digunakan untuk membuat keputusan berdasarkan kondisi logis.
- Logika AND (&&) => bernilai true jika semua pernyataan yang dibandingkan adalah benar.
- Logika OR (||) => bernilai true jika salah satu pernyataan yang dibandingkan adalah benar.
- Negasi (!) => membalikkan nilai yang awalnya true menjadi false atau sebaliknya.<br>

**5. Operator Bitwise** <br>
Operator bitwise melakukan operasi berdasarkan bit (biner) dari nilai.
- AND (&)
- OR (|)
- XOR (^)
- NOT (~)
- Left Shift (<<)
- Right Shift (>>) <br>

**6. Operator Lainnya**
- Alamat memori (&)
- Pointer (*)
- Ternary ( ? : )
- Increment (++)
- Decrement (--)<br><br>

***

[Jobsheet 5 - Flow Control (Decision Making)](https://github.com/radhiaaulia16/Pratikum-Algoritma-Pemograman/tree/main/Jobsheet%205-%20Flow%20Control%20(Decision%20Making))<br>

Bahasa C menyediakan sejumlah pernyataan aliran kontrol (juga disebut pernyataan Flow Control), yang merupakan pernyataan yang memungkinkan pemrogram untuk mengubah jalur eksekusi normal melalui program.

**1. Pernyataan if**<br>
Percabangan if merupakan percabangan yang hanya memiliki satu blok pilihan saat kondisi bernilai benar.<br>

**2. Pernyataan if/else**<br>
Percabangan if/else merupakan percabangan yang memiliki dua blok pilihan. Blok pilihan pertama untuk kondisi benar, dan pilihan kedua untuk kondisi salah (else).<br>

**3. Pernyataan if/else/if**<br>
Percabangan if/else/if merupakan percabangan yang memiliki lebih dari dua blok pilihan.<br>

**4. Pernyataan switch case**<br>
Pernyataan switch case merupakan pernyataan yang dirancangan khusus untuk menanganipengambilan keputusan yang melibatkan sejumlah atau banyak alternatif penyelesaian. Kita dapat mermbuat blok kode (case) sebanyak yang diinginkan di dalam blok switch. Pada <value>, kita bisa isi dengan nilai yang nanti akan dibandingkan dengan varabel. Setiap case harus diakhiri dengan break. Khusus untuk default, tidak perlu diakhiri dengan break karena dia terletak di bagian akhir. Pemberian break bertujuan agar program berhenti mengecek case berikutnya saat sebuah case terpenuhi.<br>

**5. Percabangan Operator Ternary**<br>
Pernyataan menggunakan opreator ternary merupakan bentuk lain dari percabangan if/else. Bisa dibilang: Bentuk singkatnya dari if/else. Operator ternary juga dikenal dengan sebutan operator kondisi (conditional operator). <br>

**6. Percabangan bersarang**<br>
Semua bentuk blok percabangan di atas dapat kita buat di dalam percabangan yang lainnya. Ini disebut dengan percabangan bersarang atau nested if.<br><br>

***

[Jobsheet 6 - Flow Control (Looping)](https://github.com/radhiaaulia16/Pratikum-Algoritma-Pemograman/tree/main/Jobsheet%206-%20Flow%20Control%20(Loop))<br>

Loop adalah konstruksi aliran kontrol yang memungkinkan sepotong kode untuk dieksekusi secara berulang kali hingga beberapa kondisi terpenuhi. Loop ini memberikan kemudahan dalam pemrograman Anda, karena memungkinkan Anda melakukan banyak hal secara berulang tapi dengan program yang ringkas.

Perulangan yang dapat membantu dalam program bahasa C adalah counted loop dan uncounted loop.

Pengulangan For adalah counted loop. For dihitung mulai dari 0 hingga 10 dan setiap perulangan akan ditambah 1. i pada for menyimpan nilai hitungan bilangan yang akan selalu bertambah satu karena rumusnya adalah (int i = 0; i < 10; i ++).

Uncounted loop pada C adalah while dan do while. While merupakan perulangan yang memberikan counter selama variabel ulang bernilai y. Sementara do while akan melakukan 1 kali perulangan terlebih dahulu lalu menuju perulangan pada while, berbeda pada program yang hanya memiliki while saja. Nested loop adalah perulangan dalam perulangan yang menggunakan variabel i sebagai counter dann j sebagai counter secara berurutan.<br><br>

***

[Jobsheet 7 - Array](https://github.com/radhiaaulia16/Pratikum-Algoritma-Pemograman/tree/main/Jobsheet%207-%20Array)<br>

Array berfungsi menyimpan banyak data didalam program dalam satu tempat yang mana setiap data tersebut akan memiliki indeks. Indeks array akan dimulai dari nol dan ukurannya bergantung pada banyak data yang ditampung. Dalam program ukuran array ditentukan dengan kurung siku []. Array bisa dibuat satu atau dua dimensi bahkan lebih. Array multidimensi biasanya digunakan untuk membuat matriks.

Pengguna dapat melakukan perulangan elemen-elemen dalam sebuah array dengan menggunakan perulangan dasar seperti for, yang akan mencetak nilai-nilai tersebut dalam satu baris kode di dalam blok perulangan. Selain itu, pengguna juga dapat mengambil panjang array dengan menggunakan sizeof(), yang akan mengambil ukuran memori dari array tersebut.

Pengambilan nilai array dapat menggunakan string berformat seperti strcpy() yang berfungsi untuk mengcopy string, strcat() yang digunakan untuk menambahkan string dari belakang, strlen() yang berfungsi menghitung panjang string, dan strcmp() yang membandingkan dua string.<br><br>

***

[Jobsheet 8 - Fungsi dan Prosedur](https://github.com/radhiaaulia16/Pratikum-Algoritma-Pemograman/tree/main/Jobsheet%208-%20Fungsi%20dan%20Prosedur)<br>

**Pengertian Fungsi**<br>
Fungsi adalah sub-program yang dapat digunakan kembali dalam program lain atau dalam program itu sendiri.
Fungsi main() adalah fungsi utama yang dieksekusi pertama kali dalam setiap program C.<br>

**Membuat Fungsi**<br>
Fungsi dalam bahasa C dibuat dengan menentukan tipe data untuk nilai kembalian dan bisa menggunakan kata kunci void jika tidak mengembalikan nilai.
Fungsi bisa dipanggil berulang kali dari fungsi main() atau fungsi lainnya.<br>

- **Fungsi dengan Parameter**<br>
Parameter adalah variabel yang menyimpan nilai untuk diproses di dalam fungsi.
Fungsi dapat memiliki parameter yang dikenali hanya di dalam fungsi tersebut.<br>

- **Fungsi yang Mengembalikan Nilai**<br>
Fungsi sering harus mengembalikan nilai agar dapat diproses di tahap berikutnya dengan kata kunci return.<br>

- **Fungsi Rekursif**<br>
Fungsi rekursif adalah fungsi yang memanggil dirinya sendiri.
Contoh penggunaan fungsi rekursif adalah fungsi faktorial.<br>

- **Variabel Lokal & Variabel Global**<br>
Variabel lokal hanya dapat diakses di dalam fungsi, sedangkan variabel global dapat diakses dari seluruh bagian program.<br>

- **Pass by Value & Pass by Reference**<br>
Pass by value adalah cara memberikan nilai pada parameter dengan langsung memberikan nilainya.
Pass by reference adalah memberikan alamat memori sebagai nilai parameter menggunakan pointer.<br><br>

***

[Jobsheet 9 - Pointer](https://github.com/radhiaaulia16/Pratikum-Algoritma-Pemograman/tree/main/Jobsheet%209-%20Pointer)<br>

 **Konsep Pointer**:
  - Pointer adalah variabel yang menunjuk/berisi alamat memori dari variabel lain sehingga variabel pointer yang kita buat bisa mengakses nilai/data yang ada pada variabel yang alamat memorinya ditunjuk tersebut
  - alamat memori berfungsi untuk menentukan lokasi penyimpanan data pada penyimpanan (RAM), alamat memori juga disebut reference atau referensi.<br><br>

***

[Jobsheet 10 - Enumerasi dan Structure](https://github.com/radhiaaulia16/Pratikum-Algoritma-Pemograman/tree/main/Jobsheet%2010-%20Enumerasi%20Structure)<br>
- **Enumerasi**:
  - Enumerasi adalah tipe data yang berisi sekumpulan konstanta dan termasuk kedalam tipe data bentukan karena kita yang membuatnya.
    
- **Struktur (Struct)**:
  - Struct adalah tipe data bentukan sama halnya dengan enumerasi/enum, namun struct berisi sekumpulan variabel dengan tipe data yang berbeda beda.
  - struct juga memiliki kata kunci typedef yang digunakan untuk mendefinisikan tipe data baru, typedef terletak di depan struct ketika dideklarasikan.<br><br>

***

[Jobsheet 11 - File Handling in C](https://github.com/radhiaaulia16/Pratikum-Algoritma-Pemograman/tree/main/Jobsheet%2011-%20File%20Handing%20in%20C)<br>

Untuk menyimpan data secara permanen, diperlukannya penyimpanan tambahan seperti file. File dapat dibaca dan ditulis untuk mempertahankan data dan memungkinkan pertukaran data antar program atau perangkat.<br>

**Membaca File dengan C**<br>
Terdapat dua jenis file yang ada di komputer :
- File teks, biasanya dibuat dengan teks editor, contohnya seperti: file txt, file csv, file html, dll. File teks mudah dibaca dan ditulis.<br>
- File binary, adalah file yang tersimpan dalam bentuk biner (0 & 1). Contohnya seperti: File exe dan file bin. File binary sulit dibaca, namun dapat menyimpan data lebih banyak dan aman.<br>

**Fungsi untuk membuka atau membaca file di C**<br>
- Fungsi fopen()
  - Fungsi fopen() akan membuka file sesuai dengan mode yang sesuai (r, w, a, ab, dsb).
  - Mode tersebut menentukan akses file: untuk membaca, menulis, atau menambahkan isi. 
  - Fungsi fopen() mengembalikan pointer yang menunjuk ke alamat memori file yang dibuka.<br>
- Fungsi fgets() membaca isi file per baris menggunakan pointer file (fptr) dan menyimpannya dalam variabel buffer.<br>

**Menulis dalam File dengan C**<br>
- Fungsi fputs() akan menulis teks ke dalam file yang sedang dibuka.
  - Membuka kembali file dengan mode yang berbeda memungkinkan penulisan atau penambahan isi file.

