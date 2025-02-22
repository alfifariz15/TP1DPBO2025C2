<?php
include "petshop.php";
$petshop = new PetShop();

if (isset($_POST["tambah"])) {
    $id = count($petshop->tampilkanData()) + 1;
    $nama = $_POST["nama"];
    $kategori = $_POST["kategori"];
    $harga = $_POST["harga"];

    $gambar = $_FILES["gambar"]["name"];
    $targetDir = "uploads/";
    $targetFile = $targetDir . basename($gambar);

    if (move_uploaded_file($_FILES["gambar"]["tmp_name"], $targetFile)) {
        $petshop->tambahData($id, $nama, $kategori, $harga, $targetFile);
        echo "<script>alert('Produk berhasil ditambahkan!'); window.location.href='index.php';</script>";
    } else {
        echo "<script>alert('Gagal mengupload gambar!'); window.location.href='index.php';</script>";
    }
}
?>
