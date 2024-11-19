<?php
    class Orang{
        private $nama = '';
        
        public function setNama($nama){
            $this->nama = $nama;
        }
        
        public function getNama(){
            return $this->nama;
        }
    }

$orang1 = new Orang();
$orang1->setNama('Andi');
echo $orang1->getNama();
