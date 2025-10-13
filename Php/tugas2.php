<?php
define("PI", 3.14159);
$r = floatval(readline("Masukkan jari-jari lingkaran: "));
$area = PI * $r * $r;
echo "Luas lingkaran: " . $area . "\n";
?>