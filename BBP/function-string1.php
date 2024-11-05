<?php
    function words($kata){
        sort($kata);
        return $kata;
    }
    $kata = ["aku", "suka", "kamu", "tapi..."];
    $value = words($kata);
    print_r($value);