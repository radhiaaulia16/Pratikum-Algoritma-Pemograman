# Pratikum-Algoritma-Pemograman

Repositori ini berisi penjelasan mengenai materi yang ada di dalam jobsheet beserta tugas dan latihan yang dikerjakan oleh mahasiswa. Penjelasan beserta link jobsheet telah tertera di bawah.

Dosen : Randi Proska Sandra, M.Sc<br>
Seksi : 202313430012<br>
Mahasiswa : Radhia Aulia Nisa (23343049)<br>

# Jobsheets #
[Jobsheet 1 - Pengantar Algoritma dan Pemrograman](https://github.com/radhiaaulia16/Pratikum-Algoritma-Pemograman/tree/main/Jobsheet%201-%20Algoritma%2C%20Pemograman%20IDE)<br>

Algoritma merupakan urutan langkah-langkah yang tersusun secara sistematis dan logis guna menyelesaikan suatu permasalahan atau untuk mencapai tujuan tertentu. Sedangkan, pemrograman adalah suatu seni dalam proses penulisan kode menggunakan satu atau lebih algoritma yang saling berhubungan dengan menggunakan suatu bahasa pemrograman tertentu sehingga menjadi suatu program komputer. 

Bahasa pemograman adalah suatu instruksi dasar untuk meminta komputer menjalankan suatu fungsi tertentu. Bahasa pemrograman ini merupakan kumpulan aturan sintaks dan semantik yang dipakai untuk mendefinisikan program komputer. Pada mata kuliah Algoritma Pemograman, bahasa pemograman yang dipakai adalah Bahasa C, merupakan sebuah bahasa pemrograman yang dapat digunakan untuk membuat program apa saja dan imperative yang mendukung pemrograman terstruktur dan rekursif. Bahasa C banyak menginspirasi bahasa-bahasa pemrograman yang lain seperti : Java, Javascript, C++, C#, PHP, dsb. Bahasa-bahasa tersebut memiliki sintaks yang hampir sama dengan bahasa C.

IDE (Integrated Development Environment) adalah perangkat lunak yang digunakan oleh programmer untuk membuat sebuah program komputer atau sebagai tempat pengembangan aplikasi. IDE merupakan text editor yang memiliki compiler dan debugger sekaligus sehingga memungkinkan sebuah program dapat ditulis, diuji, dan dijalankan dalam satu aplikasi. IDE memiliki banyak fitur yang mendukung proses pemrograman. Contohnya adalah DevC++, Microsoft Visual Studio, CodeBlocks, NetBeans, Eclips, dll.<br> <br>


[Jobsheet 2 - Pemrograman Dasar C](https://github.com/radhiaaulia16/Pratikum-Algoritma-Pemograman/tree/main/Jobsheet%202-%20Pemograman%20Dasar%20C)<br>

Pada pemograman dasar C, terdapat aturan dasar penulisan kode (sintaks) yang wajib dipahami. Baris paling awal terdapat kode #include berfungsi untuk mengimpor fungsi-fungsi yang sudah didefinisikan pada header file. Header file adalah file yang berisi definisi fungsi yang sudah dibuat. Tujuannya agar bisa digunakan pada program C yang lainnya. Biasanya file ini berekstensi .h, contoh : #include <stdio.h>

Selanjutnya, struktur main (main function) merupakan perintah yang wajib ada dalam setiap kode program bahasa C. Fungsi main() adalah fungsi utama dalam program karena fungsi inilah yang akan dieksekusi pertama kali saat program dijalankan.

int main() ; mengembalikan nilai setelah program selesai dieksekusi.<br>
void main() ; tidak mengembalikan nilai apapun.

Di dalam sebuah fungsi main, terdapat statement yaitu perintah atau fungsi untuk melakukan sesuatu. Setiap statement wajib diakhiri dengan semikolon ( ; ), jika tidak maka akan muncul pesan error pada program. Setiap kode memerlukan indentifier, merupakan sebuah nama yang digunakan untuk mengidentifikasi variabel, fungsi, atau semua item yang didefinisikan oleh programmer.

Dalam proses penulisan program pasti adanya proses input dan output. Input adalah suatu data yang dimasukkan programmer/user ke dalam program. Terdapat beberapa fungsi untuk mengambil input yaitu : scanf(), gets(), dan fgets(). Output adalah informasi yang dihasilkan setelah dilakukan proses. Output biasanya ditampilkan ke layar komputer. Beberapa fungsi menampilkan output yaitu : printf(), dan puts().<br> <br>


[Jobsheet 3 - Variabel, Konstanta dan Tipe Data](https://github.com/radhiaaulia16/Pratikum-Algoritma-Pemograman/tree/main/Jobsheet%203-%20Variabel%2C%20Konstanta%2C%20Tipe%20Data)<br>

Variabel adalah sebuah tempat menyimpan sebuah nilai. Berikut beberapa aturan penulisan variabel : 
1.	Nama variabel tidak boleh didahului dengan simbol dan angka.
2.	Nama variabel tidak boleh menggunakan kata kunci yang sudah ada pada bahasa C, contoh: if, int, void, dll.
3.	Nama variabel bersifat case sensitive, artinya huruf besar dan kecil dibedakan, contoh: nama dan Nama adalah dua variabel yang berbeda.
4.	Disarankan menggunakan underscore untuk nama variabel yang terdiri dari dua suku kata, contoh: nama_lengkap.

Sementara tipe data adalah jenis nilai yang akan tersimpan dalam variabel. Terdapat 8 jenis tipe data : char (tipe data yang berisi 1 huruf atau karakter), int (tipe data berupa angka), float (tipe data bilangan pecahan), double (sama seperti float, namun double memiliki ukuran penyimpanan yang lebih besar dibandingkan float), array, struct, pointer, enum, dan void.

Konstanta merupakan sebuah nilai tetapan atau variabel yang tidak dapat diubah nilainya. Terdapat dua cara pembuatan konstanta, yaitu : menggunakan #define, atau menggunakan const. Perbedaan pembuatan konstanta yang menggunakan #define dan const terletak pada format penulisannya. Pada #define kita tidak perlu menuliskan tipe data, sedangkan const harus. Pada #define kita tidak membutuhkan titik koma di akhir, sedangkan pada const kita harus menuliskan titik koma. Posisi penulisan untuk #define dan const bisa ditulis di dalam main() maupun di luar.<br><br>


[Jobsheet 4 - Operator](https://github.com/radhiaaulia16/Pratikum-Algoritma-Pemograman/tree/main/Jobsheet%204-%20Operator)<br>

Terdapat beberapa jenis operator dalam pemograman, operator sendiri merupakan sebuah simbol yang digunakan untuk melakukan operasi tertentu. Operator aritmatika  adalah  operator  yang  digunakan  untuk  operasi matematika. Operator penugasan (Assignment Operator) merupakan operator untuk memberikan tugas pada variabel, biasanya untuk mengisi nilai. Operator pembanding adalah operator untuk membandingkan dua buah nilai, dikenal juga dengan operator relasi.

Operator Logika digunakan untuk membuat operasi logika, yang menggunakan logika AND, OR, dan Negasi (kebalikan) dan yang menghasilkan nilai true atau false. Operator	bitwise merupakan operator yang	digunakan untuk	operasi berdasarkan bit (biner) dari sebuah nilai. Operator Bitwise terdiri atas AND, OR, XOR, NOT yang memiliki konsep mirip seperti Operator Logika sedangkan Left Shift dan Right Shift berfungsi menghasilkan nilai biner dari sisi tertentu.

Selain operator di atas, terdapat operator lain yang perlu diketahui. Operator & jika digunakan pada satu variabel, akan berfungsi untuk mengambil alamat memori dari variabel tersebut. Dan operator * kan berfungsi untuk membut sebuah pointer. Berikutnya ada operator ternary untuk membuat kondisi, cara kerjanya seperti percabangan if/else. Terakhir ada operator increment dan decrement untuk menambah dan mengurangi nilai dengan 1.<br><br>


[Jobsheet 5 - Flow Control (Decision Making)](https://github.com/radhiaaulia16/Pratikum-Algoritma-Pemograman/tree/main/Jobsheet%205-%20Flow%20Control%20(Decision%20Making))<br>

Bahasa C menyediakan sejumlah pernyataan aliran kontrol (juga disebut pernyataan Flow Control), yang merupakan pernyataan yang memungkinkan pemrogram untuk mengubah jalur eksekusi normal melalui program.

Pernyataan if merupakan percabangan yang hanya memiliki satu blok pilihan saat kondisi bernilai benar. Sedangkan, Pernyataan if/else merupakan percabangan yang memiliki dua blok pilihan. Blok pilihan pertama untuk kondisi benar, dan pilihan kedua untuk kondisi salah (else). Pernyataan if/else/if merupakan percabangan yang memiliki lebih dari dua blok pilihan.

Pernyataan switch case merupakan pernyataan yang dirancangan khusus untuk menanganipengambilan keputusan yang melibatkan sejumlah atau banyak alternatif penyelesaian. Kita dapat mermbuat blok kode (case) sebanyak yang diinginkan di dalam blok switch. Pada <value>, kita bisa isi dengan nilai yang nanti akan dibandingkan dengan varabel. Setiap case harus diakhiri dengan break. Khusus untuk default, tidak perlu diakhiri dengan break karena dia terletak di bagian akhir. Pemberian break bertujuan agar program berhenti mengecek case berikutnya saat sebuah case terpenuhi.

Pernyataan menggunakan opreator ternary merupakan bentuk lain dari percabangan if/else. Bisa dibilang: Bentuk singkatnya dari if/else. Operator ternary juga dikenal dengan sebutan operator kondisi (conditional operator). 

Semua bentuk blok percabangan di atas dapat kita buat di dalam percabangan yang lainnya. Ini disebut dengan percabangan bersarang atau nested if.<br><br>


[Jobsheet 6 - Flow Control (Looping)](https://github.com/radhiaaulia16/Pratikum-Algoritma-Pemograman/tree/main/Jobsheet%206-%20Flow%20Control%20(Loop))<br>

Loop adalah konstruksi aliran kontrol yang memungkinkan sepotong kode untuk dieksekusi secara berulang kali hingga beberapa kondisi terpenuhi. Loop ini memberikan kemudahan dalam pemrograman Anda, karena memungkinkan Anda melakukan banyak hal secara berulang tapi dengan program yang ringkas.

Perulangan yang dapat membantu dalam program bahasa C adalah counted loop dan uncounted loop.

Pengulangan For adalah counted loop. For dihitung mulai dari 0 hingga 10 dan setiap perulangan akan ditambah 1. i pada for menyimpan nilai hitungan bilangan yang akan selalu bertambah satu karena rumusnya adalah (int i = 0; i < 10; i ++).

Uncounted loop pada C adalah while dan do while. While merupakan perulangan yang memberikan counter selama variabel ulang bernilai y. Sementara do while akan melakukan 1 kali perulangan terlebih dahulu lalu menuju perulangan pada while, berbeda pada program yang hanya memiliki while saja. Nested loop adalah perulangan dalam perulangan yang menggunakan variabel i sebagai counter dann j sebagai counter secara berurutan.<br><br>


[Jobsheet 7 - Array](https://github.com/radhiaaulia16/Pratikum-Algoritma-Pemograman/tree/main/Jobsheet%207-%20Array)<br>

Array berfungsi menyimpan banyak data didalam program dalam satu tempat yang mana setiap data tersebut akan memiliki indeks. Indeks array akan dimulai dari nol dan ukurannya bergantung pada banyak data yang ditampung. Dalam program ukuran array ditentukan dengan kurung siku []. Array bisa dibuat satu atau dua dimensi bahkan lebih. Array multidimensi biasanya digunakan untuk membuat matriks.

Pengguna dapat melakukan perulangan elemen-elemen dalam sebuah array dengan menggunakan perulangan dasar seperti for, yang akan mencetak nilai-nilai tersebut dalam satu baris kode di dalam blok perulangan. Selain itu, pengguna juga dapat mengambil panjang array dengan menggunakan sizeof(), yang akan mengambil ukuran memori dari array tersebut.

Pengambilan nilai array dapat menggunakan string berformat seperti strcpy() yang berfungsi untuk mengcopy string, strcat() yang digunakan untuk menambahkan string dari belakang, strlen() yang berfungsi menghitung panjang string, dan strcmp() yang membandingkan dua string.<br><br>


[Jobsheet 8 - Fungsi dan Prosedur](https://github.com/radhiaaulia16/Pratikum-Algoritma-Pemograman/tree/main/Jobsheet%208-%20Fungsi%20dan%20Prosedur)<br>

Fungsi adalah sub-program yang bisa digunakan kembali baik di dalam program itu sendiri, maupun di program yang lain. Fungsi biasanya mengembalikan nilai dari hasil prosesnya dan pengguna harus menentukan tipe data yang akan dikembalikan oleh fungsi. Jika fungsi tidak memiliki nilai kembalian maka pengguna dapat menggunakan fungsi void.

Fungsi dengan parameter dapat menampung nilai yang akan dimasukkan, dan jika terdapat lebih dari satu parameter, dapat dipisahkan dengan koma. Fungsi yang mengembalikan nilai, jika terdapat fungsi yang tidak memiliki nilai kembalian, maka ada fungsi ini akan mengembalikan nilai agar dapat diproses pada tahap berikutnya. Penggunaan "return" digunakan untuk mengembalikan nilai dari suatu fungsi. Fungsi rekrusif adalah fungsi yang mampu memanggil dirinya sendiri.

Variabel terdiri dari variabel global dan lokal. Variabel global dapat diakses oleh semua fungsi, sementara variabel lokal hanya dapat diakses oleh fungsi yang mendefinisikannya. Pass by value" dan Pass by reference merupakan cara untuk memberikan nilai pada parameter.<br><br>


[Jobsheet 9 - Pointer](https://github.com/radhiaaulia16/Pratikum-Algoritma-Pemograman/tree/main/Jobsheet%209-%20Pointer)<br>




[Jobsheet 10 - Enumerasi dan Structure](https://github.com/radhiaaulia16/Pratikum-Algoritma-Pemograman/tree/main/Jobsheet%2010-%20Enumerasi%20Structure)<br>




[Jobsheet 11 - File Handling in C](https://github.com/radhiaaulia16/Pratikum-Algoritma-Pemograman/tree/main/Jobsheet%2011-%20File%20Handing%20in%20C)<br>
