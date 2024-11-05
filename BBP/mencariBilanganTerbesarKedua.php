<?php
    function bilanganTerbesarKedua($array){
        // untuk menghapus elemen array yang sama
        $array = array_unique($array);
        // untuk mengurutkan array dari terbesar ke terkecil
        rsort($array);
        return $array[1];
    }
    $array = [1, 2, 3, 5, 8, 13, 21, 34, 55, 89];
    echo "Bilangan terbesar kedua adalah ".bilanganTerbesarKedua($array);