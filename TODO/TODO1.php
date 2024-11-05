<!-- 
sebuah program dalam PHP yang meminta pengguna untuk memasukkan 
tiga nilai angka, kemudian program tersebut 
akan menghitung dan menampilkan nilai rata-ratanya. 
-->

<?php
echo "Masukkan nilai 1: ";
$nilai1 = trim(fgets(STDIN));
echo "\n";

echo "Masukkan nilai 2: ";
$nilai2 = trim(fgets(STDIN));
echo "\n";

echo "Masukkan nilai 3: ";
$nilai3 = trim(fgets(STDIN));
echo "\n";

$mean = ($nilai1 + $nilai2 + $nilai3) / 3;

echo "Nilai rata-rata adalah: $mean" .PHP_EOL;

?>
 
