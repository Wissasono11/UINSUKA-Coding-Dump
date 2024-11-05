<?php
    function hitungFrekuensiKarakter($string){
        $frekuensi = [];
        for($i = 0; $i < strlen($string); $i++){
            $char = $string[$i];
           
            if(isset($frekuensi[$char])){
                $frekuensi[$char]++;
            }
            else{
                $frekuensi[$char] = 1;
            }
        }
        return $frekuensi;
    }

    $string = "kasur ini rusak";
    print_r(hitungFrekuensiKarakter($string));