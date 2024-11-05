<!-- 
Buat program PHP yang menerima input berupa angka dari pengguna,
kemudian menghitung dan menampilkan hasil 
faktorial dari angka tersebut.
Contoh:
Masukkan angka: 5
Hasil faktorial dari 5 adalah 120
-->

<?php
function hitungFaktorial($angka){
    // penggunaan ternary operator
    return ($angka == 0) ? 1 : $angka * hitungFaktorial($angka - 1);
}

// meminta input dari pengguna
echo "Masukkan angka: ";
$angka = trim(fgets(STDIN));

// validasi input 
if (!is_numeric($angka) || $angka < 0){
    echo "Harap masukkan non-negatif\n";
    exit(1);
}

echo "Hasil faktorial dari $angka adalah: " .hitungFaktorial($angka).PHP_EOL;



