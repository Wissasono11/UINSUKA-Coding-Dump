<?php
    function triangle($rows){
        for($i = 0; $i <= $rows; $i++){
            for($j = 0; $j <= $i; $j++){
                if($j % 2 == 0){
                    echo " b";   
                } else{
                    echo " a";
                }
            if($i % 2 != 0){
                echo " y";
            } else{
                echo " u";
            }
        }
            echo "\n";
        }
    }
    triangle(5);
