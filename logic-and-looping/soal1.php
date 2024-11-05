<!-- ASSESMEN BAHASA PEMROGRAMAN 2024 
 buatlah program dengan output:
*
**
***
****
*****
-->

<?php
    $rows = 5; 
    for($i = 1; $i <= $rows; $i++){
        for($j = 1; $j <= $i; $j++){
            echo "*";
        }
        echo "\n";
    }