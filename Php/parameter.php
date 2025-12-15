<?php

function perkenalan($nama, $salam) {
    echo $salam . ", \n";
    echo "Perkenalkan nama saya " . $nama . "\n";
    echo "senang berkenalan dengan anda.\n";
}

perkenalan("Fulan", "Asalamualaikum");

echo "\n";
$saya = "indry";
$ucapsalam = "Selamat pagi";
perkenalan($saya, $ucapsalam);
?>