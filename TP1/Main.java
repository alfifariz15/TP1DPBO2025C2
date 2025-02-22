import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        PetShop petShop = new PetShop();
        Scanner scanner = new Scanner(System.in);
        int pilihan;

        do {
            System.out.println("\nMenu PetShop:");
            System.out.println("1. Tampilkan Data Produk");
            System.out.println("2. Tambah Data Produk");
            System.out.println("3. Ubah Data Produk");
            System.out.println("4. Hapus Data Produk");
            System.out.println("5. Cari Data Produk");
            System.out.println("0. Keluar");
            System.out.print("Pilih menu: ");
            pilihan = scanner.nextInt();
            scanner.nextLine(); // Membersihkan newline

            switch (pilihan) {
                case 1:
                    petShop.tampilkanData();
                    break;
                case 2:
                    System.out.print("Masukkan ID: ");
                    int id = scanner.nextInt();
                    scanner.nextLine();
                    System.out.print("Masukkan Nama Produk: ");
                    String nama = scanner.nextLine();
                    System.out.print("Masukkan Kategori Produk: ");
                    String kategori = scanner.nextLine();
                    System.out.print("Masukkan Harga Produk: ");
                    double harga = scanner.nextDouble();
                    petShop.tambahData(id, nama, kategori, harga);
                    break;
                case 3:
                    System.out.print("Masukkan ID Produk yang akan diubah: ");
                    int idUbah = scanner.nextInt();
                    scanner.nextLine();
                    System.out.print("Masukkan Nama Baru: ");
                    String namaBaru = scanner.nextLine();
                    System.out.print("Masukkan Kategori Baru: ");
                    String kategoriBaru = scanner.nextLine();
                    System.out.print("Masukkan Harga Baru: ");
                    double hargaBaru = scanner.nextDouble();
                    petShop.ubahData(idUbah, namaBaru, kategoriBaru, hargaBaru);
                    break;
                case 4:
                    System.out.print("Masukkan ID Produk yang akan dihapus: ");
                    int idHapus = scanner.nextInt();
                    petShop.hapusData(idHapus);
                    break;
                case 5:
                    System.out.print("Masukkan Nama Produk yang dicari: ");
                    String namaCari = scanner.nextLine();
                    petShop.cariData(namaCari);
                    break;
                case 0:
                    System.out.println("Keluar dari program.");
                    break;
                default:
                    System.out.println("Pilihan tidak valid.");
            }
        } while (pilihan != 0);

        scanner.close();
    }
}