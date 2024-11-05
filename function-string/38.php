<?php
    $siswa = array("andi", "ghina", "joko","santi", "rini", "rika", "joy");
    $key_siswa = array_rand($siswa, 2);

    print_r($key_siswa);

    echo $siswa[$key_siswa[0]];
    echo "\n";
    echo $siswa[$key_siswa[1]];