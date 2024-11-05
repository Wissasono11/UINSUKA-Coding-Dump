<!-- ASSESMEN BAHASA PEMROGRAMAN 2024 
buatlah program bilangan cacah dengan rentang dari
10-50 kemudian hitung jumlah bilangan cacahnya.
output:
11, 13, 15, 17 -> maka cacah bilangannya adalah 4 bilangan ganjil 
-->

<?php
$bilangan_ganjil = [];
for ($i = 10; $i <= 50; $i++) {
    if ($i % 2 != 0) {
        $bilangan_ganjil[] = $i;
    }
}
echo "Bilangan ganjil antara 10 hingga 50: " . implode(", ", $bilangan_ganjil) . "\n";
echo "Jumlah bilangan ganjil: " . count($bilangan_ganjil) . "\n";

