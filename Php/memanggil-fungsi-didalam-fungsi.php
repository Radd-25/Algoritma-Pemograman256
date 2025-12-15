<?php

function hitung_umur($tahunLahir, $tahunSekarang) {
    $umur = $tahunSekarang - $tahunLahir;
    return $umur;
}

function perkenalan($nama, $salam="Assalamualaikum"){ 
echo $salam.", "; 
echo "Perkenalkan, nama saya ".$nama."\n"; 

echo "Saya berusia ". hitung_umur(1994, 2015) ." tahun\n"; 
echo "Senang berkenalan dengan anda\n"; 
} 

perkenalan("Fulan"); 
?>