#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <limits>

using namespace std;

class PetShop {
private:
    // Struct untuk menyimpan data produk
    struct Product {
    private:
        int id;          // ID produk
        string name;     // Nama produk
        string category; // Kategori produk
        double price;    // Harga produk

    public:
        // Constructor untuk inisialisasi produk
        Product(int id, const string& name, const string& category, double price)
            : id(id), name(name), category(category), price(price) {}

        // Getter untuk mendapatkan ID produk
        int getId() const {
            return id;
        }

        // Setter untuk mengubah ID produk
        void setId(int newId) {
            id = newId;
        }

        // Getter untuk mendapatkan nama produk
        string getName() const {
            return name;
        }

        // Setter untuk mengubah nama produk
        void setName(const string& newName) {
            name = newName;
        }

        // Getter untuk mendapatkan kategori produk
        string getCategory() const {
            return category;
        }

        // Setter untuk mengubah kategori produk
        void setCategory(const string& newCategory) {
            category = newCategory;
        }

        // Getter untuk mendapatkan harga produk
        double getPrice() const {
            return price;
        }

        // Setter untuk mengubah harga produk
        void setPrice(double newPrice) {
            price = newPrice;
        }
    };

    vector<Product> products; // Vector untuk menyimpan daftar produk
    int nextId; // Variabel untuk menghasilkan ID otomatis

public:
    // Constructor untuk inisialisasi PetShop
    PetShop() : nextId(1) {
        cout << "PetShop dibuat.\n";
    }

    // Method untuk menampilkan semua produk
    void displayProducts() {
        if (products.empty()) {
            cout << "Tidak ada produk yang tersedia.\n";
            return;
        }

        cout << "Daftar Produk:\n";
        for (const auto& product : products) {
            cout << "ID: " << product.getId() << ", Nama: " << product.getName()
                 << ", Kategori: " << product.getCategory() << ", Harga: Rp" << product.getPrice() << "\n";
        }
    }

    // Method untuk menambahkan produk baru
    void addProduct(const string& name, const string& category, double price) {
        // Membuat objek produk baru dengan ID otomatis
        Product newProduct(nextId++, name, category, price);
        // Menambahkan produk ke dalam vector
        products.push_back(newProduct);
        cout << "Produk berhasil ditambahkan.\n";
    }

    // Method untuk mengupdate produk berdasarkan ID
    void updateProduct(int id, const string& name, const string& category, double price) {
        // Mencari produk berdasarkan ID
        auto it = find_if(products.begin(), products.end(), [id](const Product& p) {
            return p.getId() == id;
        });

        if (it != products.end()) {
            // Jika produk ditemukan, update data produk
            it->setName(name);
            it->setCategory(category);
            it->setPrice(price);
            cout << "Produk berhasil diupdate.\n";
        } else {
            // Jika produk tidak ditemukan, tampilkan pesan error
            cout << "Produk dengan ID " << id << " tidak ditemukan.\n";
        }
    }

    // Method untuk menghapus produk berdasarkan ID
    void deleteProduct(int id) {
        // Mencari produk berdasarkan ID
        auto it = find_if(products.begin(), products.end(), [id](const Product& p) {
            return p.getId() == id;
        });

        if (it != products.end()) {
            // Jika produk ditemukan, hapus produk dari vector
            products.erase(it);
            cout << "Produk berhasil dihapus.\n";
        } else {
            // Jika produk tidak ditemukan, tampilkan pesan error
            cout << "Produk dengan ID " << id << " tidak ditemukan.\n";
        }
    }

    // Method untuk mencari produk berdasarkan nama
    void searchProductByName(const string& name) {
        bool found = false;
        // Iterasi melalui semua produk untuk mencari yang sesuai dengan nama
        for (const auto& product : products) {
            if (product.getName() == name) {
                cout << "Produk ditemukan: ID: " << product.getId() << ", Nama: " << product.getName()
                     << ", Kategori: " << product.getCategory() << ", Harga: Rp" << product.getPrice() << "\n";
                found = true;
            }
        }

        if (!found) {
            // Jika produk tidak ditemukan, tampilkan pesan error
            cout << "Produk dengan nama " << name << " tidak ditemukan.\n";
        }
    }
};