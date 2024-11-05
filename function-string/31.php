a<?php
    $zoo = [
            "ayam" => ["kampung", "buras", "kate", "hutan"],
            "kucing" => ["persia", "himalaya", "anggora", "kampung", "hutan"]
           ];
    echo count($zoo);
    echo "\n";
    echo count($zoo, COUNT_RECURSIVE);