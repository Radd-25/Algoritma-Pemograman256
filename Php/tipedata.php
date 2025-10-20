<?php 
$nim ='a';
$nama ='jhon doe';
$umur =20;
$nilai = 82.25;
$status = true;

echo "--- Belajar Tipe Data --- \n \n";
echo "tipe data char : ".$nim." \n";
echo "tipe data string : ".$nama." \n";
echo "tipe data integer : ".$umur." \n";
print "<br>";
printf("tipe data float : %.5f \n", $nilai);
echo "tipe data boolean : "; 
if ($status) {
    echo "aktif";
} else {
    echo "tidak aktif";
}

?>