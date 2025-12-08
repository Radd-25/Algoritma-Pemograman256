<?php

function processNim(int $nim) {
    $digits = array_map('intval', str_split((string)$nim));
    $arraySize = count($digits);

    if ($arraySize === 0) {
        echo "NIM tidak valid atau kosong.\n";
        return;
    }

    $totalValue = array_sum($digits);
    $maxVal = max($digits);
    $minVal = min($digits);
    $average = $totalValue / $arraySize;
    $reversedArray = array_reverse($digits);

    echo "-------------------------\n";
    echo "NIM: " . $nim . "\n";
    echo "Array Digit: [" . implode(", ", $digits) . "]\n";
    echo "-------------------------\n";
    echo "Total Nilai: " . $totalValue . "\n";
    echo "Nilai Max: " . $maxVal . "\n";
    echo "Nilai Min: " . $minVal . "\n";
    echo "Rata-rata: " . number_format($average, 2) . "\n";
    echo "Array Terbalik: [" . implode(", ", $reversedArray) . "]\n";
}

echo "Masukan NIM: ";
$nimInput = readline(); 

if (is_numeric($nimInput)) {
    processNim((int)$nimInput);
} else {
    echo "Input harus berupa angka.\n";
}

?>