<?php
    function averageTest($num){
        $average = array_sum($num);
        $lengthNum = count($num);
        $value = $average / $lengthNum;
        echo "Average dari num adalah ".$value;
    } 
    $num = array(45, 67, 89, 34, 23, 56, 78, 90, 12);

    averageTest($num);
    

