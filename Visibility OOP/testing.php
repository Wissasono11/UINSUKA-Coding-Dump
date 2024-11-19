<?php
    class Mobil{
        public $merk = '';
        
        public function __construct($merk){
            $this->merk = $merk;
        }
        
        public function getMerk(){
            return $this->merk;
        }
    }
    $mobil1 = new Mobil("");
    echo "" . $mobil1->getMerk();