<?php
    $baris = 6;
    for($i = 1; $i <= $baris; $i++){
        for($j = 1; $j < $i; $j++){
            echo "* ";
        }
        echo "<br>";
    }
?>

<?php 
    for($i = 1; $i <= $baris; $i--){
        for($j = 1; $j < $i; $j--){
            echo "* ";
        }
        echo "<br>";
    }