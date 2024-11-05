<?php
    $s = 309639;
    
    $hari = floor($s /(24 * 3600));
    $s %= (24 * 3600);

    $jam = floor ($s / 3600);
    $s %= 3600;

    $menit = floor($s /60);
    $s %= 60;

    echo "$hari hari, $jam jam, $menit menit, $s detik";