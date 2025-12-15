<?php
function hitung_umur($tahunLahir, $tahunSekarang) {
    $umur = $tahunSekarang - $tahunLahir;
    return $umur;
}

echo "Umur saya adalah " . hitung_umur(1994, 2015) . " tahun.\n";