<?php
    $komentar = "<b>Nice info gan</b>, <br> <i>kunjungi blog ane ya.. </i>
                 <a href='http://www.situsspam.com'>www.situsspam.com</a>";
    echo $komentar;

    echo "\n";
    
    echo strip_tags($komentar);
    
    echo "\n";
    
    echo strip_tags($komentar, "\n<i>");



