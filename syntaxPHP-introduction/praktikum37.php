<?php
    $siswa = [
        "kelasx"=> ["Santi", "Yanto", "Reza"],
        "kelasxi"=> ["Tia", "Siska", "Nova"],
        "kelasxii"=> ["Robert", "Rudi", "Alex"]
    ];

    echo $siswa["kelasxi"][0];
    echo "<br>";
    echo $siswa["kelasxii"][2];
    echo "<br>";
    echo $siswa["kelasx"][1];
    
    echo "<pre>";
    print_r($siswa);
    echo "</pre>";
    