# TP1DPBO2025C2
Saya Muhammad Alfi Fariz dengan NIM 2311174 mengerjakan TP 1 dalam mata kuliah Desain Pemrograman Berorientasi Objek
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

# Dokumentasi Output LatMod 1

![Screenshot 2025-02-15 141630](https://github.com/user-attachments/assets/c58c3b04-8662-4455-b49a-57970a191edf)
![Screenshot 2025-02-15 141651](https://github.com/user-attachments/assets/5a5bb456-e5c9-45f8-a56d-77cd7f597a92)
![image](https://github.com/user-attachments/assets/775b3c75-340c-476f-9e77-7d18ddd3972b)

# Dokumentasi TP 1 buat java dan python sama hasil nya seperti ini

https://github.com/user-attachments/assets/e9c9995d-92d4-472f-ab9a-64cc110d75ab

Dan ini untuk php
![Screenshot 2025-02-22 202931](https://github.com/user-attachments/assets/f0ad28c3-19da-4c3d-8b03-5fbbc84172d6)

# Penjelasan alur program
alur kerjanya:
a. Class PetShop
Atribut:
- id: ID unik untuk setiap produk.
- nama: Nama produk.
- kategori: Kategori produk (misalnya, makanan, aksesoris).
- harga: Harga produk.
Constructor:
- Menginisialisasi objek Produk dengan data yang diberikan (ID, nama, kategori, harga).
Methods:
- Getter dan Setter: Untuk mengakses dan mengubah nilai atribut.
- tampilkanInfo(): Menampilkan informasi produk (ID, nama, kategori, harga).
Atribut:
- daftarProduk (Java) atau daftar_produk (Python): Sebuah list/array yang menyimpan objek/dictionary produk.
Constructor:
- Menginisialisasi list produk dan menambahkan beberapa produk default saat objek PetShop dibuat.
Methods:
1. tampilkanData():
- Menampilkan semua produk yang ada dalam daftar.
- Jika daftar kosong, menampilkan pesan bahwa tidak ada data produk.
2. tambahData():
- Menambahkan produk baru ke dalam daftar.
- Data produk (ID, nama, kategori, harga) dimasukkan oleh pengguna.
3. ubahData():
- Mengubah data produk yang sudah ada berdasarkan ID.
- Pengguna memasukkan data baru (nama, kategori, harga).
4. hapusData():
- Menghapus produk dari daftar berdasarkan ID.
5.cariData():
- Mencari produk berdasarkan nama.
- Menampilkan informasi produk jika ditemukan.
6. tampilkanInfo() (Python) atau tampilkanInfo() (Java):
- Menampilkan detail produk (ID, nama, kategori, harga).

b. Main Program
1. Fungsi Utama:
- Membuat objek PetShop.
- Menampilkan menu pilihan kepada pengguna.
- Memproses pilihan pengguna dengan memanggil metode yang sesuai dari objek PetShop.
2. Menu:
- Tampilkan Data Produk:
- Memanggil metode tampilkanData().
- Tambah Data Produk:
- Meminta input dari pengguna (ID, nama, kategori, harga) dan memanggil metode tambahData().
3. Ubah Data Produk:
- Meminta input ID produk yang akan diubah dan data baru, lalu memanggil metode ubahData().
4. Hapus Data Produk:
- Meminta input ID produk yang akan dihapus dan memanggil metode hapusData().
5. Cari Data Produk:
- Meminta input nama produk yang dicari dan memanggil metode cariData().
6. Keluar:
- Mengakhiri program.
