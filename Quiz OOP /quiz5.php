<?php
    class Produk{
        public $harga;
        
        public function setHarga($harga){
            $this->harga = $harga;
        }
        
        public function hitungTotalHarga($pajak){
            return $this->harga + ($this->harga * $pajak / 100);
        }
    }
$produk = new Produk();
$produk->setHarga(50000)
echo $produk->hitungTotalHarga(5)
