<?php 

function perkenalan($nama, $salam="Assalamualaikum"){ 
echo $salam.", "; 
echo "Perkenalkan, nama saya ".$nama."\n"; 
echo "Senang berkenalan dengan anda\n"; 
} 

perkenalan("Fulan", "Hi"); 
echo "\n"; 
$saya = "Indry"; 
$ucapanSalam = "Selamat pagi"; 

perkenalan($saya); 
?> 
