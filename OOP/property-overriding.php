<?php
    class Produk{
        public function merek(){
            return "Sony";
        }
    }
    class Televisi extends Produk{
        public $merek = "Panasonic";

        public function getMerek(){
            return parent::merek();
        }
    }

    $produk01 = new Televisi();
    echo $produk01->merek;
    echo "\n";
    echo $produk01->getMerek();

    