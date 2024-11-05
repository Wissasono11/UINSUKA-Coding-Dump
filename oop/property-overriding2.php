<?php
class Produk {
    public static $merek = "Sony";
}

class Televisi extends Produk{
    public static $merek = "Panasonic";
    public $merekProduk;

    public function __construct() {
        $this->merekProduk = parent::$merek;
    }
}
$produk01 = new Televisi();
echo $produk01->merekProduk; // Output: Sony
