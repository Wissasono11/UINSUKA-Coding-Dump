<!-- ASSESMEN BAHASA PEMROGRAMAN 2024 
lanjutkan kode program dibawah ini:
-->

<?php
    $cari = 3;
    $bulan = array(
        1 => "Januari",
        2 => "Februari",
        3 => "Maret",
        4 => "April",
    );
    // yang dilanjutkan:
    foreach ($bulan as $cari => $value) {
        if($cari == 3){
            echo "Bulan $value";
        }
    }