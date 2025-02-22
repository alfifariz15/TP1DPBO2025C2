<?php
include "petshop.php";
$petshop = new PetShop();
$produkList = $petshop->tampilkanData();
?>

<!DOCTYPE html>
<html lang="id">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>PetShop</title>
    <link rel="stylesheet" href="style.css">
</head>
<body>
    <h1>Daftar Produk PetShop</h1>
    <table border="1">
        <tr>
            <th>ID</th>
            <th>Nama</th>
            <th>Kategori</th>
            <th>Harga</th>
            <th>Gambar</th>
        </tr>
        <?php foreach ($produkList as $produk) : ?>
            <tr>
                <td><?= $produk["id"] ?></td>
                <td><?= $produk["nama"] ?></td>
                <td><?= $produk["kategori"] ?></td>
                <td>Rp<?= number_format($produk["harga"], 0, ',', '.') ?></td>
                <td><img src="<?= $produk["gambar"] ?>" width="100" alt="Gambar Produk"></td>
            </tr>
        <?php endforeach; ?>
    </table>

    <h2>Tambah Produk Baru</h2>
    <form action="process.php" method="POST" enctype="multipart/form-data">
        <input type="text" name="nama" placeholder="Nama Produk" required><br>
        <input type="text" name="kategori" placeholder="Kategori" required><br>
        <input type="number" name="harga" placeholder="Harga" required><br>
        <input type="file" name="gambar" required><br>
        <button type="submit" name="tambah">Tambah Produk</button>
    </form>
</body>
</html>
