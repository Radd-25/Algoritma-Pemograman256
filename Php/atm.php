<?php

$saldo = 0;
$check = false;

do {
    echo "Masukan Nama Anda : ";
    $nama = trim(fgets(STDIN));

    echo "Apakah nama anda benar? $nama (1 untuk benar, 0 untuk salah) : ";
    $confirm = trim(fgets(STDIN));

    if ($confirm == "1") {
        echo "Selamat datang $nama\n";
        echo "Masukan Saldo awal anda (hanya angka): ";
        $saldo = intval(fgets(STDIN));
        $check = true;
    } elseif ($confirm == "0") {
        echo "Baik, silakan coba lagi.\n\n";
    } else {
        echo "Input tidak valid. Silakan masukan 1 atau 0.\n\n";
    }

} while (!$check);

echo "\n=== Menu ATM ===\n";
echo "1. Cek saldo\n";
echo "2. Tarik tunai\n";
echo "3. Setor tunai\n";
echo "4. Transfer\n";
echo "5. Keluar\n\n";

echo "Pilih menu : ";
$menu = intval(fgets(STDIN));

switch ($menu) {

    case 1:
        echo "Saldo anda saat ini adalah : Rp$saldo\n";
        break;

    case 2:
        echo "Masukan jumlah uang yang ingin ditarik : Rp ";
        $tarik = intval(fgets(STDIN));

        echo "Anda akan menarik saldo sebesar Rp $tarik (1 untuk benar, 0 untuk salah) : ";
        $confirm = trim(fgets(STDIN));

        if ($confirm == "1") {
            if ($tarik > $saldo) {
                echo "Maaf saldo anda tidak mencukupi\n";
            } else {
                $saldo -= $tarik;
                echo "Transaksi berhasil.\nSaldo anda saat ini adalah Rp$saldo\n";
            }
        } else {
            echo "Transaksi dibatalkan\n";
        }
        break;

    case 3:
        echo "Masukan jumlah uang yang ingin disetor : Rp ";
        $setor = intval(fgets(STDIN));

        $saldo += $setor;
        echo "Transaksi berhasil.\nSaldo anda saat ini adalah Rp$saldo\n";
        break;

    case 4:
        echo "Masukan nomor rekening tujuan : ";
        $rek = trim(fgets(STDIN));

        echo "Masukan jumlah uang yang ingin ditransfer : Rp ";
        $transfer = intval(fgets(STDIN));

        if ($transfer > $saldo) {
            echo "Maaf saldo anda tidak mencukupi\n";
        } else {
            echo "Anda akan mentransfer Rp $transfer ke rekening $rek (1 untuk benar, 0 untuk salah) : ";
            $confirm = trim(fgets(STDIN));

            if ($confirm == "1") {
                $saldo -= $transfer;
                echo "Transaksi berhasil.\nSaldo anda saat ini adalah Rp$saldo\n";
            } else {
                echo "Transaksi dibatalkan\n";
            }
        }
        break;

    case 5:
        echo "Sampai jumpa lagi!\n";
        break;

    default:
        echo "Menu tidak tersedia\n";
        break;
}

?>
