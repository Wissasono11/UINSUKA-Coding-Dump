<?php 
    function nilaiMax($angka1, $angka2, $angka3){
        return max($angka1, $angka2, $angka3);
    }

    $angka1 = 5; 
    $angka2 = 12;
    $angka3 = 7;

    $result = nilaiMax($angka1, $angka2, $angka3);

    echo "Maka nilai terbesar dari ketiga bilangan tersebut adalah $result";
?>