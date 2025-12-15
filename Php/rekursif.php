<?php

function factorial($angka) {
    if ($angka < 2) {
        return 1;
    } else {
        return ($angka * factorial($angka - 1));
    }
}

echo "Factorial dari 5 adalah " . factorial(5) . "\n";