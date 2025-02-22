from PetShop import PetShop

def main():
    pet_shop = PetShop()
    while True:
        print("\nMenu PetShop:")
        print("1. Tampilkan Data Produk")
        print("2. Tambah Data Produk")
        print("3. Ubah Data Produk")
        print("4. Hapus Data Produk")
        print("5. Cari Data Produk")
        print("0. Keluar")
        pilihan = input("Pilih menu: ")

        if pilihan == "1":
            pet_shop.tampilkan_data()
        elif pilihan == "2":
            id = int(input("Masukkan ID: "))
            nama = input("Masukkan Nama Produk: ")
            kategori = input("Masukkan Kategori Produk: ")
            harga = float(input("Masukkan Harga Produk: "))
            pet_shop.tambah_data(id, nama, kategori, harga)
        elif pilihan == "3":
            id_ubah = int(input("Masukkan ID Produk yang akan diubah: "))
            nama_baru = input("Masukkan Nama Baru: ")
            kategori_baru = input("Masukkan Kategori Baru: ")
            harga_baru = float(input("Masukkan Harga Baru: "))
            pet_shop.ubah_data(id_ubah, nama_baru, kategori_baru, harga_baru)
        elif pilihan == "4":
            id_hapus = int(input("Masukkan ID Produk yang akan dihapus: "))
            pet_shop.hapus_data(id_hapus)
        elif pilihan == "5":
            nama_cari = input("Masukkan Nama Produk yang dicari: ")
            pet_shop.cari_data(nama_cari)
        elif pilihan == "0":
            print("Keluar dari program.")
            break
        else:
            print("Pilihan tidak valid.")

if __name__ == "__main__":
    main()
