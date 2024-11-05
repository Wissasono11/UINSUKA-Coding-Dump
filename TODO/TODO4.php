<!-- 
Buat program PHP yang dapat mengonversi suhu dari Celcius, Kelvin, Fahrenheit dan sebaliknya. 
Program harus meminta pengguna untuk memasukkan suhu 
dan unit yang diinginkan untuk konversi. 
program yang dapat dikonversi seperti berikut:
1. Celcius ke Fahrenheit
2. Fahrenheit ke Celcius
3. Celcius ke Kelvin
4. Kelvin ke Celcius
5. Fahrenheit ke Kelvin
6. Kelvin ke Fahrenheit
Rumus konversi suhu:
1. Celcius ke Fahrenheit: F = C * 9/5 + 32
2. Fahrenheit ke Celcius: C = (F - 32) * 5/9
3. Celcius ke Kelvin: K = C + 273.15
4. Kelvin ke Celcius: C = K - 273.15
5. Fahrenheit ke Kelvin: K = (F - 32) * 5/9 + 273.15
6. Kelvin ke Fahrenheit: F = (K - 273.15) * 9/5 + 32
-->

<?php
function konversiSatuan($suhu, $from_unit, $to_unit) {
    switch ($from_unit) {
        case 'C':
            if ($to_unit == 'F') {
                return ($suhu * 9/5) + 32;
            } elseif ($to_unit == 'K') {
                return $suhu + 273.15;
            } else {
                return "Unit konversi tidak valid.";
            }
        case 'F':
            if ($to_unit == 'C') {
                return ($suhu - 32) * 5/9;
            } elseif ($to_unit == 'K') {
                return ($suhu - 32) * 5/9 + 273.15;
            } else {
                return "Unit konversi tidak valid.";
            }
        case 'K':
            if ($to_unit == 'C') {
                return $suhu - 273.15;
            } elseif ($to_unit == 'F') {
                return ($suhu - 273.15) * 9/5 + 32;
            } else {
                return "Unit konversi tidak valid.";
            }
        default:
            return "Unit asal tidak valid.";
    }
}

// meminta inputan ke pengguna
echo "Masukkan suhu yang ingin dikonversi: ";
$suhu = trim(fgets(STDIN));

echo "Masukkan unit asal (C/F/K): ";
$from_unit = trim(fgets(STDIN));

echo "Masukkan unit tujuan (C/F/K): ";
$to_unit = trim(fgets(STDIN));

// validasi inputan
if (!in_array($from_unit, ['C', 'F', 'K']) || !in_array($to_unit, ['C', 'F', 'K'])) {
    echo "Unit yang diinputkan tidak valid" . PHP_EOL;
} else {
    $result = konversiSatuan($suhu, $from_unit, $to_unit);
    echo "Hasil konversi $from_unit ke $to_unit adalah $result" . PHP_EOL;
}
?>