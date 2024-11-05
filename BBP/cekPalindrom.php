<?php
    function cekPalindrom($word){
        $reverseWords = strrev($word);
        return $word === $reverseWords;
    }
    $word = "kakak";

    if(cekPalindrom($word)){
        echo "$word adalah kata palindrom";
    } else{
        echo "$word bukan kata palindrom";
    }
?>