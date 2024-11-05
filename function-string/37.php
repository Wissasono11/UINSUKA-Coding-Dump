<?php
    $siswa = array("andi", "gina", "joko", "santi", "rini", "rika", "joy");
    $key_siswa = array_rand($siswa);

    echo $key_siswa. "\n";
    echo $siswa[$key_siswa];
    