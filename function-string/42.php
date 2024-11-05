<?php
    $nilai = array(98, 59, 42, 65, 87, 66, 82, 49, 99);

    var_dump(in_array("66", $nilai));
    echo "\n";
    var_dump(in_array("66", $nilai, true));
    echo "\n";
    var_dump(in_array(66, $nilai, true));