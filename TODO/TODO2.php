<!-- 
Buat sebuah program PHP yang menerima input nilai mahasiswa, 
kemudian menghitung dan menampilkan hasil penilaian 
dalam bentuk huruf (A, B, C, D, atau E) 
berdasarkan rentang nilai yang ditentukan. 
Nilai yang digunakan adalah sebagai berikut:
A: 85-100
B: 70-84
C: 60-69
D: 50-59
E: 0-49
-->

<?php
echo "Masukkan nilai mahasiswa: ";
$nilai = trim(fgets(STDIN));

$grade = ($nilai >= 85 && $nilai <= 100) ? "A" :
         (($nilai >= 70 && $nilai <= 84) ? "B" :
         (($nilai >= 60 && $nilai <= 69) ? "C" :
         (($nilai >= 50 && $nilai <= 59) ? "D" :
         (($nilai >= 0 && $nilai <= 49) ? "E" : "Nilai tidak valid"))));

echo $grade .PHP_EOL;