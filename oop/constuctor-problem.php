<?php
    class Produk{
        public $jenis;
        public $merek;
        public $stok;
    }

    $produk01 = new Produk();
    $produk01->jenis = "Televisi";
    $produk01->merek = "Samsung";
    $produk01->stok = 10;

    $produk02 = new Produk();
    $produk02->jenis = "Mesin cuci";
    $produk02->merek = "LG";
    $produk02->stok = 10;

    print_r($produk01);
    echo "\n";
    print_r($produk02);