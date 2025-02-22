<?php
class PetShop {
    private $daftarProduk = [];

    // Constructor
    public function __construct() {
        $this->daftarProduk[] = [
            "id" => 1,
            "nama" => "Makanan Kucing",
            "kategori" => "Makanan",
            "harga" => 50000,
            "gambar" => "uploads/makanan_kucing.jpeg"
        ];
        $this->daftarProduk[] = [
            "id" => 2,
            "nama" => "Kandang Anjing",
            "kategori" => "Aksesoris",
            "harga" => 200000,
            "gambar" => "uploads/kandang_anjing.png"
        ];
    }

    // Menampilkan semua data produk
    public function tampilkanData() {
        return $this->daftarProduk;
    }

    // Menambah produk baru
    public function tambahData($id, $nama, $kategori, $harga, $gambar) {
        $this->daftarProduk[] = [
            "id" => $id,
            "nama" => $nama,
            "kategori" => $kategori,
            "harga" => $harga,
            "gambar" => $gambar
        ];
    }

    // Mengubah data produk
    public function ubahData($id, $namaBaru, $kategoriBaru, $hargaBaru, $gambarBaru) {
        foreach ($this->daftarProduk as &$produk) {
            if ($produk["id"] == $id) {
                $produk["nama"] = $namaBaru;
                $produk["kategori"] = $kategoriBaru;
                $produk["harga"] = $hargaBaru;
                $produk["gambar"] = $gambarBaru;
                return true;
            }
        }
        return false;
    }

    // Menghapus produk
    public function hapusData($id) {
        foreach ($this->daftarProduk as $key => $produk) {
            if ($produk["id"] == $id) {
                unset($this->daftarProduk[$key]);
                return true;
            }
        }
        return false;
    }

    // Mencari produk berdasarkan nama
    public function cariData($nama) {
        foreach ($this->daftarProduk as $produk) {
            if (strcasecmp($produk["nama"], $nama) == 0) {
                return $produk;
            }
        }
        return null;
    }

    // Getter dan Setter
    public function getProduk($id) {
        foreach ($this->daftarProduk as $produk) {
            if ($produk["id"] == $id) {
                return $produk;
            }
        }
        return null;
    }

    public function setNamaProduk($id, $namaBaru) {
        foreach ($this->daftarProduk as &$produk) {
            if ($produk["id"] == $id) {
                $produk["nama"] = $namaBaru;
                return true;
            }
        }
        return false;
    }

    public function setKategoriProduk($id, $kategoriBaru) {
        foreach ($this->daftarProduk as &$produk) {
            if ($produk["id"] == $id) {
                $produk["kategori"] = $kategoriBaru;
                return true;
            }
        }
        return false;
    }

    public function setHargaProduk($id, $hargaBaru) {
        foreach ($this->daftarProduk as &$produk) {
            if ($produk["id"] == $id) {
                $produk["harga"] = $hargaBaru;
                return true;
            }
        }
        return false;
    }

    public function setGambarProduk($id, $gambarBaru) {
        foreach ($this->daftarProduk as &$produk) {
            if ($produk["id"] == $id) {
                $produk["gambar"] = $gambarBaru;
                return true;
            }
        }
        return false;
    }
}
?>
