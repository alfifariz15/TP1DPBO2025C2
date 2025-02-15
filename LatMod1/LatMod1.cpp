#include <iostream>
#include <string>
#include <algorithm>
#include <limits>

using namespace std;

class PetShop {
private:
    // Atribut untuk menyimpan data produk
    static const int MAX_PRODUCTS = 100; // Batas maksimum produk
    int ids[MAX_PRODUCTS];          // Array untuk ID produk
    string names[MAX_PRODUCTS];     // Array untuk nama produk
    string categories[MAX_PRODUCTS]; // Array untuk kategori produk
    double prices[MAX_PRODUCTS];    // Array untuk harga produk
    int nextId; // Variabel untuk menghasilkan ID otomatis
    int productCount; // Jumlah produk yang tersimpan

public:
    // Constructor untuk inisialisasi PetShop
    PetShop() : nextId(1), productCount(0) {
        cout << "PetShop dibuat.\n";
    }
    
    // Destructor untuk membersihkan resource
    ~PetShop() {
        cout << "PetShop dihapus.\n";
    }

    // Getter dan Setter untuk ID produk
    int getId(int index) const {
        if (index >= 0 && index < productCount) {
            return ids[index];
        }
        return -1; // Mengembalikan -1 jika index tidak valid
    }

    void setId(int index, int newId) {
        if (index >= 0 && index < productCount) {
            ids[index] = newId;
        }
    }

    // Getter dan Setter untuk nama produk
    string getName(int index) const {
        if (index >= 0 && index < productCount) {
            return names[index];
        }
        return ""; // Mengembalikan string kosong jika index tidak valid
    }

    void setName(int index, const string& newName) {
        if (index >= 0 && index < productCount) {
            names[index] = newName;
        }
    }

    // Getter dan Setter untuk kategori produk
    string getCategory(int index) const {
        if (index >= 0 && index < productCount) {
            return categories[index];
        }
        return ""; // Mengembalikan string kosong jika index tidak valid
    }

    void setCategory(int index, const string& newCategory) {
        if (index >= 0 && index < productCount) {
            categories[index] = newCategory;
        }
    }

    // Getter dan Setter untuk harga produk
    double getPrice(int index) const {
        if (index >= 0 && index < productCount) {
            return prices[index];
        }
        return -1.0; // Mengembalikan -1.0 jika index tidak valid
    }

    void setPrice(int index, double newPrice) {
        if (index >= 0 && index < productCount) {
            prices[index] = newPrice;
        }
    }

    // Method untuk menampilkan semua produk
    void displayProducts() const {
        if (productCount == 0) {
            cout << "Tidak ada produk yang tersedia.\n";
            return;
        }

        cout << "Daftar Produk:\n";
        for (int i = 0; i < productCount; i++) {
            cout << "ID: " << ids[i] << ", Nama: " << names[i]
                 << ", Kategori: " << categories[i] << ", Harga: Rp" << prices[i] << "\n";
        }
    }

    // Method untuk menambahkan produk baru
    void addProduct(const string& name, const string& category, double price) {
        if (productCount >= MAX_PRODUCTS) {
            cout << "Kapasitas produk penuh. Tidak bisa menambahkan produk baru.\n";
            return;
        }

        // Menambahkan produk ke dalam array
        ids[productCount] = nextId++;
        names[productCount] = name;
        categories[productCount] = category;
        prices[productCount] = price;
        productCount++;

        cout << "Produk berhasil ditambahkan.\n";
    }

    // Method untuk mengupdate produk berdasarkan ID
    void updateProduct(int id, const string& name, const string& category, double price) {
        bool found = false;
        for (int i = 0; i < productCount; i++) {
            if (ids[i] == id) {
                // Jika produk ditemukan, update data produk
                names[i] = name;
                categories[i] = category;
                prices[i] = price;
                found = true;
                cout << "Produk berhasil diupdate.\n";
                break;
            }
        }

        if (!found) {
            cout << "Produk dengan ID " << id << " tidak ditemukan.\n";
        }
    }

    // Method untuk menghapus produk berdasarkan ID
    void deleteProduct(int id) {
        bool found = false;
        for (int i = 0; i < productCount; i++) {
            if (ids[i] == id) {
                // Geser semua elemen setelahnya ke kiri
                for (int j = i; j < productCount - 1; j++) {
                    ids[j] = ids[j + 1];
                    names[j] = names[j + 1];
                    categories[j] = categories[j + 1];
                    prices[j] = prices[j + 1];
                }
                productCount--;
                found = true;
                cout << "Produk berhasil dihapus.\n";
                break;
            }
        }

        if (!found) {
            cout << "Produk dengan ID " << id << " tidak ditemukan.\n";
        }
    }

    // Method untuk mencari produk berdasarkan nama
    void searchProductByName(const string& name) const {
        bool found = false;
        for (int i = 0; i < productCount; i++) {
            if (names[i] == name) {
                cout << "Produk ditemukan: ID: " << ids[i] << ", Nama: " << names[i]
                     << ", Kategori: " << categories[i] << ", Harga: Rp" << prices[i] << "\n";
                found = true;
            }
        }

        if (!found) {
            cout << "Produk dengan nama " << name << " tidak ditemukan.\n";
        }
    }
};
