<?php
    class Produk{
        public function __construct(){
            echo "Constructor dijalankan....\n";
        }
        public function __destruct(){
            echo "Destructor dijalankan....\n";
        }
    }
    $produk01 = new Produk();
    $produk02 = null;

    echo "Program selesai \n";