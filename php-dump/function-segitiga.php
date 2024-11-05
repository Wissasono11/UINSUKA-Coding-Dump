<?php
    function segitiga($rows){
        for($i = 0; $i <= $rows; $i++){
            for($j = 0; $j < $i; $j++){
                echo "* ";
            }
            echo "\n";
        }
    }

    segitiga(5);
