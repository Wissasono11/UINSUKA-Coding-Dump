<?php
    function revSegitiga($rows){
        for($i = $rows; $i >= 1; $i--){
            for($j = 1; $j <= $i; $j++){
                echo "* ";
            }
            echo "\n";
        }
    }
    $rows = 5; 
    revSegitiga($rows);