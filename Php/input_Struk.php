<?php
$nama = readline("Masukkan nama barang: ");
$harga = floatval(readline("Masukkan harga barang: "));
$jumlah = intval(readline("Masukkan jumlah beli: "));
$diskon = 0.02;

$total = $harga * $jumlah;
if ($total > 15200) {
    $diskon = $total * 0.02;
} else {
    $diskon = 0.00;
}

$total_bayar = $total - $diskon;

echo "===== STRUK PEMBELIAN =====\n";
echo"Nama Barang   : ", $nama, "\n";
echo"Harga Satuan  : Rp", $harga, "\n";
echo"Jumlah Beli   :", $jumlah, "pcs\n";
echo"Total Harga   : Rp", $total, "\n";
echo"Diskon        : Rp", $diskon, "\n";
echo"Total Bayar   : Rp", $total_bayar, "\n";
echo"===========================";
?>