<?php
    class Orang{
        public $tahunLahir = "";
        
        public function setTahunLahir($tahun){
            $this->tahunLahir = $tahun;
        }
        
        public function hitungUsia($tahunSekarang){
            return $tahunSekarang - $this->tahunLahir;
        }
    }
$orang = new Orang();
$orang->setTahunLahir(2003);
echo $orang->hitungUsia(2024);
