<?php
    function reverseWords($kata){
        return strrev($kata);
    }
    $kata = "Kamsih";
    $result = reverseWords($kata);

    echo "Kata sebelum dibalikkan adalah $kata \n";
    echo "Kata setelah dibalikkan adalah $result";
