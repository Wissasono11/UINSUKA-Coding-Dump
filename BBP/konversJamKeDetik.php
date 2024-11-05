<?php
    function konversiKeDetik($jam, $menit, $detik){
        return ($jam * 3600) + ($menit * 60) + $detik;
    }
    $jam = 1;
    $menit = 30; 
    $detik = 45;

    echo konversiKeDetik($jam, $menit, $detik) . " detik";
?>