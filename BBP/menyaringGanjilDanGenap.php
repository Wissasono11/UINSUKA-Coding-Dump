<?php
    function ambilGenap($array){
        return array_filter($array, function($value){
            return $value % 2 == 0;
        });
    }

    function ambilGanjil($array){
        return array_filter($array, function ($value){
            return $value % 2 != 0;
        });
    }
    $array = [1, 2, 3, 5, 8, 13, 21, 34, 55, 89];
    
    echo "Bilangan array yang genap: \n";
    print_r(ambilGenap($array));
    echo "Bilangan array yang ganjil: \n";
    print_r(ambilGanjil($array));