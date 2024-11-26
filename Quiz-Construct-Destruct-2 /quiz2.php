<?php
    class Pesanan{
        private $hargaSatuan;
        private $jumlah;
        
        public function __construct($hargaSatuan, $jumlah){
            $this->hargaSatuan = $hargaSatuan;
            $this->jumlah = $jumlah;
        }
        
        public function hitungTotalHarga(){
            return $this->hargaSatuan * $this->jumlah;
        }
    }
