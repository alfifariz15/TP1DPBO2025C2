#include "LatMod1.cpp"

int main() {
    // Membuat objek PetShop
    PetShop myPetShop;

    int choice;
    string name, category;
    string priceInput; // Untuk menyimpan input harga sebagai string
    string idInput;    // Untuk menyimpan input ID sebagai string
    double price;
    int id;

    // Loop utama untuk menampilkan menu dan memproses pilihan pengguna
    while (true) {
        cout << "\nMenu:\n";
        cout << "1. Tampilkan Produk\n";
        cout << "2. Tambah Produk\n";
        cout << "3. Update Produk\n";
        cout << "4. Hapus Produk\n";
        cout << "5. Cari Produk berdasarkan Nama\n";
        cout << "6. Keluar\n";
        cout << "Pilih menu: ";
        cin >> choice;
        cin.ignore(); // Membersihkan newline setelah cin >> choice

        switch (choice) {
            case 1:
                // Menampilkan semua produk
                myPetShop.displayProducts();
                break;
            case 2:
                // Menambahkan produk baru
                cout << "Masukkan Nama Produk: ";
                getline(cin, name); // Menggunakan getline untuk membaca nama
                cout << "Masukkan Kategori Produk: ";
                getline(cin, category); // Menggunakan getline untuk membaca kategori
                cout << "Masukkan Harga Produk: ";
                getline(cin, priceInput); // Menggunakan getline untuk membaca harga sebagai string
                price = stod(priceInput); // Konversi string ke double
                myPetShop.addProduct(name, category, price);
                break;
            case 3:
                // Mengupdate produk berdasarkan ID
                cout << "Masukkan ID Produk yang akan diupdate: ";
                getline(cin, idInput); // Menggunakan getline untuk membaca ID sebagai string
                id = stoi(idInput); // Konversi string ke int
                cout << "Masukkan Nama Produk baru: ";
                getline(cin, name); // Menggunakan getline untuk membaca nama
                cout << "Masukkan Kategori Produk baru: ";
                getline(cin, category); // Menggunakan getline untuk membaca kategori
                cout << "Masukkan Harga Produk baru: ";
                getline(cin, priceInput); // Menggunakan getline untuk membaca harga sebagai string
                price = stod(priceInput); // Konversi string ke double
                myPetShop.updateProduct(id, name, category, price);
                break;
            case 4:
                // Menghapus produk berdasarkan ID
                cout << "Masukkan ID Produk yang akan dihapus: ";
                getline(cin, idInput); // Menggunakan getline untuk membaca ID sebagai string
                id = stoi(idInput); // Konversi string ke int
                myPetShop.deleteProduct(id);
                break;
            case 5:
                // Mencari produk berdasarkan nama
                cout << "Masukkan Nama Produk yang akan dicari: ";
                getline(cin, name); // Menggunakan getline untuk membaca nama
                myPetShop.searchProductByName(name);
                break;
            case 6:
                // Keluar dari program
                return 0;
            default:
                // Menangani pilihan yang tidak valid
                cout << "Pilihan tidak valid. Silahkan coba lagi.\n";
                // Membersihkan buffer input jika input tidak valid
                cin.clear(); // Membersihkan flag error
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Membersihkan buffer
        }
    }

    return 0;
}
