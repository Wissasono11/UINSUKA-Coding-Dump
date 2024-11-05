<?php 
    $planet = [
        'Planet 1' => 'Merkurius', 
        'Planet 2' => 'Venus', 
        'Planet 3' => 'Bumi', 
        'Planet 4' => 'Mars', 
        'Planet 5' => 'Jupiter', 
        'Planet 6' => 'Saturnus', 
        'Planet 7' => 'Uranus', 
        'Planet 8' => 'Neptunus', 
        
    ];
    foreach($planet as $array => $value){
        echo $array .' : '.$value. '<br>';
    }