<?php
    function cekPalindrome($input){
        $input = preg_replace("/[^A-Za-z0-9]/", "", strtolower($input));
        return $input == strrev($input);
    }
    $input = "kasur ini rUsAk";
    echo cekPalindrome($input) ? "Palindrome" : "Bukan Palindrome";