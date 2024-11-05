<?php
    for($i = 0; $i <= 5; $i++){
        for ($j = 0; $j <= $i; $j++){
            if ($j == 3){
                continue;
            }
            echo $j;   
        }
        echo "\n";
    }