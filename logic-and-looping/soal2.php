<!-- ASSESMEN BAHASA PEMROGRAMAN 2024 
  buatlah program dengan output:
*
*#
*#*
*#*#
*#*#*
*#*#*#
-->
<?php
    $rows = 6; 
    for($i = 1; $i <= $rows; $i++){
        for ($j = 1; $j <= $i; $j++ ){
            if($j % 2 == 0){
                echo "#";
            }
            else{
                echo "*";
            }
        }
        echo "\n";
    }