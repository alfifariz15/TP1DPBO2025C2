class PetShop:
    def __init__(self):
        self.daftar_produk = []
        # Menambahkan 2 produk default saat objek PetShop dibuat
        self.tambah_data(1, "Makanan Kucing", "Makanan", 50000)
        self.tambah_data(2, "Kandang Anjing", "Aksesoris", 200000)

    def tampilkan_data(self):
        if not self.daftar_produk:
            print("Tidak ada data produk.")
        else:
            print("Daftar Produk di PetShop:")
            for produk in self.daftar_produk:
                self.tampilkan_info(produk)

    def tambah_data(self, id, nama, kategori, harga):
        produk_baru = {"id": id, "nama": nama, "kategori": kategori, "harga": harga}
        self.daftar_produk.append(produk_baru)
        print("Data produk berhasil ditambahkan.")

    def ubah_data(self, id, nama_baru, kategori_baru, harga_baru):
        for produk in self.daftar_produk:
            if produk["id"] == id:
                self.set_nama(produk, nama_baru)
                self.set_kategori(produk, kategori_baru)
                self.set_harga(produk, harga_baru)
                print("Data produk berhasil diubah.")
                return
        print(f"Produk dengan ID {id} tidak ditemukan.")

    def hapus_data(self, id):
        for produk in self.daftar_produk:
            if produk["id"] == id:
                self.daftar_produk.remove(produk)
                print("Data produk berhasil dihapus.")
                return
        print(f"Produk dengan ID {id} tidak ditemukan.")

    def cari_data(self, nama):
        ditemukan = False
        for produk in self.daftar_produk:
            if self.get_nama(produk).lower() == nama.lower():
                print("Produk ditemukan:")
                self.tampilkan_info(produk)
                ditemukan = True
        if not ditemukan:
            print(f'Produk dengan nama "{nama}" tidak ditemukan.')

    def tampilkan_info(self, produk):
        print(f"ID: {produk['id']}")
        print(f"Nama: {produk['nama']}")
        print(f"Kategori: {produk['kategori']}")
        print(f"Harga: Rp{produk['harga']}")
        print("--------------------------")

    # Getter
    def get_id(self, produk):
        return produk["id"]

    def get_nama(self, produk):
        return produk["nama"]

    def get_kategori(self, produk):
        return produk["kategori"]

    def get_harga(self, produk):
        return produk["harga"]

    # Setter
    def set_nama(self, produk, nama):
        produk["nama"] = nama

    def set_kategori(self, produk, kategori):
        produk["kategori"] = kategori

    def set_harga(self, produk, harga):
        produk["harga"] = harga
