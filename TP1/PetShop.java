import java.util.ArrayList;
import java.util.Scanner;

class PetShop {
    // Atribut
    private ArrayList<Produk> daftarProduk;

    // Constructor
    public PetShop() {
        daftarProduk = new ArrayList<>();
        // Menambahkan 2 produk default saat objek PetShop dibuat
        daftarProduk.add(new Produk(1, "Makanan Kucing", "Makanan", 50000));
        daftarProduk.add(new Produk(2, "Kandang Anjing", "Aksesoris", 200000));
    }

    // Destructor (tidak diperlukan di Java, karena Java memiliki garbage
    // collection)

    // Method untuk menampilkan semua data
    public void tampilkanData() {
        if (daftarProduk.isEmpty()) {
            System.out.println("Tidak ada data produk.");
        } else {
            System.out.println("Daftar Produk di PetShop:");
            for (Produk produk : daftarProduk) {
                produk.tampilkanInfo(); // Menggunakan metode baru
            }
        }
    }

    // Method untuk menambahkan data baru
    public void tambahData(int id, String nama, String kategori, double harga) {
        Produk produkBaru = new Produk(id, nama, kategori, harga);
        daftarProduk.add(produkBaru);
        System.out.println("Data produk berhasil ditambahkan.");
    }

    // Method untuk mengubah data yang sudah ada
    public void ubahData(int id, String namaBaru, String kategoriBaru, double hargaBaru) {
        for (Produk produk : daftarProduk) {
            if (produk.getId() == id) {
                produk.setNama(namaBaru);
                produk.setKategori(kategoriBaru);
                produk.setHarga(hargaBaru);
                System.out.println("Data produk berhasil diubah.");
                return;
            }
        }
        System.out.println("Produk dengan ID " + id + " tidak ditemukan.");
    }

    // Method untuk menghapus data
    public void hapusData(int id) {
        for (Produk produk : daftarProduk) {
            if (produk.getId() == id) {
                daftarProduk.remove(produk);
                System.out.println("Data produk berhasil dihapus.");
                return;
            }
        }
        System.out.println("Produk dengan ID " + id + " tidak ditemukan.");
    }

    // Method untuk mencari data berdasarkan nama produk
    public void cariData(String nama) {
        boolean ditemukan = false;
        for (Produk produk : daftarProduk) {
            if (produk.getNama().equalsIgnoreCase(nama)) {
                System.out.println("Produk ditemukan:");
                produk.tampilkanInfo(); // Menampilkan dengan metode baru
                ditemukan = true;
            }
        }
        if (!ditemukan) {
            System.out.println("Produk dengan nama \"" + nama + "\" tidak ditemukan.");
        }
    }    

    public static class Produk {
        private int id;
        private String nama;
        private String kategori;
        private double harga;

        // Constructor
        public Produk(int id, String nama, String kategori, double harga) {
            this.id = id;
            this.nama = nama;
            this.kategori = kategori;
            this.harga = harga;
        }

        // Getter dan Setter
        public int getId() {
            return id;
        }

        public String getNama() {
            return nama;
        }

        public void setNama(String nama) {
            this.nama = nama;
        }

        public String getKategori() {
            return kategori;
        }

        public void setKategori(String kategori) {
            this.kategori = kategori;
        }

        public double getHarga() {
            return harga;
        }

        public void setHarga(double harga) {
            this.harga = harga;
        }

        public void tampilkanInfo() {
            System.out.println("ID: " + id);
            System.out.println("Nama: " + nama);
            System.out.println("Kategori: " + kategori);
            System.out.println("Harga: Rp" + harga);
            System.out.println("--------------------------");
        }
    }
}
