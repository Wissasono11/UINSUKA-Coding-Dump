<?php
echo "Masukkan nilai mahasiswa: ";
$nilai = trim(fgets(STDIN));

$grade = ($nilai >= 85 && $nilai <= 100) ? "A" :
         (($nilai >= 70 && $nilai <= 84) ? "B" :
         (($nilai >= 60 && $nilai <= 69) ? "C" :
         (($nilai >= 50 && $nilai <= 59) ? "D" :
         (($nilai >= 0 && $nilai <= 49) ? "E" : "Nilai tidak valid"))));

echo $grade .PHP_EOL;